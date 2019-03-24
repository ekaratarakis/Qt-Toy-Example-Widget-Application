#include "pushthisbutton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PushThisButton w;
    w.show();

    return a.exec();
}
