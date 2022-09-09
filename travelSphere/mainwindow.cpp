#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
             "background-image:url(/Users/shashinoorghimire/Documents/Qt/projects/travelSphere/images/background.png); background-position: center;" );
}

MainWindow::~MainWindow()
{
    delete ui;
}

