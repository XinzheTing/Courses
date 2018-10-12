/********************************************************************************
** Form generated from reading UI file 'insertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTDIALOG_H
#define UI_INSERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insertDialog
{
public:
    QTabWidget *studypage;
    QWidget *tab_2;
    QPushButton *insert_class_Button;
    QPushButton *cancel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *class_cname_Edit;
    QLineEdit *class_cno_Edit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *class_major_Edit;
    QWidget *StudentInfo;
    QPushButton *insert_stuinfo_Button;
    QPushButton *cancel_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *stuinfo_sno_Edit;
    QLabel *label_5;
    QLineEdit *stuinfo_sname_Edit;
    QLabel *label_7;
    QLineEdit *stuinfo_ssex_Edit;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *stuinfo_classnum_Edit;
    QLineEdit *stuinfo_entry_Edit;
    QWidget *tab;
    QPushButton *insert_course_Button;
    QPushButton *cancel_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLineEdit *course_cno_Edit;
    QLabel *label_10;
    QLineEdit *course_cname_Edit;
    QLabel *label_11;
    QLineEdit *course_credit_Edit;
    QWidget *tab_3;
    QPushButton *cancel_4;
    QPushButton *insert_study_Button;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLineEdit *study_sno_Edit;
    QLabel *label_13;
    QLineEdit *study_cno_Edit;
    QLabel *label_14;
    QLineEdit *study_grade_Edit;

    void setupUi(QDialog *insertDialog)
    {
        if (insertDialog->objectName().isEmpty())
            insertDialog->setObjectName(QStringLiteral("insertDialog"));
        insertDialog->resize(664, 479);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/insert.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertDialog->setWindowIcon(icon);
        studypage = new QTabWidget(insertDialog);
        studypage->setObjectName(QStringLiteral("studypage"));
        studypage->setGeometry(QRect(30, 10, 601, 441));
        studypage->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        insert_class_Button = new QPushButton(tab_2);
        insert_class_Button->setObjectName(QStringLiteral("insert_class_Button"));
        insert_class_Button->setGeometry(QRect(150, 350, 91, 41));
        insert_class_Button->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        cancel = new QPushButton(tab_2);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(330, 350, 101, 41));
        cancel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 70, 381, 241));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        class_cname_Edit = new QLineEdit(layoutWidget);
        class_cname_Edit->setObjectName(QStringLiteral("class_cname_Edit"));

        gridLayout->addWidget(class_cname_Edit, 1, 2, 1, 1);

        class_cno_Edit = new QLineEdit(layoutWidget);
        class_cno_Edit->setObjectName(QStringLiteral("class_cno_Edit"));

        gridLayout->addWidget(class_cno_Edit, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        class_major_Edit = new QLineEdit(layoutWidget);
        class_major_Edit->setObjectName(QStringLiteral("class_major_Edit"));

        gridLayout->addWidget(class_major_Edit, 2, 2, 1, 1);

        studypage->addTab(tab_2, QString());
        StudentInfo = new QWidget();
        StudentInfo->setObjectName(QStringLiteral("StudentInfo"));
        insert_stuinfo_Button = new QPushButton(StudentInfo);
        insert_stuinfo_Button->setObjectName(QStringLiteral("insert_stuinfo_Button"));
        insert_stuinfo_Button->setGeometry(QRect(150, 350, 91, 41));
        insert_stuinfo_Button->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        cancel_2 = new QPushButton(StudentInfo);
        cancel_2->setObjectName(QStringLiteral("cancel_2"));
        cancel_2->setGeometry(QRect(330, 350, 101, 41));
        cancel_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget1 = new QWidget(StudentInfo);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 20, 431, 291));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        stuinfo_sno_Edit = new QLineEdit(layoutWidget1);
        stuinfo_sno_Edit->setObjectName(QStringLiteral("stuinfo_sno_Edit"));

        gridLayout_2->addWidget(stuinfo_sno_Edit, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        stuinfo_sname_Edit = new QLineEdit(layoutWidget1);
        stuinfo_sname_Edit->setObjectName(QStringLiteral("stuinfo_sname_Edit"));

        gridLayout_2->addWidget(stuinfo_sname_Edit, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        stuinfo_ssex_Edit = new QLineEdit(layoutWidget1);
        stuinfo_ssex_Edit->setObjectName(QStringLiteral("stuinfo_ssex_Edit"));

        gridLayout_2->addWidget(stuinfo_ssex_Edit, 2, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 4, 0, 1, 1);

        stuinfo_classnum_Edit = new QLineEdit(layoutWidget1);
        stuinfo_classnum_Edit->setObjectName(QStringLiteral("stuinfo_classnum_Edit"));

        gridLayout_2->addWidget(stuinfo_classnum_Edit, 4, 1, 1, 1);

        stuinfo_entry_Edit = new QLineEdit(layoutWidget1);
        stuinfo_entry_Edit->setObjectName(QStringLiteral("stuinfo_entry_Edit"));

        gridLayout_2->addWidget(stuinfo_entry_Edit, 3, 1, 1, 1);

        studypage->addTab(StudentInfo, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        insert_course_Button = new QPushButton(tab);
        insert_course_Button->setObjectName(QStringLiteral("insert_course_Button"));
        insert_course_Button->setGeometry(QRect(150, 350, 91, 41));
        insert_course_Button->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        cancel_3 = new QPushButton(tab);
        cancel_3->setObjectName(QStringLiteral("cancel_3"));
        cancel_3->setGeometry(QRect(330, 350, 101, 41));
        cancel_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 80, 441, 211));
        gridLayout_4 = new QGridLayout(layoutWidget2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        course_cno_Edit = new QLineEdit(layoutWidget2);
        course_cno_Edit->setObjectName(QStringLiteral("course_cno_Edit"));

        gridLayout_4->addWidget(course_cno_Edit, 0, 1, 1, 1);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);

        course_cname_Edit = new QLineEdit(layoutWidget2);
        course_cname_Edit->setObjectName(QStringLiteral("course_cname_Edit"));

        gridLayout_4->addWidget(course_cname_Edit, 1, 1, 1, 1);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        course_credit_Edit = new QLineEdit(layoutWidget2);
        course_credit_Edit->setObjectName(QStringLiteral("course_credit_Edit"));

        gridLayout_4->addWidget(course_credit_Edit, 2, 1, 1, 1);

        studypage->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        cancel_4 = new QPushButton(tab_3);
        cancel_4->setObjectName(QStringLiteral("cancel_4"));
        cancel_4->setGeometry(QRect(330, 350, 101, 41));
        cancel_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        insert_study_Button = new QPushButton(tab_3);
        insert_study_Button->setObjectName(QStringLiteral("insert_study_Button"));
        insert_study_Button->setGeometry(QRect(150, 350, 91, 41));
        insert_study_Button->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(80, 70, 421, 221));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        study_sno_Edit = new QLineEdit(layoutWidget3);
        study_sno_Edit->setObjectName(QStringLiteral("study_sno_Edit"));

        gridLayout_3->addWidget(study_sno_Edit, 0, 1, 1, 1);

        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        study_cno_Edit = new QLineEdit(layoutWidget3);
        study_cno_Edit->setObjectName(QStringLiteral("study_cno_Edit"));

        gridLayout_3->addWidget(study_cno_Edit, 1, 1, 1, 1);

        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        study_grade_Edit = new QLineEdit(layoutWidget3);
        study_grade_Edit->setObjectName(QStringLiteral("study_grade_Edit"));

        gridLayout_3->addWidget(study_grade_Edit, 2, 1, 1, 1);

        studypage->addTab(tab_3, QString());
#ifndef QT_NO_SHORTCUT
        label->setBuddy(class_cno_Edit);
        label_2->setBuddy(class_cname_Edit);
        label_3->setBuddy(class_major_Edit);
        label_4->setBuddy(stuinfo_sno_Edit);
        label_5->setBuddy(stuinfo_sname_Edit);
        label_7->setBuddy(stuinfo_ssex_Edit);
        label_8->setBuddy(stuinfo_entry_Edit);
        label_9->setBuddy(stuinfo_classnum_Edit);
        label_6->setBuddy(course_cno_Edit);
        label_10->setBuddy(course_cname_Edit);
        label_11->setBuddy(course_credit_Edit);
        label_12->setBuddy(study_sno_Edit);
        label_13->setBuddy(study_cno_Edit);
        label_14->setBuddy(study_grade_Edit);
#endif // QT_NO_SHORTCUT

        retranslateUi(insertDialog);

        studypage->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(insertDialog);
    } // setupUi

    void retranslateUi(QDialog *insertDialog)
    {
        insertDialog->setWindowTitle(QApplication::translate("insertDialog", "\346\217\222\345\205\245", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        studypage->setToolTip(QApplication::translate("insertDialog", "<html><head/><body><p>study</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        insert_class_Button->setText(QApplication::translate("insertDialog", "\346\217\222\345\205\245", Q_NULLPTR));
        cancel->setText(QApplication::translate("insertDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("insertDialog", "\347\217\255\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("insertDialog", "\347\217\255\347\272\247\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("insertDialog", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        studypage->setTabText(studypage->indexOf(tab_2), QApplication::translate("insertDialog", "class", Q_NULLPTR));
        insert_stuinfo_Button->setText(QApplication::translate("insertDialog", "\346\217\222\345\205\245", Q_NULLPTR));
        cancel_2->setText(QApplication::translate("insertDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("insertDialog", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("insertDialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("insertDialog", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("insertDialog", "\345\205\245\345\255\246\345\271\264\344\273\275\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("insertDialog", "\347\217\255\345\217\267\357\274\232", Q_NULLPTR));
        studypage->setTabText(studypage->indexOf(StudentInfo), QApplication::translate("insertDialog", "StudentInfo", Q_NULLPTR));
        insert_course_Button->setText(QApplication::translate("insertDialog", "\346\217\222\345\205\245", Q_NULLPTR));
        cancel_3->setText(QApplication::translate("insertDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("insertDialog", "\350\257\276\347\250\213\345\217\267\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("insertDialog", "\350\257\276\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("insertDialog", "\345\255\246\345\210\206\357\274\232", Q_NULLPTR));
        studypage->setTabText(studypage->indexOf(tab), QApplication::translate("insertDialog", "course", Q_NULLPTR));
        cancel_4->setText(QApplication::translate("insertDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        insert_study_Button->setText(QApplication::translate("insertDialog", "\346\217\222\345\205\245", Q_NULLPTR));
        label_12->setText(QApplication::translate("insertDialog", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("insertDialog", "\350\257\276\347\250\213\345\217\267\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("insertDialog", "\346\210\220\347\273\251\357\274\232", Q_NULLPTR));
        studypage->setTabText(studypage->indexOf(tab_3), QApplication::translate("insertDialog", "study", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class insertDialog: public Ui_insertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTDIALOG_H
