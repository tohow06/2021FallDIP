#include "diphw.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    diphw w;
    w.show();
    return a.exec();
}
