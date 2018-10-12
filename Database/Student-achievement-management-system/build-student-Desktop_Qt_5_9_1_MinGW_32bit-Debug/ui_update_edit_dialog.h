/********************************************************************************
** Form generated from reading UI file 'update_edit_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_EDIT_DIALOG_H
#define UI_UPDATE_EDIT_DIALOG_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_update_edit_Dialog
{
public:
    QPushButton *study_update_Button;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLineEdit *study_sno_update_Edit;
    QLabel *label_13;
    QLineEdit *study_cno_update_Edit;
    QLabel *label_14;
    QLineEdit *study_grade_uodate_Edit;
    QPushButton *cancel;

    void setupUi(QDialog *update_edit_Dialog)
    {
        if (update_edit_Dialog->objectName().isEmpty())
            update_edit_Dialog->setObjectName(QStringLiteral("update_edit_Dialog"));
        update_edit_Dialog->resize(572, 393);
        study_update_Button = new QPushButton(update_edit_Dialog);
        study_update_Button->setObjectName(QStringLiteral("study_update_Button"));
        study_update_Button->setGeometry(QRect(140, 300, 91, 41));
        study_update_Button->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget = new QWidget(update_edit_Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 40, 421, 221));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        study_sno_update_Edit = new QLineEdit(layoutWidget);
        study_sno_update_Edit->setObjectName(QStringLiteral("study_sno_update_Edit"));
        study_sno_update_Edit->setEnabled(false);

        gridLayout_3->addWidget(study_sno_update_Edit, 0, 1, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        study_cno_update_Edit = new QLineEdit(layoutWidget);
        study_cno_update_Edit->setObjectName(QStringLiteral("study_cno_update_Edit"));
        study_cno_update_Edit->setEnabled(false);

        gridLayout_3->addWidget(study_cno_update_Edit, 1, 1, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        study_grade_uodate_Edit = new QLineEdit(layoutWidget);
        study_grade_uodate_Edit->setObjectName(QStringLiteral("study_grade_uodate_Edit"));

        gridLayout_3->addWidget(study_grade_uodate_Edit, 2, 1, 1, 1);

        cancel = new QPushButton(update_edit_Dialog);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(330, 300, 101, 41));
        cancel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
#ifndef QT_NO_SHORTCUT
        label_12->setBuddy(study_sno_update_Edit);
        label_13->setBuddy(study_cno_update_Edit);
        label_14->setBuddy(study_grade_uodate_Edit);
#endif // QT_NO_SHORTCUT

        retranslateUi(update_edit_Dialog);

        QMetaObject::connectSlotsByName(update_edit_Dialog);
    } // setupUi

    void retranslateUi(QDialog *update_edit_Dialog)
    {
        update_edit_Dialog->setWindowTitle(QApplication::translate("update_edit_Dialog", "Dialog", Q_NULLPTR));
        study_update_Button->setText(QApplication::translate("update_edit_Dialog", "\346\233\264\346\226\260", Q_NULLPTR));
        label_12->setText(QApplication::translate("update_edit_Dialog", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("update_edit_Dialog", "\350\257\276\347\250\213\345\217\267\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("update_edit_Dialog", "\346\210\220\347\273\251\357\274\232", Q_NULLPTR));
        cancel->setText(QApplication::translate("update_edit_Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class update_edit_Dialog: public Ui_update_edit_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_EDIT_DIALOG_H
