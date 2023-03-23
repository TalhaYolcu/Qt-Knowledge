#include "stackedwindow.h"
#include "ui_stackedwindow.h"

StackedWindow::StackedWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StackedWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

StackedWindow::~StackedWindow()
{
    delete ui;
}

void StackedWindow::on_nextp1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void StackedWindow::on_backp2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void StackedWindow::on_backp3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void StackedWindow::on_nextp2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

