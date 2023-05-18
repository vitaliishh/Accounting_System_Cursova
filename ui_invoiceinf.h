/********************************************************************************
** Form generated from reading UI file 'invoiceinf.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVOICEINF_H
#define UI_INVOICEINF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InvoiceInf
{
public:
    QAction *bank;
    QAction *bank_add;
    QAction *auth;
    QAction *invoice;
    QAction *invoice_add;
    QAction *warehouse;
    QAction *start_win;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuBank;
    QMenu *menuAuthoration;
    QMenu *menuProfitable_invoice;
    QMenu *menuDirectory;
    QMenu *menuAdditional;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *InvoiceInf)
    {
        if (InvoiceInf->objectName().isEmpty())
            InvoiceInf->setObjectName("InvoiceInf");
        InvoiceInf->resize(800, 600);
        bank = new QAction(InvoiceInf);
        bank->setObjectName("bank");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/res/menu/bank (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        bank->setIcon(icon);
        bank_add = new QAction(InvoiceInf);
        bank_add->setObjectName("bank_add");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/res/menu/free-icon-add-8387523.png"), QSize(), QIcon::Normal, QIcon::Off);
        bank_add->setIcon(icon1);
        auth = new QAction(InvoiceInf);
        auth->setObjectName("auth");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/res/menu/authorization.png"), QSize(), QIcon::Normal, QIcon::Off);
        auth->setIcon(icon2);
        invoice = new QAction(InvoiceInf);
        invoice->setObjectName("invoice");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/res/menu/invoice.png"), QSize(), QIcon::Normal, QIcon::Off);
        invoice->setIcon(icon3);
        invoice_add = new QAction(InvoiceInf);
        invoice_add->setObjectName("invoice_add");
        invoice_add->setIcon(icon1);
        warehouse = new QAction(InvoiceInf);
        warehouse->setObjectName("warehouse");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/res/menu/root-directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        warehouse->setIcon(icon4);
        start_win = new QAction(InvoiceInf);
        start_win->setObjectName("start_win");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/res/menu/main-menu (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        start_win->setIcon(icon5);
        centralwidget = new QWidget(InvoiceInf);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setMaximumSize(QSize(30, 30));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/res/menu/free-icon-font-refresh-3917293.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon6);
        pushButton_13->setIconSize(QSize(20, 20));

        horizontalLayout_5->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(0, 31));
        pushButton_14->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setMinimumSize(QSize(0, 31));
        pushButton_15->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(pushButton_15);


        verticalLayout->addLayout(horizontalLayout_5);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        InvoiceInf->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InvoiceInf);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuBank = new QMenu(menubar);
        menuBank->setObjectName("menuBank");
        menuAuthoration = new QMenu(menubar);
        menuAuthoration->setObjectName("menuAuthoration");
        menuProfitable_invoice = new QMenu(menubar);
        menuProfitable_invoice->setObjectName("menuProfitable_invoice");
        menuDirectory = new QMenu(menubar);
        menuDirectory->setObjectName("menuDirectory");
        menuAdditional = new QMenu(menubar);
        menuAdditional->setObjectName("menuAdditional");
        InvoiceInf->setMenuBar(menubar);
        statusbar = new QStatusBar(InvoiceInf);
        statusbar->setObjectName("statusbar");
        InvoiceInf->setStatusBar(statusbar);
        toolBar = new QToolBar(InvoiceInf);
        toolBar->setObjectName("toolBar");
        toolBar->setStyleSheet(QString::fromUtf8("background: white;"));
        toolBar->setMovable(false);
        InvoiceInf->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuBank->menuAction());
        menubar->addAction(menuAuthoration->menuAction());
        menubar->addAction(menuProfitable_invoice->menuAction());
        menubar->addAction(menuDirectory->menuAction());
        menubar->addAction(menuAdditional->menuAction());
        menuBank->addAction(bank);
        menuBank->addAction(bank_add);
        menuAuthoration->addAction(auth);
        menuProfitable_invoice->addAction(invoice);
        menuProfitable_invoice->addAction(invoice_add);
        menuDirectory->addAction(warehouse);
        menuAdditional->addAction(start_win);
        toolBar->addAction(start_win);
        toolBar->addAction(bank);
        toolBar->addAction(auth);
        toolBar->addAction(invoice);
        toolBar->addAction(warehouse);

        retranslateUi(InvoiceInf);

        QMetaObject::connectSlotsByName(InvoiceInf);
    } // setupUi

    void retranslateUi(QMainWindow *InvoiceInf)
    {
        InvoiceInf->setWindowTitle(QCoreApplication::translate("InvoiceInf", "Accounting system", nullptr));
        bank->setText(QCoreApplication::translate("InvoiceInf", "Information", nullptr));
        bank_add->setText(QCoreApplication::translate("InvoiceInf", "Add", nullptr));
        auth->setText(QCoreApplication::translate("InvoiceInf", "Information", nullptr));
        invoice->setText(QCoreApplication::translate("InvoiceInf", "Information", nullptr));
        invoice_add->setText(QCoreApplication::translate("InvoiceInf", "Add", nullptr));
        warehouse->setText(QCoreApplication::translate("InvoiceInf", "Information", nullptr));
        start_win->setText(QCoreApplication::translate("InvoiceInf", "Start window", nullptr));
        label->setText(QCoreApplication::translate("InvoiceInf", "Profitable invoice", nullptr));
        pushButton_13->setText(QString());
        pushButton_14->setText(QCoreApplication::translate("InvoiceInf", "Add", nullptr));
        pushButton_15->setText(QCoreApplication::translate("InvoiceInf", "Remove", nullptr));
        menuBank->setTitle(QCoreApplication::translate("InvoiceInf", "Bank", nullptr));
        menuAuthoration->setTitle(QCoreApplication::translate("InvoiceInf", "Authoration", nullptr));
        menuProfitable_invoice->setTitle(QCoreApplication::translate("InvoiceInf", "Profitable invoice", nullptr));
        menuDirectory->setTitle(QCoreApplication::translate("InvoiceInf", "Directory", nullptr));
        menuAdditional->setTitle(QCoreApplication::translate("InvoiceInf", "Additional", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("InvoiceInf", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InvoiceInf: public Ui_InvoiceInf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVOICEINF_H
