#include "selectdatadialog.h"
#include "ui_selectdatadialog.h"
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<qdebug.h>
SelectDataDialog::SelectDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectDataDialog)
{
    ui->setupUi(this);
}

SelectDataDialog::~SelectDataDialog()
{
    delete ui;
}
void SelectDataDialog::on_okButton_clicked()
{
    qint32 sno_info=ui->selectlineEdit->text().toInt();
    QSqlQueryModel *model=new QSqlQueryModel(ui->tableView);
    if(sno_info==0)
        model->setQuery(QString("select * from student_all_info"));
    else
        model->setQuery(QString("select * from student_all_info where sno=%1").arg(sno_info));
    model->setHeaderData(0, Qt::Horizontal, tr("学号"));
    model->setHeaderData(0, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(0, Qt::Horizontal, tr("性别"));
    model->setHeaderData(0, Qt::Horizontal, tr("班级"));
    model->setHeaderData(0, Qt::Horizontal, tr("选修课程数"));
    model->setHeaderData(0, Qt::Horizontal, tr("总学分"));
    model->setHeaderData(0, Qt::Horizontal, tr("平均成绩"));
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->show();
}
