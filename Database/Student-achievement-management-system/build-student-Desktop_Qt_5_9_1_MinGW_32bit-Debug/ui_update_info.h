/********************************************************************************
** Form generated from reading UI file 'update_info.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_INFO_H
#define UI_UPDATE_INFO_H

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

class Ui_update_info
{
public:
    QPushButton *okButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *upsnolineEdit;
    QLabel *label_2;
    QLineEdit *upcnolineEdit;
    QLabel *label_3;
    QLineEdit *upgradelineEdit;

    void setupUi(QDialog *update_info)
    {
        if (update_info->objectName().isEmpty())
            update_info->setObjectName(QStringLiteral("update_info"));
        update_info->resize(400, 300);
        okButton = new QPushButton(update_info);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(140, 240, 93, 31));
        okButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        okButton->setAutoDefault(false);
        widget = new QWidget(update_info);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 20, 311, 181));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        upsnolineEdit = new QLineEdit(widget);
        upsnolineEdit->setObjectName(QStringLiteral("upsnolineEdit"));
        upsnolineEdit->setEnabled(true);

        gridLayout->addWidget(upsnolineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        upcnolineEdit = new QLineEdit(widget);
        upcnolineEdit->setObjectName(QStringLiteral("upcnolineEdit"));
        upcnolineEdit->setEnabled(true);

        gridLayout->addWidget(upcnolineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        upgradelineEdit = new QLineEdit(widget);
        upgradelineEdit->setObjectName(QStringLiteral("upgradelineEdit"));

        gridLayout->addWidget(upgradelineEdit, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(upsnolineEdit);
        label_2->setBuddy(upcnolineEdit);
        label_3->setBuddy(upgradelineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(update_info);

        QMetaObject::connectSlotsByName(update_info);
    } // setupUi

    void retranslateUi(QDialog *update_info)
    {
        update_info->setWindowTitle(QApplication::translate("update_info", "Dialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("update_info", "ok", Q_NULLPTR));
        label->setText(QApplication::translate("update_info", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("update_info", "\350\257\276\347\250\213\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("update_info", "\346\210\220\347\273\251\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class update_info: public Ui_update_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_INFO_H
