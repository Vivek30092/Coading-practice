import cv2 as cv 

# #capture image
# img=cv.imread("C:/Users/housh/Pictures/Screenshots/woman.png")
# cv.imshow("woman",img)
# cv.waitKey(0)

# now we will capture a video
# capture our own camera
capture = cv.VideoCapture(0)

# providing video using path
# capture = cv.VideoCapture("C:/Users/housh/Pictures/Camera Roll/vid.mp4")
while True:
    isTrue, frame =capture.read()
    cv.imshow('video',frame)
    if cv.waitKey(20) & 0xFF==ord('d'):
        break
    
capture.release()
cv.destroyAllWindows()