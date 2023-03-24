#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Icons/bluetooth_blue.png");
    ui->btIconLabel->setPixmap(pix.scaled(50,50,Qt::KeepAspectRatio));

    //ui->btIconLabel->setFixedHeight(ui->urlLabel->height());

}

MainWindow::~MainWindow()
{
    delete ui;
}

