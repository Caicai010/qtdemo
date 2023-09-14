#include "mystackwidget.h"
#include "ui_mystackwidget.h"
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QDebug>

myStackWidget::myStackWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myStackWidget)
{
    ui->setupUi(this);
    int cout = ui->stackedWidget->count();
    for(int it; it<cout; it++)
    {
        ui->stackedWidget->setCurrentIndex(it);
    }

}

myStackWidget::~myStackWidget()
{
    delete ui;
}

void myStackWidget::on_pushButton_clicked()
{
    int indexCur = ui->stackedWidget->currentIndex();
    int indexNext = (indexCur + 1) % ui->stackedWidget->count();

    int icout = ui->stackedWidget->count();

    QWidget* curW = ui->stackedWidget->widget(indexCur);
    curW->setAttribute(Qt::WA_TranslucentBackground);
    qDebug() << curW->width()<<" gao" << curW->height();

    QWidget* nextW = ui->stackedWidget->widget(indexNext);
    nextW->setAttribute(Qt::WA_TranslucentBackground);
    qDebug() << nextW->width()<<" gao" << nextW->height();

    // 创建切换动画
    QParallelAnimationGroup* animationGroup = new QParallelAnimationGroup(ui->stackedWidget);
    QPropertyAnimation* animation1 = new QPropertyAnimation(curW, "pos");
    animation1->setDuration(900); // 设置动画持续时间，单位为毫秒
    animation1->setEasingCurve(QEasingCurve::InOutQuart);
    QPropertyAnimation* animation2 = new QPropertyAnimation(nextW, "pos");
    animation2->setDuration(900); // 设置动画持续时间，单位为毫秒
    animation2->setEasingCurve(QEasingCurve::InOutQuart);
    animationGroup->addAnimation(animation1);
    animationGroup->addAnimation(animation2);

    // 设置动画的起始值和结束值
    animation1->setStartValue(QPoint(0, 0));
    animation1->setEndValue(QPoint(-ui->stackedWidget->width(), 0));
    animation2->setStartValue(QPoint(ui->stackedWidget->width(), 0));
    animation2->setEndValue(QPoint(0, 0));

    // 开始动画
    animationGroup->start();

    // 切换到下一个页面
    nextW->hide();

    ui->stackedWidget->setCurrentIndex(indexNext);
    curW->show();
    //curW->show();


}


void myStackWidget::on_pushButton_2_clicked()
{
    static int id = 0;
    ui->stackedWidget->setCurrentIndex(id++%3);
}

