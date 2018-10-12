#include "mainwindow.h"
#include "selectdatadialog.h"
#include "insertdialog.h"
#include <QApplication>
#include<QtSql/QtSql>
#include<QSqlError>
#include<QMessageBox>
#include<QtDebug>
void OpenDatabase()
{
    QString serverName = "(local)\\SQLEXPRESS";
    QString dbName = "STUDENT";
    QSqlDatabase myDB = QSqlDatabase::addDatabase("QODBC");//连接到ODBC驱动
    QString dsn = QString("Driver={SQL Server};Server=%1;Database=%2;Trusted_Connection=yes").arg(serverName).arg(dbName);
    myDB.setDatabaseName(dsn);
    if(!myDB.open())
        {
            QMessageBox::critical(0,qApp->tr("Cannot open database"),myDB.lastError().databaseText(),QMessageBox::Cancel);
        }

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenDatabase();
    MainWindow w;
    w.show();

    return a.exec();
}
