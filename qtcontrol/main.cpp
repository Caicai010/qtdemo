#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile styleFile(":/qss/org.qss"); // 替换为你的 QSS 文件路径

    if (styleFile.open(QFile::ReadOnly))
    {
        QString styleSheet = QLatin1String(styleFile.readAll());
        a.setStyleSheet(styleSheet);
    }

    MainWindow w;
    w.show();
    return a.exec();
}
