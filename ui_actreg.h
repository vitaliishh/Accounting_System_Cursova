/********************************************************************************
** Form generated from reading UI file 'actreg.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTREG_H
#define UI_ACTREG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActReg
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineE21;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineE22;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLineEdit *lineE23;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineE24;
    QLabel *label_11;

    void setupUi(QDialog *ActReg)
    {
        if (ActReg->objectName().isEmpty())
            ActReg->setObjectName("ActReg");
        ActReg->resize(534, 450);
        pushButton = new QPushButton(ActReg);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 380, 91, 31));
        label = new QLabel(ActReg);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 111, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        pushButton_2 = new QPushButton(ActReg);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 380, 91, 31));
        layoutWidget = new QWidget(ActReg);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(370, 120, 91, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: #cf2323;"));

        verticalLayout_2->addWidget(label_9);

        layoutWidget1 = new QWidget(ActReg);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 120, 297, 209));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(25);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineE21 = new QLineEdit(layoutWidget1);
        lineE21->setObjectName("lineE21");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineE21->sizePolicy().hasHeightForWidth());
        lineE21->setSizePolicy(sizePolicy);
        lineE21->setMinimumSize(QSize(200, 31));

        horizontalLayout->addWidget(lineE21);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineE22 = new QLineEdit(layoutWidget1);
        lineE22->setObjectName("lineE22");
        sizePolicy.setHeightForWidth(lineE22->sizePolicy().hasHeightForWidth());
        lineE22->setSizePolicy(sizePolicy);
        lineE22->setMinimumSize(QSize(200, 31));
        lineE22->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineE22);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");

        horizontalLayout_3->addWidget(label_10);

        lineE23 = new QLineEdit(layoutWidget1);
        lineE23->setObjectName("lineE23");
        sizePolicy.setHeightForWidth(lineE23->sizePolicy().hasHeightForWidth());
        lineE23->setSizePolicy(sizePolicy);
        lineE23->setMinimumSize(QSize(200, 31));
        lineE23->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineE23);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        lineE24 = new QLineEdit(layoutWidget1);
        lineE24->setObjectName("lineE24");
        sizePolicy.setHeightForWidth(lineE24->sizePolicy().hasHeightForWidth());
        lineE24->setSizePolicy(sizePolicy);
        lineE24->setMinimumSize(QSize(200, 31));

        horizontalLayout_4->addWidget(lineE24);


        verticalLayout->addLayout(horizontalLayout_4);

        label_11 = new QLabel(ActReg);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(260, 386, 63, 20));
        QFont font1;
        font1.setPointSize(12);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: #139e13;"));

        retranslateUi(ActReg);

        QMetaObject::connectSlotsByName(ActReg);
    } // setupUi

    void retranslateUi(QDialog *ActReg)
    {
        ActReg->setWindowTitle(QCoreApplication::translate("ActReg", "Accounting system", nullptr));
        pushButton->setText(QCoreApplication::translate("ActReg", "Register", nullptr));
        label->setText(QCoreApplication::translate("ActReg", "Register", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ActReg", "Cancel", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_2->setText(QCoreApplication::translate("ActReg", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("ActReg", "Password", nullptr));
        label_10->setText(QCoreApplication::translate("ActReg", "Confirm pass", nullptr));
        label_5->setText(QCoreApplication::translate("ActReg", "E-mail", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ActReg: public Ui_ActReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTREG_H
