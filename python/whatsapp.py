import pywhatkit as kit
import time

# Set the receiver's phone number and message content
phone_number = ''  # Replace with the recipient's phone number including country code
message = ''
# Number of times to send the message
num_messages = 5

# Time interval between messages in seconds
interval = 5 # 30 seconds

# Current time (24-hour format)
hour = 9  # Set the hour to start sending
minute = 34  # Set the minute to start sending

# Send the message multiple times
for i in range(num_messages):
    kit.sendwhatmsg(phone_number, message, hour, minute + i)
    print(f'Message {i+1} sent to {phone_number}')
    time.sleep(interval)  # Wait before sending the next message

