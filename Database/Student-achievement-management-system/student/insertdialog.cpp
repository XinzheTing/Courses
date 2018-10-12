#include "insertdialog.h"
#include "ui_insertdialog.h"
#include <qsqlquery.h>
#include <QMessageBox>
insertDialog::insertDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insertDialog)
{
    ui->setupUi(this);
}

insertDialog::~insertDialog()
{
    delete ui;
}

void insertDialog::on_insert_class_Button_clicked()
{
    qint32 classnum=ui->class_cno_Edit->text().toInt();
    QString classname=ui->class_cname_Edit->text();
    QString major=ui->class_major_Edit->text();
    QString sql_info;
    sql_info=QString("insert into class values(%1,'%2','%3')").arg(classnum).arg(classname).arg(major);
    QSqlQuery query;
    bool ok=query.exec(sql_info);
    if(ok)
        QMessageBox::information(this,tr("提示"),tr("添加成功"));
    else
         QMessageBox::information(this,tr("提示"),tr("添加失败"));
}

void insertDialog::on_insert_stuinfo_Button_clicked()
{
    qint32 sno=ui->stuinfo_sno_Edit->text().toInt();
    QString sname=ui->stuinfo_sname_Edit->text();
    QString ssex=ui->stuinfo_ssex_Edit->text();
    qint32 sentry=ui->stuinfo_entry_Edit->text().toInt();
    qint32 classnum=ui->stuinfo_classnum_Edit->text().toInt();
    QString sql_info;
    sql_info=QString("insert into students_info values(%1,'%2','%3',%4,%5)").arg(sno).arg(sname).arg(ssex).arg(sentry).arg(classnum);
    QSqlQuery query;
    bool ok=query.exec(sql_info);
    if(ok)
        QMessageBox::information(this,tr("提示"),tr("添加成功"));
    else
         QMessageBox::information(this,tr("提示"),tr("添加失败"));
}

void insertDialog::on_insert_course_Button_clicked()
{
    qint32 cno=ui->course_cno_Edit->text().toInt();
    QString cname=ui->course_cname_Edit->text();
    qint32 credit=ui->course_credit_Edit->text().toInt();
    QString sql_info;
    sql_info=QString("insert into course values(%1,'%2',%3)").arg(cno).arg(cname).arg(credit);
    QSqlQuery query;
    bool ok=query.exec(sql_info);
    if(ok)
        QMessageBox::information(this,tr("提示"),tr("添加成功"));
    else
         QMessageBox::information(this,tr("提示"),tr("添加失败"));
}

void insertDialog::on_insert_study_Button_clicked()
{
    qint32 sno=ui->study_sno_Edit->text().toInt();
    qint32 cno=ui->study_cno_Edit->text().toInt();
    qint32 grade=ui->study_grade_Edit->text().toInt();
    QString sql_info;
    sql_info=QString("insert into study values(%1,%2,%3)").arg(sno).arg(cno).arg(grade);
    QSqlQuery query;
    bool ok=query.exec(sql_info);
    if(ok)
        QMessageBox::information(this,tr("提示"),tr("添加成功"));
    else
         QMessageBox::information(this,tr("提示"),tr("添加失败"));
}

void insertDialog::on_cancel_clicked()
{
    this->close();
}


void insertDialog::on_cancel_2_clicked()
{
    on_cancel_clicked();
}

void insertDialog::on_cancel_3_clicked()
{
    on_cancel_clicked();
}

void insertDialog::on_cancel_4_clicked()
{
    on_cancel_clicked();
}
