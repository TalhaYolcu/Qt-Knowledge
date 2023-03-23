#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QPixmap>
#include "stackedwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/bursiyer/QtProjects/SimpleLoginApp/Pictures/login.png");
    int w = ui->labelImage->width();
    int h = ui->labelImage->height();
    ui->labelImage->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    QString username = ui->lineEditusername->text();
    QString password = ui->lineEdit_password->text();

    if(ui->checkBox->isChecked()) {
        QMessageBox::information(this,"Like","You like app");
    }
    else {
        QMessageBox::information(this,"Dislike","You did not like app");
    }


    if(username == "test" && password=="123456") {
        QMessageBox::information(this,"Login","Username and password is correct");

        hide();
        secdialog=new SecDialog(this);
        secdialog->show();
    }
    else {
        QMessageBox::warning(this,"Login","Username and password is not correct");
    }
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1) {
        QMessageBox::information(this,"Like","You like app");
    }
    else {
        QMessageBox::information(this,"Dislike","You did not like app");
    }

}


void MainWindow::on_pushButton_clicked()
{
    hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    StackedWindow* stackedw=new StackedWindow(this);
    stackedw->show();


}

