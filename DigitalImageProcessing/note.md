# 程序笔记

<!-- TOC -->

- [程序笔记](#程序笔记)
    - [square_detection](#square_detection)

<!-- /TOC -->

## square_detection
*任务要求：给定两个视频，视频中有一个黄色的矩形面板，要求将其框出来，并输出结果*

整体思路就是使用HSV模型利用颜色的不同将目标物体的与周围环境区分开（适用于目标颜色与周围环境颜色差距较大时），然后再将其二值化后将目标物体框出。


> 参考文章：
> 
> [python opencv检测目标颜色](https://blog.csdn.net/Lingdongtianxia/article/details/75194950)
>
> [Python图像处理（7）：利用轮廓分块处理](https://blog.csdn.net/lights_joy/article/details/46368197)
>
>[【opencv】Opencv（Python） 教程-轮廓（2）轮廓特征求取](https://blog.csdn.net/zj360202/article/details/79170265)