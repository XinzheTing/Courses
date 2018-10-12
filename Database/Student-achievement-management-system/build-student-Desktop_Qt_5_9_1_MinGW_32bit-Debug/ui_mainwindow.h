/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *selectButton;
    QPushButton *insertButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(491, 384);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Pictures/\346\225\260\346\215\256\345\272\223.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        selectButton = new QPushButton(centralWidget);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(110, 80, 101, 51));
        selectButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        insertButton = new QPushButton(centralWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(270, 80, 101, 51));
        insertButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        updateButton = new QPushButton(centralWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(110, 200, 101, 51));
        updateButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(270, 200, 101, 51));
        deleteButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(selectButton, SIGNAL(clicked()), MainWindow, SLOT(accept()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        selectButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        insertButton->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
        updateButton->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
