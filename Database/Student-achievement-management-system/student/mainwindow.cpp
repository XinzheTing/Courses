#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_selectButton_clicked()
{
    sddlg.show();
}

void MainWindow::on_insertButton_clicked()
{
    idlg.show();
}

void MainWindow::on_updateButton_clicked()
{
    udlg.show();
    udlg.showdata();
}

void MainWindow::on_deleteButton_clicked()
{
    ddld.show();
}
