#include "certificados.h"
#include "ui_certificados.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

Certificados::Certificados(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::Certificados)
{
  ui->setupUi(this);
}

Certificados::~Certificados()
{
  delete ui;
}

void Certificados::on_Generar_clicked()
{
  QString nombre, rut, region, ciudad, sexo, fecha, nombrearch, archivo;

  nombre = ui->Nombre->text();
  rut = ui->Rut->text();
  region = ui->Regiones->currentText();
  ciudad = ui->Ciudad->text();
  fecha = ui->Fecha->text();
  nombrearch = ui->NombreArchivo->text();

  nombrearch += ".txt";
  archivo = "C:/Users/Rodrigo/Desktop/2do Semestre 2016 UDA/LENGUAJE DE PROGRAMACION 2 - 2016/ProgramasQT/Certificados/Certificados/" + nombrearch;

  if (ui->Sexo1->isChecked()){
      sexo = "Masculino";
  }else if(ui->Sexo2->isChecked()){
      sexo = "Femenino";
  }

  QFile file(archivo);

  if (!file.open(QFile::WriteOnly | QFile::Text)){
      QMessageBox::warning(this,"Error","El archivo no se pudo abrir");
  }

  QTextStream out(&file);

  out << "Nombre: " << nombre
      << "\nRut: " << rut
      << "\nFecha de nacimiento: " << fecha
      << "\nLugar de nacimiento: " << ciudad << " - " << region << " - Chile";

  file.flush();
  file.close();

  QMessageBox::about(this,nombrearch,"Certificado creado con exito");
}
