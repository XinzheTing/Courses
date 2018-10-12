#ifndef INSERTDIALOG_H
#define INSERTDIALOG_H

#include <QDialog>

namespace Ui {
class insertDialog;
}

class insertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit insertDialog(QWidget *parent = 0);
    ~insertDialog();

private slots:

    void on_insert_class_Button_clicked();

    void on_insert_stuinfo_Button_clicked();

    void on_insert_course_Button_clicked();

    void on_insert_study_Button_clicked();

    void on_cancel_4_clicked();

    void on_cancel_clicked();

    void on_cancel_2_clicked();

    void on_cancel_3_clicked();

private:
    Ui::insertDialog *ui;
};

#endif // INSERTDIALOG_H
