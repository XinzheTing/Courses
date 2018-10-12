#include "updatedialog.h"
#include "ui_updatedialog.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>

updateDialog::updateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateDialog)
{
    ui->setupUi(this);
}

updateDialog::~updateDialog()
{
    delete ui;
}
void updateDialog::showdata()
{
      ui->tableWidget->setRowCount(100);     //设置行数为10
      ui->tableWidget->setColumnCount(4);   //设置列数为4
      ui->tableWidget->setWindowTitle("更新");
      //ui->tableWidget->resize(500, 300);  //设置表格
      QStringList header;
      header<<"学号"<<"课程号"<<"课程名"<<"成绩";
      ui->tableWidget->setHorizontalHeaderLabels(header);
      QSqlQuery query;
      query.exec(QString("select students_info.sno,study.cno,cname,grade from students_info,study,course where students_info.sno=study.sno and study.cno=course.cno"));
      qint16 i=0;
      while(query.next())
      {
          ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
          ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
          ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
          ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
          ui->tableWidget->item(i, 3)->setFlags(ui->tableWidget->item(i, 3)->flags() | Qt::ItemIsEditable);
          ui->tableWidget->item(i, 0)->setFlags(ui->tableWidget->item(i, 0)->flags() & ~Qt::ItemIsEditable);
          ui->tableWidget->item(i, 1)->setFlags(ui->tableWidget->item(i, 1)->flags() & ~Qt::ItemIsEditable);
          ui->tableWidget->item(i, 2)->setFlags(ui->tableWidget->item(i, 2)->flags() & ~Qt::ItemIsEditable);
          i++;
      }
}
void updateDialog::on_changeButton_clicked()
{
    qint32 r=ui->tableWidget->currentRow();
    qint32 sno=ui->tableWidget->item(r,0)->text().toInt();
    qint32 cno=ui->tableWidget->item(r,1)->text().toInt();
    qint32 grade=ui->tableWidget->item(r,3)->text().toInt();
    QString sql_info;
    sql_info=QString("update study set grade=%1 where sno=%2 and cno=%3").arg(grade).arg(sno).arg(cno);
    QSqlQuery query;
    bool ok=query.exec(sql_info);
    if(ok)
        QMessageBox::information(this,tr("提示"),tr("修改成功"));
    else
        QMessageBox::information(this,tr("提示"),tr("修改失败"));
    //up.show();
}
int updateDialog::cursno()
{
    qint32 r=ui->tableWidget->currentRow();
    qint32 sno=ui->tableWidget->item(r,0)->text().toInt();
    return sno;
}
QString updateDialog::curcname()
{
    qint32 r=ui->tableWidget->currentRow();
    QString cname=ui->tableWidget->item(r,0)->text();
    return cname;
}
