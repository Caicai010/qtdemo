#ifndef MYTABLEVIEW_H
#define MYTABLEVIEW_H

#include <QWidget>

namespace Ui {
class myTableview;
}

class myTableview : public QWidget
{
    Q_OBJECT

public:
    explicit myTableview(QWidget *parent = nullptr);
    ~myTableview();

private:
    Ui::myTableview *ui;
};

#endif // MYTABLEVIEW_H
