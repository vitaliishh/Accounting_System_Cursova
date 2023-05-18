#ifndef ACTREG_H
#define ACTREG_H

#include <QDebug>
#include <QDialog>

#include <QRegularExpression>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

using namespace std;

namespace Ui {
class ActReg;
}

class ActReg : public QDialog {
    Q_OBJECT

public:
    explicit ActReg(QWidget* parent = nullptr);
    ~ActReg();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ActReg* ui;
    QSqlDatabase db;
};

#endif // ACTREG_H
