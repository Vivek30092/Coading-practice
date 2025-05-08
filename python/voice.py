import pyaudio
import numpy as np

# Constants
CHUNK = 1024  # Buffer size
FORMAT = pyaudio.paInt16  # Audio format
CHANNELS = 1  # Mono audio
RATE = 44100  # Sampling rate in Hz
PITCH_FACTOR = 1.5  # Pitch modification factor (higher increases pitch)

# Create PyAudio instance
p = pyaudio.PyAudio()

# Function to change the pitch of the audio signal
def pitch_shift(data, pitch_factor):
    """ Modify the pitch of an audio signal """
    data_np = np.frombuffer(data, dtype=np.int16)
    fourier = np.fft.rfft(data_np)
    shifted = np.zeros_like(fourier)
    
    # Shift frequencies by multiplying indices by pitch factor
    for i in range(len(fourier)):
        new_i = int(i * pitch_factor)
        if new_i < len(fourier):
            shifted[new_i] = fourier[i]
    
    # Inverse FFT to get the time domain signal
    modified_data_np = np.fft.irfft(shifted).astype(np.int16)
    return modified_data_np.tobytes()

# Open stream for capturing audio from microphone
stream = p.open(format=FORMAT,
                channels=CHANNELS,
                rate=RATE,
                input=True,
                output=True,
                frames_per_buffer=CHUNK)

print("Listening and modifying audio...")

try:
    while True:
        # Read a chunk of audio data from the input stream
        data = stream.read(CHUNK)
        
        # Modify the pitch of the audio data
        modified_data = pitch_shift(data, PITCH_FACTOR)
        
        # Play the modified audio data through the output stream
        stream.write(modified_data)
except KeyboardInterrupt:
    # Stop and close the stream
    stream.stop_stream()
    stream.close()

# Terminate PyAudio instance
p.terminate()

print("Program terminated.")
