__author__ = 'tingxinzhe'
__date__ = '6/11/2018'
import cv2
import sys
import numpy as np
import matplotlib.pyplot as plt


def DCT(image, DCT_size):
    if DCT_size is 0:
        DCT_size = image.shape[0]
    img = image.astype('float')
    A = np.zeros((DCT_size, DCT_size))
    A[0, :] = 1*np.sqrt(1/DCT_size)

    for i in range(1, DCT_size):
        for j in range(DCT_size):
            A[i, j] = np.sqrt(2/DCT_size)*np.cos(np.pi*(2*j+1)*i/(2*DCT_size))

    w, h = image.shape
    times = (int)(w/DCT_size)

    # DCT
    dst = np.zeros(img.shape)
    cv2_dct = np.zeros(img.shape)
    for i in range(times):
        for j in range(times):
            dst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = np.dot(
                A, img[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size])
            dst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = np.dot(
                dst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size], np.transpose(A))
            # dst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = np.log(
            #     abs(dst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size]))  # 进行log处理

            cv2_dct[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = cv2.dct(
                img[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size])
            # cv2_dct[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = np.log(
            #     abs(cv2_dct[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size]))

    # IDCT
    idst = np.zeros(img.shape)
    cv2_idct = np.zeros(img.shape)
    for i in range(times):
        for j in range(times):
            idst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = np.dot(
                np.transpose(A), dst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size])
            idst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = np.dot(
                idst[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size], A)

            cv2_idct[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size] = cv2.idct(
                cv2_dct[i*DCT_size:(i+1)*DCT_size, j*DCT_size:(j+1)*DCT_size])

    # 进行log处理
    dst = np.log(dst)
    cv2_dct = np.log(cv2_dct)

    # 显示结果
    plt.subplot(231)
    plt.imshow(img, 'gray')
    plt.title('original image')
    plt.xticks([]), plt.yticks([])

    plt.subplot(232)
    plt.imshow(dst)
    plt.title('DCT1')
    plt.xticks([]), plt.yticks([])

    plt.subplot(233)
    plt.imshow(idst, 'gray')
    plt.title('IDCT1')

    plt.subplot(234)
    plt.imshow(img, 'gray')
    plt.title('original image')

    plt.subplot(235)
    plt.imshow(cv2_dct)
    plt.title('DCT2(cv2.dct)')

    plt.subplot(236)
    plt.imshow(cv2_idct, 'gray')
    plt.title('IDCT2(cv2.idct)')
    plt.show()


if __name__ == '__main__':
    if len(sys.argv) != 3:
        print('Please use python image_path dct_size')
    filein = sys.argv[1]
    dct_size = int(sys.argv[2])
    img = cv2.imread(filein, 0)
    DCT(img, dct_size)