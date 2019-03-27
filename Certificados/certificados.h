#ifndef CERTIFICADOS_H
#define CERTIFICADOS_H

#include <QMainWindow>

namespace Ui {
  class Certificados;
}

class Certificados : public QMainWindow
{
  Q_OBJECT

public:
  explicit Certificados(QWidget *parent = 0);
  ~Certificados();

private slots:
  void on_Generar_clicked();

private:
  Ui::Certificados *ui;
};

#endif // CERTIFICADOS_H
