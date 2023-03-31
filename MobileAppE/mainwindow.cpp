#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QPainter>
#include <QRect>
#include<QStylePainter>
#include <QDebug>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Icons/bluetooth_blue.png");
    ui->btIconLabel->setPixmap(pix.scaled(30,30,Qt::KeepAspectRatio));
    ui->tabWidget->tabBar()->setDocumentMode(true);
    ui->tabWidget->tabBar()->setExpanding(true);

    QPixmap pix2(":Icons/full-battery.png");
    ui->batteryIconLabel->setPixmap(pix2.scaled(30,30,Qt::KeepAspectRatio));


     ui->tabWidget->setStyleSheet(""
                                  "QTabBar::tab{"
                                  "padding-left:40px;height:30px;border: 3px solid ;"
                                  "border-color:red;border-bottom-style: none;border-top-left-radius:4px;border-top-right-radius:4px;"
                                  "border-bottom-right-radius: 0px;border-bottom-left-radius:  0px;"
                                  "}"
                                  "QTabBar::tab:!selected"
                                  "{border: 1px solid ;border-color:red;border-bottom-style: none;border-top-left-radius:4px;border-top-right-radius:4px;"
                                  "border-bottom-right-radius: 0px;border-bottom-left-radius:  0px;"
                                  "};");

     qDebug()<<ui->tabWidget->styleSheet();
}

MainWindow::~MainWindow()
{
    delete ui;
}

