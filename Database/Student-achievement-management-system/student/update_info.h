#ifndef UPDATE_INFO_H
#define UPDATE_INFO_H

#include <QDialog>

namespace Ui {
class update_info;
}

class update_info : public QDialog
{
    Q_OBJECT

public:
    explicit update_info(QWidget *parent = 0);
    ~update_info();
    Ui::update_info *ui;

private slots:
    //bool on_pushButton_clicked();
    void on_okButton_clicked();
private:

};

#endif // UPDATE_INFO_H
