/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelusername;
    QLineEdit *lineEditusername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QCheckBox *checkBox;
    QPushButton *loginButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *labelImage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(788, 487);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, 80, 431, 251));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelusername = new QLabel(groupBox);
        labelusername->setObjectName(QString::fromUtf8("labelusername"));

        horizontalLayout->addWidget(labelusername);

        lineEditusername = new QLineEdit(groupBox);
        lineEditusername->setObjectName(QString::fromUtf8("lineEditusername"));

        horizontalLayout->addWidget(lineEditusername);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_password = new QLabel(groupBox);
        label_password->setObjectName(QString::fromUtf8("label_password"));

        horizontalLayout_2->addWidget(label_password);

        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout_2->addLayout(horizontalLayout_2);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setStyleSheet(QString::fromUtf8("font: 25 11pt \"Umpush\";"));

        verticalLayout_2->addWidget(loginButton);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        labelImage = new QLabel(centralwidget);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setGeometry(QRect(40, 100, 221, 221));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 788, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "SignIn", nullptr));
        labelusername->setText(QApplication::translate("MainWindow", "<font color=red>Username<font>", nullptr));
        label_password->setText(QApplication::translate("MainWindow", "Password", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Do you like this app", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Open Menu Window", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Open Stacked Widget", nullptr));
        labelImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
