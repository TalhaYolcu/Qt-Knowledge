#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

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

}

MainWindow::~MainWindow()
{
    delete ui;
}
