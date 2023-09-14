#include "mytableview.h"
#include "ui_mytableview.h"

myTableview::myTableview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myTableview)
{
    ui->setupUi(this);
}

myTableview::~myTableview()
{
    delete ui;
}
