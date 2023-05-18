/********************************************************************************
** Form generated from reading UI file 'bankinf.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKINF_H
#define UI_BANKINF_H

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

class Ui_BankInf
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
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuBank;
    QMenu *menuAuthorization;
    QMenu *menuAdditional_invoice;
    QMenu *menuDirectory;
    QMenu *menuAdditional;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *BankInf)
    {
        if (BankInf->objectName().isEmpty())
            BankInf->setObjectName("BankInf");
        BankInf->resize(828, 607);
        bank = new QAction(BankInf);
        bank->setObjectName("bank");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/res/menu/bank (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        bank->setIcon(icon);
        bank_add = new QAction(BankInf);
        bank_add->setObjectName("bank_add");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/res/menu/free-icon-add-8387523.png"), QSize(), QIcon::Normal, QIcon::Off);
        bank_add->setIcon(icon1);
        auth = new QAction(BankInf);
        auth->setObjectName("auth");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/res/menu/authorization.png"), QSize(), QIcon::Normal, QIcon::Off);
        auth->setIcon(icon2);
        invoice = new QAction(BankInf);
        invoice->setObjectName("invoice");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/res/menu/invoice.png"), QSize(), QIcon::Normal, QIcon::Off);
        invoice->setIcon(icon3);
        invoice_add = new QAction(BankInf);
        invoice_add->setObjectName("invoice_add");
        invoice_add->setIcon(icon1);
        warehouse = new QAction(BankInf);
        warehouse->setObjectName("warehouse");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/res/menu/root-directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        warehouse->setIcon(icon4);
        start_win = new QAction(BankInf);
        start_win->setObjectName("start_win");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/res/menu/main-menu (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        start_win->setIcon(icon5);
        centralwidget = new QWidget(BankInf);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 20, -1, -1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(30, 30));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/res/menu/free-icon-font-refresh-3917293.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 31));
        pushButton->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 31));
        pushButton_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        BankInf->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BankInf);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 828, 26));
        menuBank = new QMenu(menubar);
        menuBank->setObjectName("menuBank");
        menuAuthorization = new QMenu(menubar);
        menuAuthorization->setObjectName("menuAuthorization");
        menuAdditional_invoice = new QMenu(menubar);
        menuAdditional_invoice->setObjectName("menuAdditional_invoice");
        menuDirectory = new QMenu(menubar);
        menuDirectory->setObjectName("menuDirectory");
        menuAdditional = new QMenu(menubar);
        menuAdditional->setObjectName("menuAdditional");
        BankInf->setMenuBar(menubar);
        statusbar = new QStatusBar(BankInf);
        statusbar->setObjectName("statusbar");
        BankInf->setStatusBar(statusbar);
        toolBar = new QToolBar(BankInf);
        toolBar->setObjectName("toolBar");
        toolBar->setStyleSheet(QString::fromUtf8("background: white;"));
        toolBar->setMovable(false);
        BankInf->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuBank->menuAction());
        menubar->addAction(menuAuthorization->menuAction());
        menubar->addAction(menuAdditional_invoice->menuAction());
        menubar->addAction(menuDirectory->menuAction());
        menubar->addAction(menuAdditional->menuAction());
        menuBank->addSeparator();
        menuBank->addAction(bank);
        menuBank->addAction(bank_add);
        menuAuthorization->addAction(auth);
        menuAdditional_invoice->addAction(invoice);
        menuAdditional_invoice->addAction(invoice_add);
        menuDirectory->addAction(warehouse);
        menuAdditional->addAction(start_win);
        toolBar->addAction(start_win);
        toolBar->addAction(bank);
        toolBar->addAction(auth);
        toolBar->addAction(invoice);
        toolBar->addAction(warehouse);

        retranslateUi(BankInf);

        QMetaObject::connectSlotsByName(BankInf);
    } // setupUi

    void retranslateUi(QMainWindow *BankInf)
    {
        BankInf->setWindowTitle(QCoreApplication::translate("BankInf", "Accounting system", nullptr));
        bank->setText(QCoreApplication::translate("BankInf", "Information", nullptr));
        bank_add->setText(QCoreApplication::translate("BankInf", "Add", nullptr));
        auth->setText(QCoreApplication::translate("BankInf", "Information", nullptr));
        invoice->setText(QCoreApplication::translate("BankInf", "Information", nullptr));
        invoice_add->setText(QCoreApplication::translate("BankInf", "Add", nullptr));
        warehouse->setText(QCoreApplication::translate("BankInf", "Information", nullptr));
        start_win->setText(QCoreApplication::translate("BankInf", "Start window", nullptr));
        label->setText(QCoreApplication::translate("BankInf", "Bank", nullptr));
        pushButton_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("BankInf", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BankInf", "Remove", nullptr));
        menuBank->setTitle(QCoreApplication::translate("BankInf", "Bank", nullptr));
        menuAuthorization->setTitle(QCoreApplication::translate("BankInf", "Authorization", nullptr));
        menuAdditional_invoice->setTitle(QCoreApplication::translate("BankInf", "Profitable invoice", nullptr));
        menuDirectory->setTitle(QCoreApplication::translate("BankInf", "Directory", nullptr));
        menuAdditional->setTitle(QCoreApplication::translate("BankInf", "Additional", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("BankInf", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BankInf: public Ui_BankInf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKINF_H
