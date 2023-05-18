#include "invoiceform.h"
#include "ui_invoiceform.h"

InvoiceForm::InvoiceForm(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::InvoiceForm)
{
    ui->setupUi(this);

    setFixedSize(590, 550);
}

InvoiceForm::~InvoiceForm()
{
    delete ui;
}

void InvoiceForm::on_pushButton_2_clicked()
{
    close();
}

void InvoiceForm::on_pushButton_clicked()
{
    ui->label_16->setText("");

    QString field1 = ui->lineEdit->text();
    QString field2 = ui->lineEdit_2->text();
    QString field3 = ui->lineEdit_3->text();
    QString field4 = ui->lineEdit_4->text();
    QString field5 = ui->lineEdit_5->text();
    QString field6 = ui->lineEdit_6->text();

    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    bool flag4 = false;
    bool flag5 = false;
    bool flag6 = false;

    if (field1 != "") {
        ui->label_8->setText("");
        flag1 = true;
    } else {
        ui->label_8->setText("No filled");
    }

    if (field2 != "") {
        ui->label_9->setText("");
        flag2 = true;
    } else {
        ui->label_9->setText("No filled");
    }

    if (field3 != "") {
        ui->label_10->setText("");
        flag3 = true;
    } else {
        ui->label_10->setText("No filled");
    }

    if (field4 != "") {
        ui->label_11->setText("");
        flag4 = true;
    } else {
        ui->label_11->setText("No filled");
    }

    if (field5 != "") {
        ui->label_12->setText("");
        flag5 = true;
    } else {
        ui->label_12->setText("No filled");
    }

    if (field6 != "") {
        ui->label_13->setText("");
        flag6 = true;
    } else {
        ui->label_13->setText("No filled");
    }

    if (flag1 && flag2 && flag3 && flag4 && flag5 && flag6) {
        ui->label_16->setText("Added");

        QSqlQuery* s1 = new QSqlQuery(db);

        QString str_q = QString("INSERT INTO invoice (from_f, to_f, named, price, goods_count, id_order, goods_count_warehouse) "
                                "values('")
            + field1 + "', '" + field2 + "', '" + field3 + "', '" + field4 + "', '" + field5 + "', '" + field6 + "', '" + field5 + "')";

        qDebug() << str_q;

        if (!s1->exec(str_q)) {
            qDebug() << "error!!!";
            return;
        }
    }
}
