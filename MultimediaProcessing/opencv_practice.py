# 这个文件用来练习使用OpenCV，并没有特定实现什么功能
# Just for practicing


import cv2
import os
module_path = os.path.dirname(__file__)
filein = module_path + '/square_detection/data2.avi'
c = cv2.VideoCapture(filein)
while(c.isOpened()):
    ret, frame = c.read()
    if not ret:
        break
    cv2.imshow('1', frame)
    # if cv2.waitKey(1) & 0xFF == ord('q'):
    #     break
c.release()
cv2.destroyAllWindows() 