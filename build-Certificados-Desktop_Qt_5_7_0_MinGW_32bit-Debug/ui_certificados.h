/********************************************************************************
** Form generated from reading UI file 'certificados.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICADOS_H
#define UI_CERTIFICADOS_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Certificados
{
public:
    QWidget *centralWidget;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Nombre;
    QLabel *label_2;
    QLineEdit *Rut;
    QLabel *label_3;
    QRadioButton *Sexo1;
    QRadioButton *Sexo2;
    QLabel *label_5;
    QComboBox *Regiones;
    QLabel *label_6;
    QLineEdit *Ciudad;
    QLabel *label_4;
    QDateEdit *Fecha;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *NombreArchivo;
    QPushButton *Generar;
    QPushButton *Generar_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Certificados)
    {
        if (Certificados->objectName().isEmpty())
            Certificados->setObjectName(QStringLiteral("Certificados"));
        Certificados->resize(577, 496);
        centralWidget = new QWidget(Certificados);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 0, 71, 71));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/icono.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 20, 431, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);
        label_9->setScaledContents(false);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 90, 461, 254));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Nombre = new QLineEdit(widget);
        Nombre->setObjectName(QStringLiteral("Nombre"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        Nombre->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, Nombre);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        Rut = new QLineEdit(widget);
        Rut->setObjectName(QStringLiteral("Rut"));
        Rut->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, Rut);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        Sexo1 = new QRadioButton(widget);
        Sexo1->setObjectName(QStringLiteral("Sexo1"));
        Sexo1->setFont(font1);

        formLayout->setWidget(4, QFormLayout::FieldRole, Sexo1);

        Sexo2 = new QRadioButton(widget);
        Sexo2->setObjectName(QStringLiteral("Sexo2"));
        Sexo2->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, Sexo2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        Regiones = new QComboBox(widget);
        Regiones->setObjectName(QStringLiteral("Regiones"));
        Regiones->setFont(font1);

        formLayout->setWidget(6, QFormLayout::FieldRole, Regiones);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        Ciudad = new QLineEdit(widget);
        Ciudad->setObjectName(QStringLiteral("Ciudad"));
        Ciudad->setFont(font1);

        formLayout->setWidget(8, QFormLayout::FieldRole, Ciudad);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_4);

        Fecha = new QDateEdit(widget);
        Fecha->setObjectName(QStringLiteral("Fecha"));
        Fecha->setFont(font1);
        Fecha->setDateTime(QDateTime(QDate(2016, 1, 1), QTime(0, 0, 0)));
        Fecha->setMaximumDate(QDate(2016, 12, 31));
        Fecha->setMinimumDate(QDate(1900, 1, 1));
        Fecha->setCalendarPopup(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, Fecha);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(100, 360, 379, 66));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setScaledContents(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        NombreArchivo = new QLineEdit(widget1);
        NombreArchivo->setObjectName(QStringLiteral("NombreArchivo"));
        NombreArchivo->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, NombreArchivo);

        Generar = new QPushButton(widget1);
        Generar->setObjectName(QStringLiteral("Generar"));
        Generar->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, Generar);

        Generar_2 = new QPushButton(widget1);
        Generar_2->setObjectName(QStringLiteral("Generar_2"));
        Generar_2->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, Generar_2);

        Certificados->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Certificados);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 577, 21));
        Certificados->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Certificados);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Certificados->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Certificados);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Certificados->setStatusBar(statusBar);

        retranslateUi(Certificados);
        QObject::connect(Generar_2, SIGNAL(clicked()), Certificados, SLOT(close()));

        QMetaObject::connectSlotsByName(Certificados);
    } // setupUi

    void retranslateUi(QMainWindow *Certificados)
    {
        Certificados->setWindowTitle(QApplication::translate("Certificados", "Certificados de nacimiento", 0));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("Certificados", "SISTEMA DE CERTIFICADOS DE NACIMIENTO", 0));
        label->setText(QApplication::translate("Certificados", "Nombre:", 0));
        label_2->setText(QApplication::translate("Certificados", "RUT: ", 0));
        label_3->setText(QApplication::translate("Certificados", "Sexo: ", 0));
        Sexo1->setText(QApplication::translate("Certificados", "Masculino", 0));
        Sexo2->setText(QApplication::translate("Certificados", "Femenino", 0));
        label_5->setText(QApplication::translate("Certificados", "Regi\303\263n: ", 0));
        Regiones->clear();
        Regiones->insertItems(0, QStringList()
         << QApplication::translate("Certificados", "Regi\303\263n Metropolitana", 0)
         << QApplication::translate("Certificados", "I regi\303\263n", 0)
         << QApplication::translate("Certificados", "II regi\303\263n", 0)
         << QApplication::translate("Certificados", "III regi\303\263n", 0)
         << QApplication::translate("Certificados", "IV regi\303\263n", 0)
         << QApplication::translate("Certificados", "V regi\303\263n", 0)
         << QApplication::translate("Certificados", "VI regi\303\263n", 0)
         << QApplication::translate("Certificados", "VII regi\303\263n", 0)
         << QApplication::translate("Certificados", "VIII regi\303\263n", 0)
         << QApplication::translate("Certificados", "IX regi\303\263n", 0)
         << QApplication::translate("Certificados", "X regi\303\263n", 0)
         << QApplication::translate("Certificados", "XI regi\303\263n", 0)
         << QApplication::translate("Certificados", "XII regi\303\263n", 0)
         << QApplication::translate("Certificados", "XIV regi\303\263n", 0)
         << QApplication::translate("Certificados", "XV regi\303\263n", 0)
        );
        label_6->setText(QApplication::translate("Certificados", "Ciudad:", 0));
        label_4->setText(QApplication::translate("Certificados", "Fecha de nacimiento:", 0));
        label_7->setText(QApplication::translate("Certificados", "Nombre archivo:", 0));
        Generar->setText(QApplication::translate("Certificados", "Generar certificado", 0));
        Generar_2->setText(QApplication::translate("Certificados", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Certificados: public Ui_Certificados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICADOS_H
