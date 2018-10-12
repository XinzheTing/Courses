#include "update_edit_dialog.h"
#include "ui_update_edit_dialog.h"

update_edit_Dialog::update_edit_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update_edit_Dialog)
{
    ui->setupUi(this);
}

update_edit_Dialog::~update_edit_Dialog()
{
    delete ui;
}

void update_edit_Dialog::on_study_update_Button_clicked()
{

}

void update_edit_Dialog::on_cancel_clicked()
{
    this->close();
}
