# Import TextBlob
from textblob import TextBlob

# Input text
text = "This movie is very good"

# Create a TextBlob object
analysis = TextBlob(text)

# Get sentiment
sentiment = analysis.sentiment

# Output
print("Text:", text)
print("Sentiment Polarity:", sentiment.polarity)
print("Sentiment Subjectivity:", sentiment.subjectivity)

# Optional: simple interpretation
if sentiment.polarity > 0:
    print("Overall Sentiment: Positive")
elif sentiment.polarity < 0:
    print("Overall Sentiment: Negative")
else:
    print("Overall Sentiment: Neutral")
