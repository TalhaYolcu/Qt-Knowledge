/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTabWidget *contactsListWidget;
    QWidget *homePageTab;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *urlLabel;
    QLabel *btIconLabel;
    QLabel *battaryLabel;
    QLabel *statusLabel;
    QListWidget *BleDevices;
    QPushButton *scanButton;
    QWidget *contactsTab;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QListWidget *contacts;
    QWidget *callHistoryTab;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QListWidget *callHistory;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(333, 720);
        MainWindow->setMinimumSize(QSize(333, 720));
        MainWindow->setMaximumSize(QSize(333, 720));
        MainWindow->setBaseSize(QSize(2532, 1170));
        MainWindow->setStyleSheet(QString::fromUtf8("font: 10pt \"Helvetica\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        contactsListWidget = new QTabWidget(centralwidget);
        contactsListWidget->setObjectName(QString::fromUtf8("contactsListWidget"));
        contactsListWidget->setLayoutDirection(Qt::LeftToRight);
        contactsListWidget->setStyleSheet(QString::fromUtf8("QTabWidget::tab-bar {alignment: center}"));
        contactsListWidget->setTabPosition(QTabWidget::South);
        homePageTab = new QWidget();
        homePageTab->setObjectName(QString::fromUtf8("homePageTab"));
        homePageTab->setContextMenuPolicy(Qt::NoContextMenu);
        homePageTab->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(homePageTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        urlLabel = new QLabel(homePageTab);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));
        urlLabel->setStyleSheet(QString::fromUtf8("background: red ; font : bold ;"));
        urlLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(urlLabel);

        btIconLabel = new QLabel(homePageTab);
        btIconLabel->setObjectName(QString::fromUtf8("btIconLabel"));
        btIconLabel->setStyleSheet(QString::fromUtf8("background: red ; font : bold ;"));
        btIconLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(btIconLabel);


        verticalLayout_3->addLayout(horizontalLayout_2);

        battaryLabel = new QLabel(homePageTab);
        battaryLabel->setObjectName(QString::fromUtf8("battaryLabel"));
        battaryLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(battaryLabel);

        statusLabel = new QLabel(homePageTab);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(statusLabel);

        BleDevices = new QListWidget(homePageTab);
        new QListWidgetItem(BleDevices);
        BleDevices->setObjectName(QString::fromUtf8("BleDevices"));

        verticalLayout_3->addWidget(BleDevices);

        scanButton = new QPushButton(homePageTab);
        scanButton->setObjectName(QString::fromUtf8("scanButton"));
        scanButton->setStyleSheet(QString::fromUtf8("background : red ; color : white"));

        verticalLayout_3->addWidget(scanButton);


        horizontalLayout->addLayout(verticalLayout_3);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        contactsListWidget->addTab(homePageTab, icon, QString());
        contactsTab = new QWidget();
        contactsTab->setObjectName(QString::fromUtf8("contactsTab"));
        gridLayout_4 = new QGridLayout(contactsTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        contacts = new QListWidget(contactsTab);
        new QListWidgetItem(contacts);
        contacts->setObjectName(QString::fromUtf8("contacts"));

        verticalLayout_4->addWidget(contacts);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/contact.png"), QSize(), QIcon::Normal, QIcon::Off);
        contactsListWidget->addTab(contactsTab, icon1, QString());
        callHistoryTab = new QWidget();
        callHistoryTab->setObjectName(QString::fromUtf8("callHistoryTab"));
        gridLayout_5 = new QGridLayout(callHistoryTab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        callHistory = new QListWidget(callHistoryTab);
        new QListWidgetItem(callHistory);
        callHistory->setObjectName(QString::fromUtf8("callHistory"));

        verticalLayout_5->addWidget(callHistory);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/telephone.png"), QSize(), QIcon::Normal, QIcon::Off);
        contactsListWidget->addTab(callHistoryTab, icon2, QString());

        gridLayout_3->addWidget(contactsListWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 333, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        contactsListWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EL\303\207\304\260", nullptr));
        urlLabel->setText(QApplication::translate("MainWindow", "tel@ip:port", nullptr));
        btIconLabel->setText(QString());
        battaryLabel->setText(QApplication::translate("MainWindow", "\305\236arj y\303\274zdesi : ", nullptr));
        statusLabel->setText(QApplication::translate("MainWindow", "Cihaza ba\304\237lanmak i\303\247in bekleniyor...", nullptr));

        const bool __sortingEnabled = BleDevices->isSortingEnabled();
        BleDevices->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = BleDevices->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "New Item", nullptr));
        BleDevices->setSortingEnabled(__sortingEnabled);

        scanButton->setText(QApplication::translate("MainWindow", "Taramay\304\261 Ba\305\237lat", nullptr));
        contactsListWidget->setTabText(contactsListWidget->indexOf(homePageTab), QApplication::translate("MainWindow", "Ana Sayfa", nullptr));

        const bool __sortingEnabled1 = contacts->isSortingEnabled();
        contacts->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem1 = contacts->item(0);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "New Item", nullptr));
        contacts->setSortingEnabled(__sortingEnabled1);

        contactsListWidget->setTabText(contactsListWidget->indexOf(contactsTab), QApplication::translate("MainWindow", "Ki\305\237iler", nullptr));

        const bool __sortingEnabled2 = callHistory->isSortingEnabled();
        callHistory->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem2 = callHistory->item(0);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "New Item", nullptr));
        callHistory->setSortingEnabled(__sortingEnabled2);

        contactsListWidget->setTabText(contactsListWidget->indexOf(callHistoryTab), QApplication::translate("MainWindow", "Arama", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
