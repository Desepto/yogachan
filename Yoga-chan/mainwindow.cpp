#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QString nom, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->nom = nom;
}

MainWindow::~MainWindow()
{
    delete ui;
}
