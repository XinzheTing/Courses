import cv2
import numpy as np
from matplotlib import pyplot as plt

# 绘制直方图


def darwHistogram(myData, Tittle, Xlabel, Ylabel):
    plt.figure(Tittle)
    plt.xlabel(Xlabel)
    plt.ylabel(Ylabel)
    n, bins, patches = plt.hist(
        myData, bins=256, density=0, edgecolor='None', facecolor='red')
    plt.show()


img = cv2.imread(
    'E:/document/Courses/MultimediaProcessing/image_enhance/testimg.jpg')
# cv2.imshow('y', img)
imgGray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
imgArray = imgGray.flatten()
darwHistogram(imgArray, '处理前', 'grade', 'numbers')

# 统计不同灰度级的像素数
grayNum = np.zeros(256, dtype=int)
for pixel in imgArray:
    grayNum[pixel] += 1

# 计算每个灰度级的概率
probability = np.zeros(256, dtype=float)
for i in range(0, 255):
    probability[i] = grayNum[i]/imgArray.size

# 恢复彩色图像
imgGrayEnhanced = imgArray.reshape(512, 512)
B = img[:, :, 0]
G = img[:, :, 1]
R = img[:, :, 2]

g = imgGray[:]
p = 0.2989
q = 0.5870
t = 0.1140
RNew = (g-t*B-q*G)/p
RNew = np.uint8(RNew)
imgEnhanced = np.zeros((img.shape)).astype("uint8")
imgEnhanced[:, :, 0] = B
imgEnhanced[:, :, 1] = G
imgEnhanced[:, :, 2] = RNew

cv2.imshow('enhanced', imgEnhanced)
cv2.waitKey(0)
