#ifndef BANKFORM_H
#define BANKFORM_H

#include "OS_CHECK.h"
#include <QDialog>
#include <QDir>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

using namespace std;

namespace Ui {
class BankForm;
}

class BankForm : public QDialog {
    Q_OBJECT

public:
    explicit BankForm(QWidget* parent = nullptr);
    ~BankForm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::BankForm* ui;
    QSqlDatabase db;
};

#endif // BANKFORM_H
