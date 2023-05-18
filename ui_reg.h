/********************************************************************************
** Form generated from reading UI file 'reg.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_H
#define UI_REG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reg
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_err;
    QLabel *label_err_2;
    QLabel *label_err_3;

    void setupUi(QMainWindow *Reg)
    {
        if (Reg->objectName().isEmpty())
            Reg->setObjectName("Reg");
        Reg->resize(493, 399);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Reg->sizePolicy().hasHeightForWidth());
        Reg->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Reg);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 240, 91, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 120, 171, 31));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 180, 171, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 40, 301, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 300, 291, 21));
        QFont font1;
        font1.setItalic(true);
        label_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(110, 330, 91, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 130, 63, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 180, 63, 20));
        label_err = new QLabel(centralwidget);
        label_err->setObjectName("label_err");
        label_err->setGeometry(QRect(220, 240, 201, 30));
        label_err->setStyleSheet(QString::fromUtf8("color: #cf2323;"));
        label_err_2 = new QLabel(centralwidget);
        label_err_2->setObjectName("label_err_2");
        label_err_2->setGeometry(QRect(400, 121, 71, 30));
        label_err_2->setStyleSheet(QString::fromUtf8("color: #cf2323;"));
        label_err_3 = new QLabel(centralwidget);
        label_err_3->setObjectName("label_err_3");
        label_err_3->setGeometry(QRect(400, 181, 71, 30));
        label_err_3->setStyleSheet(QString::fromUtf8("color: #cf2323;"));
        Reg->setCentralWidget(centralwidget);

        retranslateUi(Reg);

        QMetaObject::connectSlotsByName(Reg);
    } // setupUi

    void retranslateUi(QMainWindow *Reg)
    {
        Reg->setWindowTitle(QCoreApplication::translate("Reg", "Accounting system", nullptr));
        pushButton->setText(QCoreApplication::translate("Reg", "Sign in", nullptr));
        label->setText(QCoreApplication::translate("Reg", "Accounting system", nullptr));
        label_2->setText(QCoreApplication::translate("Reg", "if you don't have an account, please register", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Reg", "Register", nullptr));
        label_3->setText(QCoreApplication::translate("Reg", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("Reg", "Password", nullptr));
        label_err->setText(QString());
        label_err_2->setText(QString());
        label_err_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Reg: public Ui_Reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_H
