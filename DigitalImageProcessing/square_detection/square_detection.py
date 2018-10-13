__author__ = 'tingxinzhe'
__version__ = '1.0'
__date__ = '12/10/2018'
import os
import cv2
import numpy as np

module_path = os.path.dirname(__file__)
filename = module_path + '/data2.avi'
cap = cv2.VideoCapture(filename)
# 定义保存视频时的编码并创建VideoWrite对象
fourcc = cv2.VideoWriter_fourcc(*'XVID')
out = cv2.VideoWriter('output.avi', fourcc, 20.0, (640, 480))
Lower = np.array([20, 200, 180])  # 要识别颜色的下限
Upper = np.array([35, 255, 255])  # 要识别的颜色的上限
# kernel_2 = np.ones((2, 2), np.uint8)  # 2x2的卷积核
# kernel_3 = np.ones((3, 3), np.uint8)  # 3x3的卷积核
kernel_4 = np.ones((4, 4), np.uint8)  # 4x4的卷积核
while (cap.isOpened()):
    ret, frame = cap.read()
    # 判断视频是否结束。cap.read() 返回一个布尔值（True/False）。如果帧读取的是正确的，就是True，否则为False
    if(ret is False):
        break
    HSV = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)  # 把BGR图像转换为HSV格式
    mask = cv2.inRange(HSV, Lower, Upper)
    erosion = cv2.erode(mask, kernel_4, iterations=1)
    erosion = cv2.erode(erosion, kernel_4, iterations=1)
    dilation = cv2.dilate(erosion, kernel_4, iterations=1)
    dilation = cv2.dilate(dilation, kernel_4, iterations=1)
    # target是将原图中非目标颜色的区域除去后剩下的图像
    target = cv2.bitwise_and(frame, frame, mask=dilation)
    # 将滤波后的图像变成二值图像放在binary中
    ret, binary = cv2.threshold(mask, 200, 255, cv2.THRESH_BINARY)
    # 在binary中发现轮廓
    img, contours, hierarchy = cv2.findContours(
        binary, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    # 将所有轮廓按面积降序排序
    areas = np.zeros(len(contours))
    idx = 0
    for cont in contours:
        areas[idx] = cv2.contourArea(cont)
        idx = idx+1
    areas_s = cv2.sortIdx(areas, cv2.SORT_DESCENDING | cv2.SORT_EVERY_COLUMN)
    area_max = contours[areas_s[0][0]]  # 面积最大的图形，即我们要标记的图形
    x, y, w, h = cv2.boundingRect(area_max)
    # 在图像上画上矩形（图片、左上角坐标、右下角坐标、颜色、线条宽度）
    cv2.rectangle(frame, (x, y),
                  (x+w, y+h), (0, 255, 0), 2)
    # 改进一下画矩形的方式（红色与绿色矩形的差别）
    rect = cv2.minAreaRect(area_max)
    box = cv2.boxPoints(rect)
    box = np.int0(box)
    cv2.drawContours(frame, [box], 0, (0, 0, 255), 2)
    # cv2.imshow("processed", frame)
    approx = cv2.approxPolyDP(area_max, 15, True)
    cv2.polylines(frame, [approx], True, (255, 0, 0), 2)
    # cv2.drawContours(frame, area_max, -1, (255, 0, 0), 3)
    cv2.imshow("p", frame)
    # cv2.imshow('target', target)
    # cv2.imshow('Mask', mask)
    # cv2.imshow("prod", dilation)
    out.write(frame)  # 保存视频
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
cap.release()
out.release()
cv2.destroyAllWindows()
