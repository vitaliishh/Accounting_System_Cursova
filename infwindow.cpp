#include "infwindow.h"
#include "authorizationinf.h"
#include "bankinf.h"
#include "invoiceinf.h"
#include "ui_infwindow.h"

#include "bankform.h"
#include "invoiceform.h"
#include <QHBoxLayout>
#include <QHeaderView>
#include <QPushButton>
#include <QSpacerItem>
#include <QTableView>
#include <QVBoxLayout>

InfWindow::InfWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::InfWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DESTIN);

    if (db.open()) {
        qDebug() << "Succ conn to db: " << db.databaseName();
    } else {
        qDebug() << "Error conn to db: " + db.lastError().databaseText();
    }
}

InfWindow::~InfWindow()
{
    clearEl();

    db.close();
    delete ui;
}

void InfWindow::on_action_triggered()
{
    BankForm bankForm;
    bankForm.exec();
}

void InfWindow::on_actionAdd_3_triggered()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}

//tabs---------------------

void InfWindow::on_actionBank2_triggered()
{

    if (winId != 0) {
        clearEl();
    }

    winId = 1;

    bankWin();
}

void InfWindow::clearEl()
{
    QLayoutItem* child1;

    while ((child1 = btnLay->takeAt(0)) != nullptr) {
        delete child1->widget();
    }

    delete child1;

    QLayoutItem* child2;

    while ((child2 = tableLay->takeAt(0)) != nullptr) {
        delete child2->widget();
    }

    delete child2;

    QLayoutItem* child3;

    while ((child3 = mainLay->takeAt(0)) != nullptr) {
        delete child3->widget();
    }

    delete child3;
}

void InfWindow::bankWin()
{
    ui->label->hide();

    tableView = new QTableView;

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

    tableView->setSortingEnabled(true);
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    tableView->setModel(model);

    tableView->setColumnHidden(0, true);
    tableView->setColumnHidden(8, true);
    tableView->setColumnHidden(9, true);
    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableView->setShowGrid(true);

    mainLay = new QVBoxLayout;
    QLabel* label1 = new QLabel("Bank");
    label1->setAlignment(Qt::AlignHCenter);
    label1->setStyleSheet("font-size: 16px");
    mainLay->addWidget(label1);

    btnLay = new QHBoxLayout;
    QSpacerItem* spacerBtn = new QSpacerItem(0, 0, QSizePolicy::Expanding);
    QPushButton* btnUpdate = new QPushButton();
    btnUpdate->setIcon(QIcon(":/image/res/menu/free-icon-font-refresh-3917293.png"));
    QPushButton* btnAdd = new QPushButton("Add");
    QPushButton* btnRemove = new QPushButton("Remove");
    btnLay->addItem(spacerBtn);
    btnLay->addWidget(btnUpdate);
    btnLay->addWidget(btnAdd);
    btnLay->addWidget(btnRemove);

    tableLay = new QVBoxLayout;
    tableLay->addWidget(tableView);

    mainLay->addLayout(btnLay);
    mainLay->addLayout(tableLay);

    ui->verticalLayout1->addLayout(mainLay);

    connect(btnAdd, SIGNAL(clicked()), this, SLOT(bankForm_f()));
    connect(btnRemove, SIGNAL(clicked()), this, SLOT(removeOrder()));
    connect(btnUpdate, SIGNAL(clicked()), this, SLOT(updateOrder()));
}

void InfWindow::bankForm_f()
{
    BankForm bankForm;
    bankForm.exec();
}

void InfWindow::removeOrder()
{
    int selectedRow = tableView->currentIndex().row();

    if (selectedRow >= 0) {
        model->removeRow(selectedRow);
    } else {
        qDebug() << "no selected";
    }
}

void InfWindow::updateOrder()
{
    model->select();
}

void InfWindow::on_actionAuthorization2_triggered()
{
    if (winId != 0) {
        clearEl();
    }

    winId = 2;

    authorizationWin();
}

void InfWindow::authorizationWin()
{
    ui->label->hide();

    tableView = new QTableView;

    model = new QSqlTableModel(this, db);

    model->setTable("Bank");
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

    tableView->setSortingEnabled(true);
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    tableView->setModel(model);

    tableView->setColumnHidden(0, true);
    tableView->setColumnHidden(2, true);
    tableView->setColumnHidden(4, true);
    //ui->tableView->setColumnHidden(8,true);
    //ui->tableView->setColumnHidden(9,true);
    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableView->setShowGrid(true);

    mainLay = new QVBoxLayout;
    QLabel* label1 = new QLabel("Authorization");
    label1->setAlignment(Qt::AlignHCenter);
    label1->setStyleSheet("font-size: 16px");
    mainLay->addWidget(label1);

    btnLay = new QHBoxLayout;
    QSpacerItem* spacerBtn = new QSpacerItem(0, 0, QSizePolicy::Expanding);
    QPushButton* btnUpdate = new QPushButton();
    btnUpdate->setIcon(QIcon(":/image/res/menu/free-icon-font-refresh-3917293.png"));
    btnLay->addItem(spacerBtn);
    btnLay->addWidget(btnUpdate);

    tableLay = new QVBoxLayout;
    tableLay->addWidget(tableView);

    mainLay->addLayout(btnLay);
    mainLay->addLayout(tableLay);

    ui->verticalLayout1->addLayout(mainLay);

    connect(btnUpdate, SIGNAL(clicked()), this, SLOT(updateOrder()));
}

void InfWindow::on_actionProfitableInvoice2_triggered()
{
    if (winId != 0) {
        clearEl();
    }

    winId = 3;

    invoiceWin();
}

void InfWindow::invoiceWin()
{
    ui->label->hide();

    tableView = new QTableView;

    model = new QSqlTableModel(this, db);

    model->setTable("invoice");
    model->select();

    model->setHeaderData(1, Qt::Horizontal, "From", Qt::DisplayRole);
    model->setHeaderData(2, Qt::Horizontal, "To", Qt::DisplayRole);
    model->setHeaderData(3, Qt::Horizontal, "Product", Qt::DisplayRole);
    model->setHeaderData(4, Qt::Horizontal, "Price", Qt::DisplayRole);
    model->setHeaderData(5, Qt::Horizontal, "Count", Qt::DisplayRole);
    model->setHeaderData(6, Qt::Horizontal, "Order id", Qt::DisplayRole);

    tableView->setSortingEnabled(true);
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    tableView->setModel(model);

    tableView->setColumnHidden(0, true);
    tableView->setColumnHidden(7, true);

    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableView->setShowGrid(true);

    mainLay = new QVBoxLayout;
    QLabel* label1 = new QLabel("Profitable invoice");
    label1->setAlignment(Qt::AlignHCenter);
    label1->setStyleSheet("font-size: 16px");
    mainLay->addWidget(label1);

    btnLay = new QHBoxLayout;
    QSpacerItem* spacerBtn = new QSpacerItem(0, 0, QSizePolicy::Expanding);
    QPushButton* btnUpdate = new QPushButton();
    btnUpdate->setIcon(QIcon(":/image/res/menu/free-icon-font-refresh-3917293.png"));
    QPushButton* btnAdd = new QPushButton("Add");
    QPushButton* btnRemove = new QPushButton("Remove");
    btnLay->addItem(spacerBtn);
    btnLay->addWidget(btnUpdate);
    btnLay->addWidget(btnAdd);
    btnLay->addWidget(btnRemove);

    tableLay = new QVBoxLayout;
    tableLay->addWidget(tableView);

    mainLay->addLayout(btnLay);
    mainLay->addLayout(tableLay);

    ui->verticalLayout1->addLayout(mainLay);

    connect(btnAdd, SIGNAL(clicked()), this, SLOT(invoiceForm_f()));
    connect(btnRemove, SIGNAL(clicked()), this, SLOT(removeOrder()));
    connect(btnUpdate, SIGNAL(clicked()), this, SLOT(updateOrder()));
}

void InfWindow::invoiceForm_f()
{
    InvoiceForm invoiceForm;
    invoiceForm.exec();
}

void InfWindow::on_actionDirectory2_triggered()
{
    if (winId != 0) {
        clearEl();
    }

    winId = 4;

    directoryWin();
}

void InfWindow::directoryWin()
{
    ui->label->hide();

    tableView = new QTableView;

    model = new QSqlTableModel(this, db);

    model->setTable("invoice");
    model->select();

    model->setHeaderData(1, Qt::Horizontal, "From", Qt::DisplayRole);
    model->setHeaderData(2, Qt::Horizontal, "To", Qt::DisplayRole);
    model->setHeaderData(3, Qt::Horizontal, "Product", Qt::DisplayRole);
    model->setHeaderData(4, Qt::Horizontal, "Price", Qt::DisplayRole);
    model->setHeaderData(6, Qt::Horizontal, "Order id", Qt::DisplayRole);
    model->setHeaderData(7, Qt::Horizontal, "Count in warehouse", Qt::DisplayRole);

    tableView->setSortingEnabled(true);
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    tableView->setModel(model);

    tableView->setColumnHidden(0, true);
    tableView->setColumnHidden(5, true);

    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableView->setShowGrid(true);

    mainLay = new QVBoxLayout;
    QLabel* label1 = new QLabel("Directory (Warehouse)");
    label1->setAlignment(Qt::AlignHCenter);
    label1->setStyleSheet("font-size: 16px");
    mainLay->addWidget(label1);

    btnLay = new QHBoxLayout;
    QSpacerItem* spacerBtn = new QSpacerItem(0, 0, QSizePolicy::Expanding);
    QPushButton* btnUpdate = new QPushButton();
    btnUpdate->setIcon(QIcon(":/image/res/menu/free-icon-font-refresh-3917293.png"));
    btnLay->addItem(spacerBtn);
    btnLay->addWidget(btnUpdate);

    tableLay = new QVBoxLayout;
    tableLay->addWidget(tableView);

    mainLay->addLayout(btnLay);
    mainLay->addLayout(tableLay);

    ui->verticalLayout1->addLayout(mainLay);

    connect(btnUpdate, SIGNAL(clicked()), this, SLOT(updateOrder()));
}

void InfWindow::messBox(QString val)
{
    QMessageBox msgBox(QMessageBox::Information, "Info", val);
    msgBox.setStyleSheet("QMessageBox {background-color: white; color: black;}"
                         "QPushButton { padding-left: 10px; padding-right: 10px; padding-top: 3px; padding-bottom: 3px; background-color: white; border-radius: 3px; border: 1px solid  rgb(209, 207, 203);}"
                         "QPushButton:hover{background: #dedcd7;}");

    msgBox.exec();
}

void InfWindow::on_actionstartWin2_triggered()
{
    if (winId != 0) {
        clearEl();
    }

    winId = 0;

    ui->label->show();
}

void InfWindow::on_actionExport_settings_triggered()
{
    QString defaultPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);

    QString genPath = defaultPath + "/" + "acc_settings";
    QString savePath = QFileDialog::getSaveFileName(this, "Save File", genPath, "Zip files (*.zip);");

    if (savePath == "") {
        return;
    }

    qDebug() << savePath;

    zipFile archive = zipOpen(QTextCodec::codecForName("CP1251")->fromUnicode(savePath).data(), APPEND_STATUS_CREATE);

    zip_fileinfo file_info = {};
    zipOpenNewFileInZip(archive, QTextCodec::codecForName("CP1251")->fromUnicode(DB_NAME).data(), &file_info, NULL, 0, NULL, 0, NULL, Z_DEFLATED, Z_DEFAULT_COMPRESSION);

    FILE* file = fopen(QTextCodec::codecForName("CP1251")->fromUnicode(DESTIN).data(), "rb");
    if (!file) {
        zipClose(archive, NULL);
        return;
    }

    char buffer[1024];
    int size = 0;
    do {
        size = fread(buffer, 1, sizeof(buffer), file);
        zipWriteInFileInZip(archive, buffer, size);
    } while (size > 0);

    zipCloseFileInZip(archive);

    fclose(file);

    zipClose(archive, NULL);

    messBox("Data export has ended.");
}

void InfWindow::on_actionImport_settings_triggered()
{
    //arch fun
    QString path = QFileDialog::getOpenFileName(this, "Choose File", "C:/Users/" + qUsername + "/Desktop/");
    QByteArray path_ba = QTextCodec::codecForName("CP1251")->fromUnicode(path);

    if (path == "") {
        return;
    }

    QMessageBox msgBox(QMessageBox::Question, "Clearing", "This operation clear all date. Do you want to clear data?", QMessageBox::Yes | QMessageBox::No);
    msgBox.setStyleSheet("QMessageBox {background-color: white; color: black;}"
                         "QPushButton { padding-left: 10px; padding-right: 10px; padding-top: 3px; padding-bottom: 3px; background-color: white; border-radius: 3px; border: 1px solid  rgb(209, 207, 203);}"
                         "QPushButton:hover{background: #dedcd7;}");

    int result_ans = msgBox.exec();

    if (result_ans != msgBox.Yes) {
        return;
    }

    QDir folder(DIR_PATH_NO_LAST_SLASH);
    folder.removeRecursively();

    QDir qdir;
    if (!qdir.exists(ROAMING_DIR_PATH_NO_LAST_SLASH)) {
        qDebug() << "exust";
        qdir.mkdir(DATA_FOLDER_NAME);
    }

    const int FILE_NAME_SIZE = 256;
    const int BUFFER_SIZE = 256;

    const char* archivePath = path_ba;
    const char* directoryPath = QTextCodec::codecForName("CP1251")->fromUnicode(DIR_PATH_NO_LAST_SLASH).data();

    unzFile archive = unzOpen(archivePath);
    if (archive == NULL) {
        printf("Can't to open arch %s\n", archivePath);
        return;
    }

    unz_file_info file_info;
    char filename[FILE_NAME_SIZE];

    //---first iter
    int result = unzGoToFirstFile(archive);
    if (result != UNZ_OK) {
        return;
    }
    unzGetCurrentFileInfo(archive, &file_info, filename, sizeof(filename), NULL, 0, NULL, 0);
    unzOpenCurrentFile(archive);

    //set name for file
    string filePath = directoryPath;
    filePath += "/";
    for (int i = 0; i < FILE_NAME_SIZE; ++i) {
        if (filename[i] == '\0') {
            break;
        }
        filePath += filename[i];
    }

    if (filePath.find(".") != std::string::npos) {

        //create fol for file
        size_t last_slash_pos = filePath.find_last_of('/');
        string result_without_slash = filePath.substr(0, last_slash_pos);
        QDir().mkpath(QString::fromStdString(result_without_slash));

        char buffer0[BUFFER_SIZE];
        FILE* out_file0 = fopen(filePath.c_str(), "wb");
        int read_bytes0;
        do {
            read_bytes0 = unzReadCurrentFile(archive, buffer0, sizeof(buffer0));
            fwrite(buffer0, 1, read_bytes0, out_file0);
        } while (read_bytes0 > 0);

        unzCloseCurrentFile(archive);
        fclose(out_file0);
    } else {
        unzCloseCurrentFile(archive);
    }
    //---end first iter

    //---second iter
    do {
        result = unzGoToNextFile(archive);
        if (result != UNZ_OK) {
            break;
        }
        unzGetCurrentFileInfo(archive, &file_info, filename, sizeof(filename), NULL, 0, NULL, 0);

        //set name for file
        string filePath = directoryPath;
        filePath += "/";
        for (int i = 0; i < FILE_NAME_SIZE; ++i) {
            if (filename[i] == '\0') {
                break;
            }
            filePath += filename[i];
        }

        if (!(filePath.find(".") != std::string::npos)) {
            continue;
        }

        unzOpenCurrentFile(archive);

        //create fol for file
        size_t last_slash_pos = filePath.find_last_of('/');
        string result_without_slash = filePath.substr(0, last_slash_pos);
        QDir().mkpath(QString::fromStdString(result_without_slash));

        //write file
        char buffer[BUFFER_SIZE];
        FILE* out_file = fopen(filePath.c_str(), "wb");
        int read_bytes;
        do {
            read_bytes = unzReadCurrentFile(archive, buffer, sizeof(buffer));
            fwrite(buffer, 1, read_bytes, out_file);
        } while (read_bytes > 0);

        unzCloseCurrentFile(archive);
        fclose(out_file);
    } while (result == UNZ_OK);

    unzClose(archive);

    messBox("Data import has ended. Please restart the program!");

    qDebug() << "end extract arch";
}

void InfWindow::on_actionDeleting_Project_triggered()
{
    QByteArray path_ba = QTextCodec::codecForName("CP1251")->fromUnicode(SETTINGS_PATH);

    QMessageBox msgBox(QMessageBox::Question, "Clearing", "This operation clear all date. Do you want to clear data?", QMessageBox::Yes | QMessageBox::No);
    msgBox.setStyleSheet("QMessageBox {background-color: white; color: black;}"
                         "QPushButton { padding-left: 10px; padding-right: 10px; padding-top: 3px; padding-bottom: 3px; background-color: white; border-radius: 3px; border: 1px solid  rgb(209, 207, 203);}"
                         "QPushButton:hover{background: #dedcd7;}");

    int result_ans = msgBox.exec();

    if (result_ans != msgBox.Yes) {
        return;
    }

    QDir folder(DIR_PATH_NO_LAST_SLASH);
    folder.removeRecursively();

    QDir qdir;
    if (!qdir.exists(ROAMING_DIR_PATH_NO_LAST_SLASH)) {
        qDebug() << "exust";
        qdir.mkdir(DATA_FOLDER_NAME);
    }

    const int FILE_NAME_SIZE = 256;
    const int BUFFER_SIZE = 256;

    const char* archivePath = path_ba;
    const char* directoryPath = QTextCodec::codecForName("CP1251")->fromUnicode(DIR_PATH_NO_LAST_SLASH).data();

    unzFile archive = unzOpen(archivePath);
    if (archive == NULL) {
        printf("Can't to open arch %s\n", archivePath);
        return;
    }

    unz_file_info file_info;
    char filename[FILE_NAME_SIZE];

    //---first iter
    int result = unzGoToFirstFile(archive);
    if (result != UNZ_OK) {
        return;
    }
    unzGetCurrentFileInfo(archive, &file_info, filename, sizeof(filename), NULL, 0, NULL, 0);
    unzOpenCurrentFile(archive);

    //set name for file
    string filePath = directoryPath;
    filePath += "/";
    for (int i = 0; i < FILE_NAME_SIZE; ++i) {
        if (filename[i] == '\0') {
            break;
        }
        filePath += filename[i];
    }

    if (filePath.find(".") != std::string::npos) {

        //create fol for file
        size_t last_slash_pos = filePath.find_last_of('/');
        string result_without_slash = filePath.substr(0, last_slash_pos);
        QDir().mkpath(QString::fromStdString(result_without_slash));

        char buffer0[BUFFER_SIZE];
        FILE* out_file0 = fopen(filePath.c_str(), "wb");
        int read_bytes0;
        do {
            read_bytes0 = unzReadCurrentFile(archive, buffer0, sizeof(buffer0));
            fwrite(buffer0, 1, read_bytes0, out_file0);
        } while (read_bytes0 > 0);

        unzCloseCurrentFile(archive);
        fclose(out_file0);
    } else {
        unzCloseCurrentFile(archive);
    }
    //---end first iter

    //---second iter
    do {
        result = unzGoToNextFile(archive);
        if (result != UNZ_OK) {
            break;
        }
        unzGetCurrentFileInfo(archive, &file_info, filename, sizeof(filename), NULL, 0, NULL, 0);

        //set name for file
        string filePath = directoryPath;
        filePath += "/";
        for (int i = 0; i < FILE_NAME_SIZE; ++i) {
            if (filename[i] == '\0') {
                break;
            }
            filePath += filename[i];
        }

        if (!(filePath.find(".") != std::string::npos)) {
            continue;
        }

        unzOpenCurrentFile(archive);

        //create fol for file
        size_t last_slash_pos = filePath.find_last_of('/');
        string result_without_slash = filePath.substr(0, last_slash_pos);
        QDir().mkpath(QString::fromStdString(result_without_slash));

        //write file
        char buffer[BUFFER_SIZE];
        FILE* out_file = fopen(filePath.c_str(), "wb");
        int read_bytes;
        do {
            read_bytes = unzReadCurrentFile(archive, buffer, sizeof(buffer));
            fwrite(buffer, 1, read_bytes, out_file);
        } while (read_bytes > 0);

        unzCloseCurrentFile(archive);
        fclose(out_file);
    } while (result == UNZ_OK);

    unzClose(archive);

    messBox("Data import has ended. Please restart the program!");

    qDebug() << "end extract arch";
}
