#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewport.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Viewport *view = new Viewport();
    view->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
