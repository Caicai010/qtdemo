#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    static bool bshow = false;
    if(!bshow)
    {

        ptabWidget.show();
        bshow = true;
    }
    else
    {
        ptabWidget.hide();
        bshow = false;
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    static bool bshow = false;
    if(!bshow)
    {

        pStackWidget.show();
        bshow = true;
    }
    else
    {
        pStackWidget.hide();
        bshow = false;
    }
}

