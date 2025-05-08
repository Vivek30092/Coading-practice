from instabot import Bot
import time

# Create an instance of the Bot
bot = Bot()

# Log in to Instagram
username = ''  # Replace with your Instagram username
password = ''  # Replace with your Instagram password
bot.login(username=username, password=password)

# Target user and message content
user = ''  # Replace with the target Instagram username
message = 'Hello! This is an automatically sent message.'

# Number of times to send the message
num_messages = 15

# Time interval between messages in seconds
interval = 1 # 1 minute

# Send message `num_messages` times
for _ in range(num_messages):
    bot.send_message(message, [user])
    print(f'Message sent to {user}')
    time.sleep(interval)  # Wait for the specified interval before sending the next message
