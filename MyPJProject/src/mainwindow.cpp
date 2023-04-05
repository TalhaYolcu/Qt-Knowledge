#include "include/mainwindow.h"
#include "ui_mainwindow.h"
#include "include/pjsip/pjsua2.hpp"

using namespace pj;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Endpoint* ep=new Endpoint();
    ep->libCreate();
}

MainWindow::~MainWindow()
{
    delete ui;
}

