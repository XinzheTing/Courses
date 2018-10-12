#ifndef UPDATEDIALOG_H
#define UPDATEDIALOG_H

#include <QDialog>

namespace Ui {
class updateDialog;
}

class updateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit updateDialog(QWidget *parent = 0);
    ~updateDialog();
     void showdata();
     int cursno();
     QString curcname();
private slots:
     void on_changeButton_clicked();
private:
    Ui::updateDialog *ui;
};

#endif // UPDATEDIALOG_H
