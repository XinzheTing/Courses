CREATE DATABASE STUDENT
GO
USE STUDENT
CREATE TABLE class
(
	classnum INT PRIMARY KEY NOT NULL,--班号主键（非空）
	classname CHAR(10),--班级名称
	major CHAR(4) NOT NULL,--专业
)
CREATE TABLE students_info
(
	sno INT NOT NULL PRIMARY KEY, --学号主键（非空）
	sname CHAR(10) NOT NULL,	--姓名
	ssex CHAR(2) NOT NULL,--性别
	sentry INT NOT NULL,--入学年份
	classnum INT NOT NULL, --班号
	FOREIGN KEY(classnum) REFERENCES class ON UPDATE CASCADE ON DELETE CASCADE,--加入层叠选项，使外键可以级联更新和删除，避免创建新的触发器的麻烦
	CHECK(ssex IN ('男','女'))--check约束，性别只能为男或女
)
CREATE TABLE course
(
	cno INT NOT NULL PRIMARY KEY,--课程号主键（非空）
	cname CHAR(20) NOT NULL,--课程名称
	credit INT --学分
)
CREATE TABLE study
(
	sno INT,
	cno INT,
	grade INT,--成绩
	CHECK(grade>=0 AND grade<=100),--成绩在-100之间
	PRIMARY KEY(sno,cno),--主键为学号和课程号
	FOREIGN KEY(sno) REFERENCES students_info ON UPDATE CASCADE ON DELETE CASCADE,--加入层叠选项，使外键可以级联更新和删除，避免创建新的触发器的麻烦
	FOrEIGN KEY(cno) REFERENCES course ON UPDATE CASCADE ON DELETE CASCADE--加入层叠选项，使外键可以级联更新和删除，避免创建新的触发器的麻烦
)
--插入数据
INSERT INTO class VALUES(001,'一','CS')
INSERT INTO class VALUES(002,'二','ECE')
INSERT INTO class VALUES(003,'三','CS')
INSERT INTO class VALUES(004,'四','CS')
INSERT INTO class VALUES(005,'五','CE')
INSERT INTO class VALUES(006,'六','CS')
INSERT INTO students_info VALUES(2014001001,'张三','男','2014','001')
INSERT INTO students_info VALUES(2014001002,'陈颖','女','2014','001')
INSERT INTO students_info VALUES(2014002001,'李菲','女','2014','002')
INSERT INTO students_info VALUES(2014002002,'李斯','男','2014','002')
INSERT INTO students_info VALUES(2015003003,'王宸','女','2015','003')
INSERT INTO students_info VALUES(2015003004,'刘峰','男','2015','003')
INSERT INTO students_info VALUES(2015004002,'王毅','男','2015','004')
INSERT INTO students_info VALUES(2015004004,'刘悦','女','2015','004')
INSERT INTO students_info VALUES(2016005001,'欧阳灏','男','2016','005')
INSERT INTO students_info VALUES(2016006003,'彭源','男','2016','006')
INSERT INTO course VALUES (01,'离散数学','3')
INSERT INTO course VALUES (02,'数据库原理','2')
INSERT INTO course VALUES (03,'数据结构','2')
INSERT INTO course VALUES (04,'数学分析','5')
INSERT INTO course VALUES (05,'代数与几何','3')
INSERT INTO course VALUES (06,'C语言','2')
INSERT INTO course VALUES (07,'结构力学','2')
INSERT INTO course VALUES (08,'材料力学','3')
INSERT INTO study VALUES (2014001001,02,90)
INSERT INTO study VALUES (2014001001,03,91)
INSERT INTO study VALUES (2014001002,02,99)
INSERT INTO study VALUES (2015003003,01,88)
INSERT INTO study VALUES (2015003003,05,80)
INSERT INTO study VALUES (2015003004,04,86)
INSERT INTO study VALUES (2015004002,06,97)
INSERT INTO study VALUES (2015004004,06,84)
INSERT INTO study VALUES (2016005001,07,80)
INSERT INTO study VALUES (2016005001,08,81)
INSERT INTO study VALUES (2016006003,01,92)

--创建视图，计算学生所选的课程数（cnum）、总学分（sumcredit）、平均成绩（avggrade）
CREATE VIEW course_all_info
AS
SELECT sno,COUNT(study.cno) cnum,SUM(credit) sumcredit,SUM(credit*grade)/SUM(credit) avggrade
FROM study,course
WHERE study.cno=course.cno
GROUP BY(sno)

--创建视图，显示学生的全部信息，包括学号、姓名性别、班号、所选课程总数、总学分、平均成绩
CREATE VIEW student_all_info
AS
SELECT students_info.sno,sname,ssex,classnum,cnum,sumcredit,avggrade
FROM students_info,course_all_info
WHERE students_info.sno=course_all_info.sno
