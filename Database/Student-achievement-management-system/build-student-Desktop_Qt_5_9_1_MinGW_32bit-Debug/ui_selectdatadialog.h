/********************************************************************************
** Form generated from reading UI file 'selectdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDATADIALOG_H
#define UI_SELECTDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SelectDataDialog
{
public:
    QLineEdit *selectlineEdit;
    QLabel *selectlabel;
    QPushButton *okButton;
    QTableView *tableView;

    void setupUi(QDialog *SelectDataDialog)
    {
        if (SelectDataDialog->objectName().isEmpty())
            SelectDataDialog->setObjectName(QStringLiteral("SelectDataDialog"));
        SelectDataDialog->resize(968, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectDataDialog->setWindowIcon(icon);
        selectlineEdit = new QLineEdit(SelectDataDialog);
        selectlineEdit->setObjectName(QStringLiteral("selectlineEdit"));
        selectlineEdit->setGeometry(QRect(310, 30, 121, 31));
        selectlabel = new QLabel(SelectDataDialog);
        selectlabel->setObjectName(QStringLiteral("selectlabel"));
        selectlabel->setGeometry(QRect(250, 30, 55, 21));
        selectlabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        okButton = new QPushButton(SelectDataDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(660, 20, 91, 41));
        okButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tableView = new QTableView(SelectDataDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 80, 950, 500));
        tableView->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
#ifndef QT_NO_SHORTCUT
        selectlabel->setBuddy(selectlineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(SelectDataDialog);

        QMetaObject::connectSlotsByName(SelectDataDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectDataDialog)
    {
        SelectDataDialog->setWindowTitle(QApplication::translate("SelectDataDialog", "\346\237\245\350\257\242", Q_NULLPTR));
        selectlabel->setText(QApplication::translate("SelectDataDialog", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        okButton->setText(QApplication::translate("SelectDataDialog", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectDataDialog: public Ui_SelectDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDATADIALOG_H
