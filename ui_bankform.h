/********************************************************************************
** Form generated from reading UI file 'bankform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKFORM_H
#define UI_BANKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BankForm
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_16;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_14;
    QLineEdit *lineEdit_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_15;

    void setupUi(QDialog *BankForm)
    {
        if (BankForm->objectName().isEmpty())
            BankForm->setObjectName("BankForm");
        BankForm->resize(564, 593);
        label = new QLabel(BankForm);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 131, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        layoutWidget = new QWidget(BankForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 530, 195, 33));
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

        label_16 = new QLabel(BankForm);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(267, 536, 63, 20));
        QFont font1;
        font1.setPointSize(12);
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("color: #139e13;"));
        layoutWidget1 = new QWidget(BankForm);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 120, 513, 371));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(40);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(30);
        formLayout->setVerticalSpacing(25);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(200, 31));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(200, 31));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName("lineEdit_3");
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(200, 31));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName("lineEdit_4");
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMinimumSize(QSize(200, 31));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName("lineEdit_5");
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(200, 31));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName("lineEdit_6");
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(200, 31));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName("label_14");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_14);

        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName("lineEdit_7");
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMinimumSize(QSize(200, 31));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_7);


        horizontalLayout_2->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName("verticalLayout");
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout->addWidget(label_13);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout->addWidget(label_15);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(BankForm);

        QMetaObject::connectSlotsByName(BankForm);
    } // setupUi

    void retranslateUi(QDialog *BankForm)
    {
        BankForm->setWindowTitle(QCoreApplication::translate("BankForm", "Accounting system", nullptr));
        label->setText(QCoreApplication::translate("BankForm", "Bank form", nullptr));
        pushButton->setText(QCoreApplication::translate("BankForm", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BankForm", "Cancel", nullptr));
        label_16->setText(QString());
        label_2->setText(QCoreApplication::translate("BankForm", "Who paid", nullptr));
        label_3->setText(QCoreApplication::translate("BankForm", "Identification code 1", nullptr));
        label_4->setText(QCoreApplication::translate("BankForm", "Who got paid", nullptr));
        label_5->setText(QCoreApplication::translate("BankForm", "Identification code 2", nullptr));
        label_6->setText(QCoreApplication::translate("BankForm", "Invoice", nullptr));
        label_7->setText(QCoreApplication::translate("BankForm", "Id order", nullptr));
        label_14->setText(QCoreApplication::translate("BankForm", "Price", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BankForm: public Ui_BankForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKFORM_H
