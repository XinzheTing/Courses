/********************************************************************************
** Form generated from reading UI file 'updatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_updateDialog
{
public:
    QPushButton *changeButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *updateDialog)
    {
        if (updateDialog->objectName().isEmpty())
            updateDialog->setObjectName(QStringLiteral("updateDialog"));
        updateDialog->resize(633, 419);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateDialog->setWindowIcon(icon);
        changeButton = new QPushButton(updateDialog);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setGeometry(QRect(240, 340, 101, 51));
        changeButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tableWidget = new QTableWidget(updateDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 30, 541, 281));

        retranslateUi(updateDialog);

        QMetaObject::connectSlotsByName(updateDialog);
    } // setupUi

    void retranslateUi(QDialog *updateDialog)
    {
        updateDialog->setWindowTitle(QApplication::translate("updateDialog", "\346\233\264\346\226\260", Q_NULLPTR));
        changeButton->setText(QApplication::translate("updateDialog", "\346\233\264\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updateDialog: public Ui_updateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
