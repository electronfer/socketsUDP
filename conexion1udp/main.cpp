#include "conexion_1.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Conexion_1 w;
    w.show();
    
    return a.exec();
}
