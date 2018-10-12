#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "selectdatadialog.h"
#include "insertdialog.h"
#include "updatedialog.h"
#include "deletedialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionreadme_triggered();

public slots:
    void on_selectButton_clicked();

    void on_insertButton_clicked();

    void on_updateButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::MainWindow *ui;
    SelectDataDialog sddlg;
    insertDialog idlg;
    updateDialog udlg;
    deleteDialog ddld;
};

#endif // MAINWINDOW_H
