#ifndef REG_H
#define REG_H

#include <QMainWindow>

#include "OS_CHECK.h"
#include <QDir>
#include <QFile>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlField>
#include <QSqlQuery>
#include <QSqlRecord>

QT_BEGIN_NAMESPACE
namespace Ui {
class Reg;
}
QT_END_NAMESPACE

class Reg : public QMainWindow {
    Q_OBJECT

public:
    Reg(QWidget* parent = nullptr);
    ~Reg();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Reg* ui;
    QSqlDatabase db;
};
#endif // REG_H
