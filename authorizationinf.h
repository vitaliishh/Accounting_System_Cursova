#ifndef AUTHORIZATIONINF_H
#define AUTHORIZATIONINF_H

#include <QMainWindow>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlField>
#include <QLabel>


#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif


namespace Ui {
class AuthorizationInf;
}

class AuthorizationInf : public QMainWindow
{
    Q_OBJECT

public:
    explicit AuthorizationInf(QWidget *parent = nullptr);
    ~AuthorizationInf();

private slots:
    void on_actionStart_triggered();

    void on_pushButton_3_clicked();

    void on_bank_triggered();

    void on_bank_add_triggered();

    void on_auth_triggered();

    void on_invoice_triggered();

    void on_invoice_add_triggered();

    void on_warehouse_triggered();

    void on_start_win_triggered();

private:
    Ui::AuthorizationInf *ui;
    QSqlDatabase db;
    QSqlTableModel* model;
};

#endif // AUTHORIZATIONINF_H
