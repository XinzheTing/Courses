#ifndef UPDATE_EDIT_DIALOG_H
#define UPDATE_EDIT_DIALOG_H

#include <QDialog>

namespace Ui {
class update_edit_Dialog;
}

class update_edit_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit update_edit_Dialog(QWidget *parent = 0);
    ~update_edit_Dialog();

private slots:
    void on_study_update_Button_clicked();

    void on_cancel_clicked();

private:
    Ui::update_edit_Dialog *ui;
};

#endif // UPDATE_EDIT_DIALOG_H
