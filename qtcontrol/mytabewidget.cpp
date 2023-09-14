#include "mytabewidget.h"
#include "ui_mytabewidget.h"

myTabeWidget::myTabeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myTabeWidget)
{
    ui->setupUi(this);
    ui->tabWidget->setMovable(true);
    //ui->tabWidget->setTabEffect(QTabWidget::TabEffect::SlideEffect);
}

myTabeWidget::~myTabeWidget()
{
    delete ui;
}
