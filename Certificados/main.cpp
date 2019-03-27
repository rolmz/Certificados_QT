#include "certificados.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Certificados w;
  w.show();

  return a.exec();
}
