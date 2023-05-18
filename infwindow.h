#ifndef INFWINDOW_H
#define INFWINDOW_H

#include "qpushbutton.h"
#include <QMainWindow>

#include "OS_CHECK.h"
#include "unzip.h"
#include "zip.h"
#include <QDialog>
#include <QDir>
#include <QFileDialog>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QStandardPaths>
#include <QTableView>
#include <QTextCodec>
#include <QVBoxLayout>

namespace Ui {
class InfWindow;
}

class InfWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit InfWindow(QWidget* parent = nullptr);
    ~InfWindow();

private:
    Ui::InfWindow* ui;
    QSqlDatabase db;

    QSqlTableModel* model;

    QTableView* tableView;
    QVBoxLayout* mainLay;
    QHBoxLayout* btnLay;
    QVBoxLayout* tableLay;

    void clearEl();
    int winId = 0;

    void bankWin();
    void authorizationWin();
    void invoiceWin();
    void directoryWin();
    void messBox(QString val);

private slots:
    void removeOrder();
    void updateOrder();
    void bankForm_f();
    void invoiceForm_f();

    void on_actionProfitableInvoice2_triggered();
    void on_actionDirectory2_triggered();
    void on_actionstartWin2_triggered();
    void on_action_triggered();
    void on_actionAdd_3_triggered();
    void on_actionBank2_triggered();
    void on_actionAuthorization2_triggered();
    void on_actionExport_settings_triggered();
    void on_actionImport_settings_triggered();
    void on_actionDeleting_Project_triggered();
};

#endif // INFWINDOW_H
