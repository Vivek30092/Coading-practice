import re
import pandas as pd
import numpy as np
import requests
import tldextract
from bs4 import BeautifulSoup
from urllib.parse import urlparse
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score
import joblib

# Function to extract features from a given URL
def extract_features(url):
    features = {}
    parsed_url = urlparse(url)

    # Basic URL Features
    features['url_length'] = len(url)
    features['num_digits'] = sum(c.isdigit() for c in url)
    features['num_special_chars'] = len(re.findall(r'[!@#$%^&*(),.?":{}|<>]', url))
    features['num_subdomains'] = url.count('.')

    # Domain features
    domain_info = tldextract.extract(url)
    features['domain_length'] = len(domain_info.domain)
    features['is_https'] = 1 if parsed_url.scheme == 'https' else 0

    # Check for phishing-related keywords
    phishing_keywords = ['secure', 'account', 'webscr', 'login', 'banking', 'update', 'confirm']
    features['has_phishing_keyword'] = any(keyword in url.lower() for keyword in phishing_keywords)

    # Fetch webpage content
    try:
        response = requests.get(url, timeout=5)
        page_content = response.text
        soup = BeautifulSoup(page_content, 'html.parser')
        
        # Count external links
        external_links = [a['href'] for a in soup.find_all('a', href=True) if urlparse(a['href']).netloc and urlparse(a['href']).netloc != parsed_url.netloc]
        features['num_external_links'] = len(external_links)
        
        # Count iframes (often used in phishing)
        features['num_iframes'] = len(soup.find_all('iframe'))
        
        # Check for JavaScript redirects
        features['has_javascript_redirect'] = 1 if "window.location" in page_content.lower() else 0

    except:
        # If website is unreachable, assume high risk
        features['num_external_links'] = 0
        features['num_iframes'] = 0
        features['has_javascript_redirect'] = 0

    return features

# Load dataset (Use an existing dataset or collect labeled phishing & safe URLs)
dataset = pd.read_csv('phishing_dataset.csv')  # Ensure this file contains labeled data

# Feature extraction for dataset
feature_list = []
labels = []
for index, row in dataset.iterrows():
    url = row['url']
    label = row['label']  # 0 = Safe, 1 = Phishing
    features = extract_features(url)
    feature_list.append(features)
    labels.append(label)

# Convert to DataFrame
features_df = pd.DataFrame(feature_list)
labels = np.array(labels)

# Train/Test Split
X_train, X_test, y_train, y_test = train_test_split(features_df, labels, test_size=0.2, random_state=42)

# Train a RandomForest Classifier
model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_train, y_train)

# Evaluate Model
y_pred = model.predict(X_test)
accuracy = accuracy_score(y_test, y_pred)
print(f'Model Accuracy: {accuracy:.2f}')

# Save the model
joblib.dump(model, 'phishing_detector.pkl')

# Function to Predict a New URL
def predict_url(url):
    model = joblib.load('phishing_detector.pkl')
    features = extract_features(url)
    features_df = pd.DataFrame([features])
    prediction = model.predict(features_df)
    return "Phishing" if prediction[0] == 1 else "Safe"

# Example Usage
test_url = "http://example-login-verification.com"
print(f"Prediction for {test_url}: {predict_url(test_url)}")
