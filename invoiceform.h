#ifndef INVOICEFORM_H
#define INVOICEFORM_H

#include <QDialog>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#if defined(Q_OS_WIN)
    #define qUsername QString::fromLocal8Bit (qgetenv ("USERNAME").constData ()).toUtf8 ()
#elif defined(Q_OS_UNIX)
    #define qUsername qgetenv("USER").constData ()
#endif

namespace Ui {
class InvoiceForm;
}

class InvoiceForm : public QDialog
{
    Q_OBJECT

public:
    explicit InvoiceForm(QWidget *parent = nullptr);
    ~InvoiceForm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::InvoiceForm *ui;
    QSqlDatabase db;
};

#endif // INVOICEFORM_H
