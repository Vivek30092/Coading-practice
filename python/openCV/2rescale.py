import cv2 as cv

img=cv.imread("C:/Users/housh/Desktop/vivek/coading/python/openCV/woman.png")
cv.imshow('woman',img)

def rescaleFrame(frame,scaele=0.75):
    width = frame.shape[1]*scaele
    height=int(frame.shape)

cv.waitKey(0)