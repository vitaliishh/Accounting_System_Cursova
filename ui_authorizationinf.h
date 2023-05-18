/********************************************************************************
** Form generated from reading UI file 'authorizationinf.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONINF_H
#define UI_AUTHORIZATIONINF_H

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

class Ui_AuthorizationInf
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
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuefef;
    QMenu *menuAuthoration;
    QMenu *menuProfitable_invoice;
    QMenu *menuDirectory;
    QMenu *menuAdditional;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *AuthorizationInf)
    {
        if (AuthorizationInf->objectName().isEmpty())
            AuthorizationInf->setObjectName("AuthorizationInf");
        AuthorizationInf->resize(800, 600);
        bank = new QAction(AuthorizationInf);
        bank->setObjectName("bank");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/res/menu/bank (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        bank->setIcon(icon);
        bank_add = new QAction(AuthorizationInf);
        bank_add->setObjectName("bank_add");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/res/menu/free-icon-add-8387523.png"), QSize(), QIcon::Normal, QIcon::Off);
        bank_add->setIcon(icon1);
        auth = new QAction(AuthorizationInf);
        auth->setObjectName("auth");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/res/menu/authorization.png"), QSize(), QIcon::Normal, QIcon::Off);
        auth->setIcon(icon2);
        invoice = new QAction(AuthorizationInf);
        invoice->setObjectName("invoice");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/res/menu/invoice.png"), QSize(), QIcon::Normal, QIcon::Off);
        invoice->setIcon(icon3);
        invoice_add = new QAction(AuthorizationInf);
        invoice_add->setObjectName("invoice_add");
        invoice_add->setIcon(icon1);
        warehouse = new QAction(AuthorizationInf);
        warehouse->setObjectName("warehouse");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/res/menu/root-directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        warehouse->setIcon(icon4);
        start_win = new QAction(AuthorizationInf);
        start_win->setObjectName("start_win");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/res/menu/main-menu (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        start_win->setIcon(icon5);
        centralwidget = new QWidget(AuthorizationInf);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 16777215));
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


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        AuthorizationInf->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AuthorizationInf);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuefef = new QMenu(menubar);
        menuefef->setObjectName("menuefef");
        menuAuthoration = new QMenu(menubar);
        menuAuthoration->setObjectName("menuAuthoration");
        menuProfitable_invoice = new QMenu(menubar);
        menuProfitable_invoice->setObjectName("menuProfitable_invoice");
        menuDirectory = new QMenu(menubar);
        menuDirectory->setObjectName("menuDirectory");
        menuAdditional = new QMenu(menubar);
        menuAdditional->setObjectName("menuAdditional");
        AuthorizationInf->setMenuBar(menubar);
        statusbar = new QStatusBar(AuthorizationInf);
        statusbar->setObjectName("statusbar");
        AuthorizationInf->setStatusBar(statusbar);
        toolBar = new QToolBar(AuthorizationInf);
        toolBar->setObjectName("toolBar");
        toolBar->setStyleSheet(QString::fromUtf8("background: white;"));
        toolBar->setMovable(false);
        AuthorizationInf->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuefef->menuAction());
        menubar->addAction(menuAuthoration->menuAction());
        menubar->addAction(menuProfitable_invoice->menuAction());
        menubar->addAction(menuDirectory->menuAction());
        menubar->addAction(menuAdditional->menuAction());
        menuefef->addAction(bank);
        menuefef->addAction(bank_add);
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

        retranslateUi(AuthorizationInf);

        QMetaObject::connectSlotsByName(AuthorizationInf);
    } // setupUi

    void retranslateUi(QMainWindow *AuthorizationInf)
    {
        AuthorizationInf->setWindowTitle(QCoreApplication::translate("AuthorizationInf", "Accounting system", nullptr));
        bank->setText(QCoreApplication::translate("AuthorizationInf", "Information", nullptr));
        bank_add->setText(QCoreApplication::translate("AuthorizationInf", "Add", nullptr));
        auth->setText(QCoreApplication::translate("AuthorizationInf", "Information", nullptr));
        invoice->setText(QCoreApplication::translate("AuthorizationInf", "Information", nullptr));
        invoice_add->setText(QCoreApplication::translate("AuthorizationInf", "Add", nullptr));
        warehouse->setText(QCoreApplication::translate("AuthorizationInf", "Information", nullptr));
        start_win->setText(QCoreApplication::translate("AuthorizationInf", "Start window", nullptr));
        label->setText(QCoreApplication::translate("AuthorizationInf", "Authoration", nullptr));
        pushButton_3->setText(QString());
        menuefef->setTitle(QCoreApplication::translate("AuthorizationInf", "Bank", nullptr));
        menuAuthoration->setTitle(QCoreApplication::translate("AuthorizationInf", "Authoration", nullptr));
        menuProfitable_invoice->setTitle(QCoreApplication::translate("AuthorizationInf", "Profitable invoice", nullptr));
        menuDirectory->setTitle(QCoreApplication::translate("AuthorizationInf", "Directory", nullptr));
        menuAdditional->setTitle(QCoreApplication::translate("AuthorizationInf", "Additional", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("AuthorizationInf", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationInf: public Ui_AuthorizationInf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONINF_H
