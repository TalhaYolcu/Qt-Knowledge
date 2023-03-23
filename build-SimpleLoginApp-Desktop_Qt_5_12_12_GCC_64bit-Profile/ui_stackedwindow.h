/********************************************************************************
** Form generated from reading UI file 'stackedwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKEDWINDOW_H
#define UI_STACKEDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StackedWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *nextp1;
    QWidget *page_2;
    QPushButton *nextp2;
    QPushButton *backp2;
    QRadioButton *radioButton;
    QWidget *page_3;
    QPushButton *backp3;
    QDial *dial;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StackedWindow)
    {
        if (StackedWindow->objectName().isEmpty())
            StackedWindow->setObjectName(QString::fromUtf8("StackedWindow"));
        StackedWindow->resize(800, 600);
        centralwidget = new QWidget(StackedWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(19, 9, 761, 391));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        nextp1 = new QPushButton(page);
        nextp1->setObjectName(QString::fromUtf8("nextp1"));
        nextp1->setGeometry(QRect(650, 350, 89, 25));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        nextp2 = new QPushButton(page_2);
        nextp2->setObjectName(QString::fromUtf8("nextp2"));
        nextp2->setGeometry(QRect(660, 350, 89, 25));
        backp2 = new QPushButton(page_2);
        backp2->setObjectName(QString::fromUtf8("backp2"));
        backp2->setGeometry(QRect(10, 350, 89, 25));
        radioButton = new QRadioButton(page_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(280, 170, 112, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        backp3 = new QPushButton(page_3);
        backp3->setObjectName(QString::fromUtf8("backp3"));
        backp3->setGeometry(QRect(10, 360, 89, 25));
        dial = new QDial(page_3);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(350, 160, 50, 64));
        stackedWidget->addWidget(page_3);
        StackedWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StackedWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        StackedWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StackedWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StackedWindow->setStatusBar(statusbar);

        retranslateUi(StackedWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(StackedWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StackedWindow)
    {
        StackedWindow->setWindowTitle(QApplication::translate("StackedWindow", "MainWindow", nullptr));
        nextp1->setText(QApplication::translate("StackedWindow", "Next", nullptr));
        nextp2->setText(QApplication::translate("StackedWindow", "Next", nullptr));
        backp2->setText(QApplication::translate("StackedWindow", "Back", nullptr));
        radioButton->setText(QApplication::translate("StackedWindow", "RadioButton", nullptr));
        backp3->setText(QApplication::translate("StackedWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StackedWindow: public Ui_StackedWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKEDWINDOW_H
