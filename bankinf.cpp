#include "bankinf.h"
#include "ui_bankinf.h"


#include "invoiceinf.h"
#include "warehouse.h"
#include "infwindow.h"
#include "bankform.h"
#include "authorizationinf.h"
#include "invoiceform.h"

BankInf::BankInf(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BankInf)
{
    ui->setupUi(this);





    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QString("C:\\Users\\") + qUsername + "\\AppData\\Local\\account_system_db\\Exp.db";
    db.setDatabaseName(path);

    if(db.open()){
        ui->statusbar->showMessage("Successful connection");

        model = new QSqlTableModel(this, db);

        model->setTable("bank");
        model->select();




        model->setHeaderData(1, Qt::Horizontal, "Who paid", Qt::DisplayRole);
        model->setHeaderData(2, Qt::Horizontal, "Id kod first person", Qt::DisplayRole);
        model->setHeaderData(3, Qt::Horizontal, "Who got paid", Qt::DisplayRole);
        model->setHeaderData(4, Qt::Horizontal, "Id kod second person", Qt::DisplayRole);
        model->setHeaderData(5, Qt::Horizontal, "Invoice", Qt::DisplayRole);
        model->setHeaderData(6, Qt::Horizontal, "Order id", Qt::DisplayRole);
        model->setHeaderData(7, Qt::Horizontal, "Price", Qt::DisplayRole);



        ui->tableView->setSortingEnabled(true);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        ui->tableView->setModel(model);

        ui->tableView->setColumnHidden(0,true);
        ui->tableView->setColumnHidden(8,true);
        ui->tableView->setColumnHidden(9,true);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->setShowGrid(true);


    }else{
        ui->statusbar->showMessage("NO Eccess conn :" + db.lastError().databaseText());
    }

}

BankInf::~BankInf()
{
    delete ui;
}


void BankInf::on_pushButton_clicked()
{
    BankForm bankForm;
    bankForm.exec();
}


void BankInf::on_actionStart_window_triggered()
{
    InfWindow* infWindow = new InfWindow;
    infWindow->show();
    close();
}


void BankInf::on_pushButton_2_clicked()
{
    int selectedRow = ui->tableView->currentIndex().row();

    if(selectedRow >= 0){
        model->removeRow(selectedRow);
    }else{
        qDebug() << "no selected";
    }
}


void BankInf::on_pushButton_3_clicked()
{
    model->select();
}


void BankInf::on_bank_triggered()
{
    BankInf* bankInf = new BankInf;
    bankInf->show();
    close();
}


void BankInf::on_bank_add_triggered()
{
    BankForm bankForm;
    bankForm.exec();
}


void BankInf::on_auth_triggered()
{
    AuthorizationInf* authorizationInf = new AuthorizationInf;
    authorizationInf->show();
    close();
}


void BankInf::on_invoice_triggered()
{
    InvoiceInf* invoiceInf = new InvoiceInf;
    invoiceInf->show();
    close();
}


void BankInf::on_invoice_add_triggered()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}


void BankInf::on_warehouse_triggered()
{
    Warehouse* warehouse = new Warehouse;
    warehouse->show();
    close();
}


void BankInf::on_start_win_triggered()
{
    InfWindow* infWindow = new InfWindow;
    infWindow->show();
    close();
}

