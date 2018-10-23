# 这个文件用来练习使用OpenCV，并没有特定实现什么功能
# Just for practicing


import cv2

c = cv2.VideoCapture(0)
while(c.isOpened()):
    ret, frame = c.read()
    cv2.imshow('1', frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
c.release()
cv2.destroyAllWindows() 