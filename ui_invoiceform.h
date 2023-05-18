/********************************************************************************
** Form generated from reading UI file 'invoiceform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVOICEFORM_H
#define UI_INVOICEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InvoiceForm
{
public:
    QLabel *label_16;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_11;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_13;

    void setupUi(QDialog *InvoiceForm)
    {
        if (InvoiceForm->objectName().isEmpty())
            InvoiceForm->setObjectName("InvoiceForm");
        InvoiceForm->resize(586, 547);
        label_16 = new QLabel(InvoiceForm);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(266, 476, 63, 20));
        QFont font;
        font.setPointSize(12);
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("color: #139e13;"));
        label = new QLabel(InvoiceForm);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 191, 31));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        layoutWidget = new QWidget(InvoiceForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 470, 195, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 31));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 31));

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(InvoiceForm);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(51, 111, 507, 313));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setVerticalSpacing(25);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(200, 31));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(150, 0));
        label_8->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(200, 31));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName("lineEdit_3");
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(200, 31));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        gridLayout->addWidget(label_10, 2, 2, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName("lineEdit_4");
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMinimumSize(QSize(200, 31));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        gridLayout->addWidget(label_11, 3, 2, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName("lineEdit_5");
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(200, 31));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        gridLayout->addWidget(label_12, 4, 2, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName("lineEdit_6");
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(200, 31));

        gridLayout->addWidget(lineEdit_6, 5, 1, 1, 1);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        gridLayout->addWidget(label_13, 5, 2, 1, 1);


        retranslateUi(InvoiceForm);

        QMetaObject::connectSlotsByName(InvoiceForm);
    } // setupUi

    void retranslateUi(QDialog *InvoiceForm)
    {
        InvoiceForm->setWindowTitle(QCoreApplication::translate("InvoiceForm", "Accounting system", nullptr));
        label_16->setText(QString());
        label->setText(QCoreApplication::translate("InvoiceForm", "Profitable invoice", nullptr));
        pushButton->setText(QCoreApplication::translate("InvoiceForm", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InvoiceForm", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("InvoiceForm", "From", nullptr));
        label_8->setText(QString());
        label_3->setText(QCoreApplication::translate("InvoiceForm", "To", nullptr));
        label_9->setText(QString());
        label_4->setText(QCoreApplication::translate("InvoiceForm", "Product", nullptr));
        label_10->setText(QString());
        label_5->setText(QCoreApplication::translate("InvoiceForm", "Price", nullptr));
        label_11->setText(QString());
        label_6->setText(QCoreApplication::translate("InvoiceForm", "Count", nullptr));
        label_12->setText(QString());
        label_7->setText(QCoreApplication::translate("InvoiceForm", "Order id", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InvoiceForm: public Ui_InvoiceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVOICEFORM_H
