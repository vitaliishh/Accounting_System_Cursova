/********************************************************************************
** Form generated from reading UI file 'infwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFWINDOW_H
#define UI_INFWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfWindow
{
public:
    QAction *action;
    QAction *actionAdd_3;
    QAction *actionBank2;
    QAction *actionAuthorization2;
    QAction *actionProfitableInvoice2;
    QAction *actionDirectory2;
    QAction *actionstartWin2;
    QAction *actionExport_settings;
    QAction *actionImport_settings;
    QAction *actionDeleting_Project;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout1;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuefefe;
    QMenu *menuefe;
    QMenu *menuAdditional_invoice;
    QMenu *menuDirectory;
    QMenu *menuAdditional;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *InfWindow)
    {
        if (InfWindow->objectName().isEmpty())
            InfWindow->setObjectName("InfWindow");
        InfWindow->resize(730, 537);
        InfWindow->setStyleSheet(QString::fromUtf8(""));
        action = new QAction(InfWindow);
        action->setObjectName("action");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/res/menu/free-icon-add-8387523.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        actionAdd_3 = new QAction(InfWindow);
        actionAdd_3->setObjectName("actionAdd_3");
        actionAdd_3->setIcon(icon);
        actionBank2 = new QAction(InfWindow);
        actionBank2->setObjectName("actionBank2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/res/menu/bank (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBank2->setIcon(icon1);
        actionAuthorization2 = new QAction(InfWindow);
        actionAuthorization2->setObjectName("actionAuthorization2");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/res/menu/authorization.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAuthorization2->setIcon(icon2);
        actionProfitableInvoice2 = new QAction(InfWindow);
        actionProfitableInvoice2->setObjectName("actionProfitableInvoice2");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/res/menu/invoice.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProfitableInvoice2->setIcon(icon3);
        actionDirectory2 = new QAction(InfWindow);
        actionDirectory2->setObjectName("actionDirectory2");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/res/menu/root-directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDirectory2->setIcon(icon4);
        actionstartWin2 = new QAction(InfWindow);
        actionstartWin2->setObjectName("actionstartWin2");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/res/menu/main-menu (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionstartWin2->setIcon(icon5);
        actionExport_settings = new QAction(InfWindow);
        actionExport_settings->setObjectName("actionExport_settings");
        actionImport_settings = new QAction(InfWindow);
        actionImport_settings->setObjectName("actionImport_settings");
        actionDeleting_Project = new QAction(InfWindow);
        actionDeleting_Project->setObjectName("actionDeleting_Project");
        centralwidget = new QWidget(InfWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName("verticalLayout1");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #afb3b0;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout1->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout1);

        InfWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InfWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 730, 26));
        menubar->setMinimumSize(QSize(0, 0));
        menuefefe = new QMenu(menubar);
        menuefefe->setObjectName("menuefefe");
        menuefe = new QMenu(menubar);
        menuefe->setObjectName("menuefe");
        menuAdditional_invoice = new QMenu(menubar);
        menuAdditional_invoice->setObjectName("menuAdditional_invoice");
        menuDirectory = new QMenu(menubar);
        menuDirectory->setObjectName("menuDirectory");
        menuAdditional = new QMenu(menubar);
        menuAdditional->setObjectName("menuAdditional");
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        InfWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(InfWindow);
        statusbar->setObjectName("statusbar");
        InfWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(InfWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setStyleSheet(QString::fromUtf8("background: white;"));
        toolBar->setMovable(false);
        InfWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuefefe->menuAction());
        menubar->addAction(menuefe->menuAction());
        menubar->addAction(menuAdditional_invoice->menuAction());
        menubar->addAction(menuDirectory->menuAction());
        menubar->addAction(menuAdditional->menuAction());
        menuefefe->addAction(actionBank2);
        menuefefe->addAction(action);
        menuefe->addAction(actionAuthorization2);
        menuAdditional_invoice->addAction(actionProfitableInvoice2);
        menuAdditional_invoice->addAction(actionAdd_3);
        menuDirectory->addAction(actionDirectory2);
        menuAdditional->addAction(actionstartWin2);
        menuFile->addAction(actionExport_settings);
        menuFile->addAction(actionImport_settings);
        menuFile->addAction(actionDeleting_Project);
        toolBar->addAction(actionstartWin2);
        toolBar->addAction(actionBank2);
        toolBar->addAction(actionAuthorization2);
        toolBar->addAction(actionProfitableInvoice2);
        toolBar->addAction(actionDirectory2);

        retranslateUi(InfWindow);

        QMetaObject::connectSlotsByName(InfWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InfWindow)
    {
        InfWindow->setWindowTitle(QCoreApplication::translate("InfWindow", "Accounting system", nullptr));
        action->setText(QCoreApplication::translate("InfWindow", "Add", nullptr));
        actionAdd_3->setText(QCoreApplication::translate("InfWindow", "Add", nullptr));
        actionBank2->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        actionAuthorization2->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        actionProfitableInvoice2->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        actionDirectory2->setText(QCoreApplication::translate("InfWindow", "Information", nullptr));
        actionstartWin2->setText(QCoreApplication::translate("InfWindow", "Start Window", nullptr));
        actionExport_settings->setText(QCoreApplication::translate("InfWindow", "Export Settings", nullptr));
        actionImport_settings->setText(QCoreApplication::translate("InfWindow", "Import Settings", nullptr));
        actionDeleting_Project->setText(QCoreApplication::translate("InfWindow", "Clear Project", nullptr));
        label->setText(QCoreApplication::translate("InfWindow", "Select an action", nullptr));
        menuefefe->setTitle(QCoreApplication::translate("InfWindow", "Bank", nullptr));
        menuefe->setTitle(QCoreApplication::translate("InfWindow", "Authorization", nullptr));
        menuAdditional_invoice->setTitle(QCoreApplication::translate("InfWindow", "Profitable invoice", nullptr));
        menuDirectory->setTitle(QCoreApplication::translate("InfWindow", "Directory", nullptr));
        menuAdditional->setTitle(QCoreApplication::translate("InfWindow", "Additional", nullptr));
        menuFile->setTitle(QCoreApplication::translate("InfWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("InfWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfWindow: public Ui_InfWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFWINDOW_H
