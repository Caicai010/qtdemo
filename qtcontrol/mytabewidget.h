#ifndef MYTABEWIDGET_H
#define MYTABEWIDGET_H

#include <QWidget>

namespace Ui {
class myTabeWidget;
}

class myTabeWidget : public QWidget
{

    Q_OBJECT

public:
    explicit myTabeWidget(QWidget *parent = nullptr);
    ~myTabeWidget();

private:
    Ui::myTabeWidget *ui;
};

#endif // MYTABEWIDGET_H
