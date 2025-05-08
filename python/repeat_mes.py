import time
import pyttsx3

# Initialize the text-to-speech engine
engine = pyttsx3.init()

message = "This is a repeated voice message"
repeat_count = 10
delay = 10  # time in seconds

# Function to speak the message
def speak(text):
    engine.say(text)
    engine.runAndWait()

# Repeat the voice message with delay
for i in range(repeat_count):
    speak(message)
    time.sleep(delay)  # wait for 10 seconds before repeating
