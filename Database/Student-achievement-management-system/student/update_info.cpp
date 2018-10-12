#include "update_info.h"
#include "ui_update_info.h"
#include "updatedialog.h"
#include <QSqlQuery>
#include <QMessageBox>
update_info::update_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update_info)
{
    ui->setupUi(this);
}

update_info::~update_info()
{
    delete ui;
}

void update_info::on_okButton_clicked()
{
    updateDialog updatedlg;
    qint32 sno=updatedlg.cursno();
    QString cname=updatedlg.curcname();
    ui->upsnolineEdit->setText(QString("%1").arg(sno));
    ui->upsnolineEdit->setFocusPolicy(Qt::NoFocus);
    ui->upcnolineEdit->setText(cname);

    qint32 grade;
    grade=ui->upgradelineEdit->text().toInt();
    QString sql_info;
    sql_info=QString("update study set grade=%1 where sno=%2 and cno='%3'").arg(grade).arg(sno).arg(cname);
    QSqlQuery query;
    bool ok=query.exec(sql_info);
    if(ok)
        QMessageBox::information(this,tr("提示"),tr("修改成功"));
    else
        QMessageBox::information(this,tr("提示"),tr("修改失败"));
}
