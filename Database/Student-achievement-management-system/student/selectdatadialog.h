#ifndef SELECTDATADIALOG_H
#define SELECTDATADIALOG_H

#include <QDialog>

namespace Ui {
class SelectDataDialog;
}

class SelectDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SelectDataDialog(QWidget *parent = 0);
    ~SelectDataDialog();

private slots:
    void on_okButton_clicked();

private:
    Ui::SelectDataDialog *ui;
};

#endif // SELECTDATADIALOG_H
