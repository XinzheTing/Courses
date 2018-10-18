__author__ = 'tingxinzhe'
__date__ = '15/10/2018'

import cv2


def detect_video(video):
    camera = cv2.VideoCapture(video)
    history = 150
    # 背景消除器，设置阴影检测
    # bs = cv2.createBackgroundSubtractorKNN(detectShadows=True)
    # bs.setHistory(history)

    # bs = cv2.createBackgroundSubtractorMOG2(history=history)
    # bs.setHistory(history)

    bs = cv2.bgsegm.createBackgroundSubtractorGMG(initializationFrames=history)
    
    frames = 0

    while True:
        ret, frame = camera.read()

        if not ret:
            break

        # 获取 foreground mask
        fg_mask = bs.apply(frame)

        if frames < history:
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
            th, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        for c in contours:
            # 获取矩形框的左上角左边以及矩形的长宽
            x, y, w, h = cv2.boundingRect(c)
            # 计算矩形面积
            area = cv2.contourArea(c)
            if 500 < area < 3000:
                cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)

        cv2.namedWindow('back',cv2.WINDOW_NORMAL)
        cv2.imshow('detection', frame)
        cv2.imshow('back', dilated)
        if cv2.waitKey(1) & 0xFF == 27:
            break
    camera.release


if __name__ == '__main__':
    detect_video(0)
