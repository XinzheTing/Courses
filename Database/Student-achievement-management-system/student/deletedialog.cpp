#include "deletedialog.h"
#include "ui_deletedialog.h"
#include <qsqlquery.h>
#include <QMessageBox>
deleteDialog::deleteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteDialog)
{
    ui->setupUi(this);
}

deleteDialog::~deleteDialog()
{
    delete ui;
}

void deleteDialog::on_deleteButton_clicked()
{
    if (!(QMessageBox::information(this,tr("删除"),tr("你确定要删除该学生所有信息吗?"),tr("Yes"),tr("No"))))
    {
        QSqlQuery query;
        QString sql_info;
        qint32 sno=ui->delete_sno_Edit->text().toInt();
        sql_info=QString("delete from student_info where sno=%1").arg(sno);
        bool ok=query.exec(sql_info);
        if(ok)
            QMessageBox::information(this,tr("提示"),tr("删除成功"));
        else
             QMessageBox::information(this,tr("提示"),tr("删除失败"));
    }
}
