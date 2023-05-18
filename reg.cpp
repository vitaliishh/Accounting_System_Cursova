#include "reg.h"
#include "actreg.h"
#include "infwindow.h"
#include "ui_reg.h"

Reg::Reg(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::Reg)
{
    ui->setupUi(this);

    QDir qdir;
    bool flagExist = false;

    if (!qdir.exists(DB_DIR_PATH)) {
        qDebug() << "db exist";

        qdir.mkdir(DB_DIR_PATH);
        flagExist = true;
    }

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DESTIN);

    QFile::copy(DB_SOURCE, DESTIN);
    QFile::setPermissions(DESTIN, QFile::WriteOwner | QFile::ReadOwner);

    if (db.open()) {
        qDebug() << "Succ conn to db: " << db.databaseName();
    } else {
        qDebug() << "Error conn to db: " + db.lastError().databaseText();
    }

    //copy proj settings
    QFile::copy(SETTINGS_SOURCE, SETTINGS_PATH);
    QFile::setPermissions(SETTINGS_PATH, QFile::WriteOwner | QFile::ReadOwner);
}

Reg::~Reg()
{
    db.close();
    delete ui;
}

void Reg::on_pushButton_3_clicked()
{
    ActReg actReg;
    actReg.exec();
}

void Reg::on_pushButton_clicked()
{
    QString log = ui->lineEdit->text();
    QString pass = ui->lineEdit_2->text();

    QSqlQuery* s1 = new QSqlQuery(db);

    QString str_q = QString("SELECT EXISTS(SELECT login, pass FROM users WHERE login = '") + log + "' and pass = '" + pass + "')";

    int res = s1->exec(str_q);

    vector<QSqlRecord> vec;

    while (s1->next()) {
        QSqlRecord rec;
        rec = s1->record();
        vec.push_back(rec);
    }

    QSqlRecord resQ = vec[0];

    QString resS = resQ.field(0).value().toString();

    bool flag1_2 = false;
    bool flag2_2 = false;

    if (log == "") {
        ui->label_err_2->setText("Not filled");
    } else {
        ui->label_err_2->setText("");
        flag1_2 = true;
    }

    if (pass == "") {
        ui->label_err_3->setText("Not filled");
    } else {
        ui->label_err_3->setText("");
        flag2_2 = true;
    }

    if (flag1_2 && flag2_2) {
        if (resS == "1") {
            InfWindow* infW = new InfWindow;

            //infW->showMaximized();
            infW->show();
            close();
        } else {
            ui->label_err->setText("User does not exist");
        }
    }
}
