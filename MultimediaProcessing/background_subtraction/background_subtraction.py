__author__ = 'tingxinzhe'
__date__ = '15/10/2018'

import os
import cv2

# KNN


def KNN_method(video):
    camera = cv2.VideoCapture(video)
    KNN_history = 50
    # 背景消除器，设置阴影检测
    KNN_bs = cv2.createBackgroundSubtractorKNN(detectShadows=True)
    KNN_bs.setHistory(KNN_history)

    frames = 0
    cv2.namedWindow('KNN', cv2.WINDOW_NORMAL)
    while(True):
        ret, frame = camera.read()
        if not ret:
            break
        fg_mask = KNN_bs.apply(frame)
        if frames < KNN_history:
            frames += 1
            continue
        # 对原始帧进行膨胀去噪
        th = cv2.threshold(fg_mask.copy(), 244, 255, cv2.THRESH_BINARY)[1]
        th = cv2.erode(th, cv2.getStructuringElement(
            cv2.MORPH_ELLIPSE, (3, 3)), iterations=2)
        dilated = cv2.dilate(th, cv2.getStructuringElement(
            cv2.MORPH_ELLIPSE, (8, 3)), iterations=2)
        # 获取所有检测框
        image, contours, hier = cv2.findContours(
            dilated, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        for c in contours:
            # 获取矩形框的左上角左边以及矩形的长宽
            x, y, w, h = cv2.boundingRect(c)
            # 计算矩形面积
            area = cv2.contourArea(c)
            if 500 < area < 3000:
                cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
        cv2.imshow('KNN', frame)
        cv2.imshow('KNN_b', dilated)
        if cv2.waitKey(10) & 0xFF == 27:
            break
    camera.release()
    cv2.destroyAllWindows()

# MOG2


def MOG2_method(video):
    camera = cv2.VideoCapture(video)
    MOG2_history = 120
    MOG2_bs = cv2.createBackgroundSubtractorMOG2(
        history=MOG2_history, detectShadows=True)
    MOG2_bs.setHistory(MOG2_history)
    frames = 0
    cv2.namedWindow('MOG2', cv2.WINDOW_NORMAL)
    while True:
        ret, frame = camera.read()
        if not ret:
            break
        fg_mask = MOG2_bs.apply(frame)

        if frames < MOG2_history:
            frames += 1
            continue
        # 图像二值化
        ret2, binary = cv2.threshold(
            fg_mask.copy(), 244, 255, cv2.THRESH_BINARY)
        # 获取图像所有检测框
        image, contours, hier = cv2.findContours(
            binary, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        for c in contours:
            # 获取矩形框边界坐标
            x, y, w, h = cv2.boundingRect(c)
            # 计算矩形框的面积
            area = cv2.contourArea(c)
            if 500 < area < 3000:
                cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
        cv2.imshow('MOG2', frame)
        cv2.imshow('MOG2_b', binary)
        if cv2.waitKey(1) & 0xFF == 27:
            break
    camera.release()
    cv2.destroyAllWindows()

# GMG


def GMG_method(video):
    camera = cv2.VideoCapture(video)
    GMG_history = 40
    GMG_bs = cv2.bgsegm.createBackgroundSubtractorGMG(
        initializationFrames=GMG_history)

    frames = 0
    cv2.namedWindow('GMG', cv2.WINDOW_NORMAL)

    while True:
        ret, frame = camera.read()

        if not ret:
            break

        # 获取 foreground mask
        fg_mask = GMG_bs.apply(frame)

        if frames < GMG_history:
            frames += 1
            continue
        # 图像二值化
        ret2, binary = cv2.threshold(
            fg_mask.copy(), 244, 255, cv2.THRESH_BINARY)
        # 获取所有检测框
        image, contours, hier = cv2.findContours(
            binary, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        for c in contours:
            # 获取矩形框的左上角左边以及矩形的长宽
            x, y, w, h = cv2.boundingRect(c)
            # 计算矩形面积
            area = cv2.contourArea(c)
            if 500 < area < 3000:
                cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
        cv2.imshow('GMG', frame)
        cv2.imshow('GMG_b', binary)
        if cv2.waitKey(1) & 0xFF == 27:
            break
    camera.release()
    cv2.destroyAllWindows()


if __name__ == '__main__':
    model_path = os.path.dirname(__file__)
    filein = model_path+'/level_4.mp4'
    KNN_method(filein)
    MOG2_method(filein)
    GMG_method(filein)
