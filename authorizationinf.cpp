#include "authorizationinf.h"
#include "ui_authorizationinf.h"



#include "invoiceinf.h"
#include "warehouse.h"
#include "infwindow.h"
#include "bankinf.h"
#include "bankform.h"
#include "invoiceform.h"


AuthorizationInf::AuthorizationInf(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AuthorizationInf)
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
        model->setHeaderData(8, Qt::Horizontal, "Approval", Qt::DisplayRole);
        model->setHeaderData(9, Qt::Horizontal, "Deliveryman", Qt::DisplayRole);



        ui->tableView->setSortingEnabled(true);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        ui->tableView->setModel(model);

        ui->tableView->setColumnHidden(0,true);
        ui->tableView->setColumnHidden(2,true);
        ui->tableView->setColumnHidden(4,true);
        //ui->tableView->setColumnHidden(8,true);
        //ui->tableView->setColumnHidden(9,true);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableView->setShowGrid(true);


    }else{
        ui->statusbar->showMessage("NO Eccess conn :" + db.lastError().databaseText());
    }

}

AuthorizationInf::~AuthorizationInf()
{
    delete ui;
}


void AuthorizationInf::on_actionStart_triggered()
{
    InfWindow* infWindow = new InfWindow;
    infWindow->show();
    close();
}


void AuthorizationInf::on_pushButton_3_clicked()
{
    model->select();
}


void AuthorizationInf::on_bank_triggered()
{
    BankInf* bankInf = new BankInf;
    bankInf->show();
    close();
}


void AuthorizationInf::on_bank_add_triggered()
{
    BankForm bankForm;
    bankForm.exec();
}


void AuthorizationInf::on_auth_triggered()
{
    AuthorizationInf* authorizationInf = new AuthorizationInf;
    authorizationInf->show();
    close();
}


void AuthorizationInf::on_invoice_triggered()
{
    InvoiceInf* invoiceInf = new InvoiceInf;
    invoiceInf->show();
    close();
}


void AuthorizationInf::on_invoice_add_triggered()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}


void AuthorizationInf::on_warehouse_triggered()
{
    Warehouse* warehouse = new Warehouse;
    warehouse->show();
    close();
}


void AuthorizationInf::on_start_win_triggered()
{
    InfWindow* infWindow = new InfWindow;
    infWindow->show();
    close();
}

