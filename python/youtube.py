from pytube import YouTube

def download_youtube_video(url):
    try:
        # Create YouTube object
        yt = YouTube(url)

        # Filter streams to find 720p video with audio
        stream = yt.streams.filter(res="720p", progressive=True, file_extension="mp4").first()

        if not stream:
            print("720p with audio not available for this video.")
            return

        # Get file name
        file_name = stream.default_filename

        # Download the video
        print(f"Downloading '{file_name}'...")
        stream.download()
        print(f"Download completed: {file_name}")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    video_url = input("Enter the YouTube video URL: ")
    download_youtube_video(video_url)
