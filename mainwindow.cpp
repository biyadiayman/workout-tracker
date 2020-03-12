#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "testclass.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    testClass();
}

MainWindow::~MainWindow()
{
    delete ui;
}
