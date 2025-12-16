/********************************************************************************
** Form generated from reading UI file 'bajorelieve.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAJORELIEVE_H
#define UI_BAJORELIEVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Bajorelieve
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QDial *dial;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_4;
    QSpinBox *spinBox;

    void setupUi(QDialog *Bajorelieve)
    {
        if (Bajorelieve->objectName().isEmpty())
            Bajorelieve->setObjectName("Bajorelieve");
        Bajorelieve->setWindowModality(Qt::WindowModality::WindowModal);
        Bajorelieve->resize(512, 338);
        buttonBox = new QDialogButtonBox(Bajorelieve);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-10, 290, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(Bajorelieve);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalSlider = new QSlider(Bajorelieve);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(20, 40, 271, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(10);
        label_2 = new QLabel(Bajorelieve);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 271, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dial = new QDial(Bajorelieve);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(70, 100, 151, 161));
        dial->setMaximum(360);
        dial->setWrapping(true);
        dial->setNotchTarget(3.000000000000000);
        dial->setNotchesVisible(true);
        label_3 = new QLabel(Bajorelieve);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 20, 191, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        radioButton = new QRadioButton(Bajorelieve);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(310, 40, 111, 25));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(Bajorelieve);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(310, 70, 111, 25));
        radioButton_3 = new QRadioButton(Bajorelieve);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(310, 100, 111, 25));
        radioButton_4 = new QRadioButton(Bajorelieve);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(310, 130, 111, 25));
        label_4 = new QLabel(Bajorelieve);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(300, 170, 191, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox = new QSpinBox(Bajorelieve);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(363, 200, 71, 29));
        spinBox->setMinimum(1);
        spinBox->setMaximum(31);
        spinBox->setSingleStep(2);
        spinBox->setValue(3);

        retranslateUi(Bajorelieve);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Bajorelieve, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Bajorelieve, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Bajorelieve);
    } // setupUi

    void retranslateUi(QDialog *Bajorelieve)
    {
        Bajorelieve->setWindowTitle(QCoreApplication::translate("Bajorelieve", "Efecto de bajo relieve", nullptr));
        label->setText(QCoreApplication::translate("Bajorelieve", "Grado del efecto", nullptr));
        label_2->setText(QCoreApplication::translate("Bajorelieve", "Angulo del efecto", nullptr));
        label_3->setText(QCoreApplication::translate("Bajorelieve", "Textura", nullptr));
        radioButton->setText(QCoreApplication::translate("Bajorelieve", "Arena", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Bajorelieve", "Cielo", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Bajorelieve", "Gris", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Bajorelieve", "Madera", nullptr));
        label_4->setText(QCoreApplication::translate("Bajorelieve", "Tama\303\261o de Sobel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bajorelieve: public Ui_Bajorelieve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAJORELIEVE_H
