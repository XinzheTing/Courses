##程序使用说明：

1. 需要运行student.sql文件（或报告中）的代码，建立数据库和相关的约束和视图以及插入一些示例数据。
2. 配置：
由于是使用qt进行编写，所以运行时本地需要已经安装好qt（本人使用的是qt5）。然后需要修改mian.cpp中“QString serverName = "(local)\\SQLEXPRESS";”，改为自己本地的sql服务器名称。
（由于程序本身调用了ODBC驱动，所以不需要自己在繁琐的配置）
登录设置的为默认信任登录，不需要输入用户名及密码。
3. 双击运行build-student-Desktop_Qt_5_9_1_MinGW_32bit-Debug\debug下的.exe文件，如果正常运行会进入主界面看到查询、插入、更新、删除四个按钮。
4. 查询：输入需要查询的学生的学号，会显示有关该学生的所有信息
5. 插入：分为四个标签栏，每个标签栏对应一个基本表，输入相关信息，点击查询即可。
6. 更新：点击更新后会显示学生的选课信息及成绩，目前仅支持更改成绩，双击即可更改，更改后点击更按钮，会显示是否更新成功。
7. 删除：根据学号删除学生信息（级联删除）。

##程序运行截图：
![运行截图](https://raw.githubusercontent.com/XinzheTing/Student-achievement-management-system/47dcb4642e96f22bec2f3bcdbb16582d528e4e81/%E6%88%AA%E5%9B%BE.png)