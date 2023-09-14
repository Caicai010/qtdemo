#ifndef MYSTACKWIDGET_H
#define MYSTACKWIDGET_H

#include <QWidget>


namespace Ui {
class myStackWidget;
}

class myStackWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myStackWidget(QWidget *parent = nullptr);
    ~myStackWidget();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::myStackWidget *ui;
};

#endif // MYSTACKWIDGET_H
