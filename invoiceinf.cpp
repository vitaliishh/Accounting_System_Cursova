#include "invoiceinf.h"
#include "ui_invoiceinf.h"


#include "warehouse.h"
#include "infwindow.h"
#include "bankinf.h"
#include "bankform.h"
#include "authorizationinf.h"
#include "invoiceform.h"

InvoiceInf::InvoiceInf(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InvoiceInf)
{
    ui->setupUi(this);


    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QString("C:\\Users\\") + qUsername + "\\AppData\\Local\\account_system_db\\Exp.db";
    db.setDatabaseName(path);

    if(db.open()){
        ui->statusbar->showMessage("Successful connection");

        model = new QSqlTableModel(this, db);

        model->setTable("invoice");
        model->select();



        model->setHeaderData(1, Qt::Horizontal, "From", Qt::DisplayRole);
        model->setHeaderData(2, Qt::Horizontal, "To", Qt::DisplayRole);
        model->setHeaderData(3, Qt::Horizontal, "Product", Qt::DisplayRole);
        model->setHeaderData(4, Qt::Horizontal, "Price", Qt::DisplayRole);
        model->setHeaderData(5, Qt::Horizontal, "Count", Qt::DisplayRole);
        model->setHeaderData(6, Qt::Horizontal, "Order id", Qt::DisplayRole);



        ui->tableView->setSortingEnabled(true);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        ui->tableView->setModel(model);


         ui->tableView->setColumnHidden(0,true);
         ui->tableView->setColumnHidden(7,true);


        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->setShowGrid(true);


    }else{
        ui->statusbar->showMessage("NO Eccess conn :" + db.lastError().databaseText());
    }

}

InvoiceInf::~InvoiceInf()
{
    delete ui;
}

void InvoiceInf::on_actionStart_window_triggered()
{
    InfWindow* infWindow = new InfWindow;
    infWindow->show();
    close();
}


void InvoiceInf::on_pushButton_14_clicked()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}


void InvoiceInf::on_pushButton_13_clicked()
{
    model->select();
}


void InvoiceInf::on_pushButton_15_clicked()
{
    int selectedRow = ui->tableView->currentIndex().row();

    if(selectedRow >= 0){
        model->removeRow(selectedRow);
    }else{
        qDebug() << "no selected";
    }
}


void InvoiceInf::on_bank_triggered()
{
    BankInf* bankInf = new BankInf;
    bankInf->show();
    close();
}


void InvoiceInf::on_bank_add_triggered()
{
    BankForm bankForm;
    bankForm.exec();
}


void InvoiceInf::on_auth_triggered()
{
    AuthorizationInf* authorizationInf = new AuthorizationInf;
    authorizationInf->show();
    close();
}


void InvoiceInf::on_invoice_triggered()
{
    InvoiceInf* invoiceInf = new InvoiceInf;
    invoiceInf->show();
    close();
}


void InvoiceInf::on_invoice_add_triggered()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}


void InvoiceInf::on_warehouse_triggered()
{
    Warehouse* warehouse = new Warehouse;
    warehouse->show();
    close();
}


void InvoiceInf::on_start_win_triggered()
{
    InfWindow* infWindow = new InfWindow;
    infWindow->show();
    close();
}

