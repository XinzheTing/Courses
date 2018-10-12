/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteDialog
{
public:
    QLabel *deletelabel;
    QLineEdit *delete_sno_Edit;
    QPushButton *deleteButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *deleteDialog)
    {
        if (deleteDialog->objectName().isEmpty())
            deleteDialog->setObjectName(QStringLiteral("deleteDialog"));
        deleteDialog->resize(491, 384);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteDialog->setWindowIcon(icon);
        deletelabel = new QLabel(deleteDialog);
        deletelabel->setObjectName(QStringLiteral("deletelabel"));
        deletelabel->setGeometry(QRect(100, 40, 71, 41));
        deletelabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        delete_sno_Edit = new QLineEdit(deleteDialog);
        delete_sno_Edit->setObjectName(QStringLiteral("delete_sno_Edit"));
        delete_sno_Edit->setGeometry(QRect(180, 40, 141, 41));
        deleteButton = new QPushButton(deleteDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(180, 130, 111, 71));
        deleteButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        plainTextEdit = new QPlainTextEdit(deleteDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setGeometry(QRect(30, 250, 421, 101));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
#ifndef QT_NO_SHORTCUT
        deletelabel->setBuddy(delete_sno_Edit);
#endif // QT_NO_SHORTCUT

        retranslateUi(deleteDialog);

        QMetaObject::connectSlotsByName(deleteDialog);
    } // setupUi

    void retranslateUi(QDialog *deleteDialog)
    {
        deleteDialog->setWindowTitle(QApplication::translate("deleteDialog", "Dialog", Q_NULLPTR));
        deletelabel->setText(QApplication::translate("deleteDialog", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("deleteDialog", "\345\210\240\351\231\244", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("deleteDialog", "\346\234\254\346\223\215\344\275\234\346\230\257\345\210\240\351\231\244student_info\350\241\250\344\270\255\345\257\271\345\272\224\345\255\246\345\217\267\347\232\204\345\255\246\347\224\237\344\277\241\346\201\257\357\274\214\345\234\250\345\210\240\351\231\244\346\227\266\344\274\232\350\247\246\345\217\221\350\247\246\345\217\221\345\231\250\357\274\214\345\257\274\350\207\264\350\257\245\345\255\246\347\224\237\346\211\200\346\234\211\344\277\241\346\201\257\345\260\206\350\242\253\345\210\240\351\231\244\357\274\214\350\257\267\350\260\250\346\205\216\346\223\215\344\275\234\343\200\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deleteDialog: public Ui_deleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H
