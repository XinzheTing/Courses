__author__ = 'tingxinzhe'
__version__ = '1.0'
__date__ = '12/10/2018'
import os
import cv2
import numpy as np

# 设置读入文件路径，视频与源代码在同一文件夹下，但是直接输入视频名称会报错，故自动获取视频的绝对路径
module_path = os.path.dirname(__file__)
filein = module_path + '/data2.avi'
cap = cv2.VideoCapture(filein)  # 打开视频文件
fileout = module_path+'/output.avi'
fourcc = cv2.VideoWriter_fourcc(*'XVID')    # 定义保存视频时的编码并创建VideoWrite对象
out = cv2.VideoWriter(fileout, fourcc, 30.0, (1280, 720))  # 设置输出视频的帧率和分辨率

# 设置要识别的颜色的范围
Lower = np.array([20, 200, 180])
Upper = np.array([35, 255, 255])

while (cap.isOpened()):
    ret, frame = cap.read()
    # 判断视频是否结束。cap.read() 返回一个布尔值（True/False）。如果帧读取的是正确的，就是True，否则为False
    if(ret is False):
        break

    # 把BGR图像转换为HSV格式
    HSV = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    # 根据阈值设置掩模
    mask = cv2.inRange(HSV, Lower, Upper)

    # 将原图与掩模进行位运算
    target = cv2.bitwise_and(frame, frame, mask=mask)

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

    # 第一种标记方式（绿色）
    x, y, w, h = cv2.boundingRect(area_max)
    # 在图像上画上矩形（图片、左上角坐标、右下角坐标、颜色、线条宽度）
    cv2.rectangle(frame, (x, y),
                  (x+w, y+h), (0, 255, 0), 2)

    # 第二种标记方式（红色）
    rect = cv2.minAreaRect(area_max)
    box = cv2.boxPoints(rect)
    box = np.int0(box)
    cv2.drawContours(frame, [box], 0, (0, 0, 255), 2)

    # 第三中标记方式（蓝色）
    approx = cv2.approxPolyDP(area_max, 15, True)
    cv2.polylines(frame, [approx], True, (255, 0, 0), 2)

    cv2.imshow("processed", frame)
    # cv2.imshow('target', target)
    # cv2.imshow('Mask', mask)

    out.write(frame)  # 保存视频
    # 按Q键终止程序
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
cap.release()
out.release()
cv2.destroyAllWindows()
