/********************************************************************************
** Form generated from reading UI file 'starwars.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARWARS_H
#define UI_STARWARS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_StarWars
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *StarWars)
    {
        if (StarWars->objectName().isEmpty())
            StarWars->setObjectName("StarWars");
        StarWars->setWindowModality(Qt::WindowModality::WindowModal);
        StarWars->resize(400, 291);
        buttonBox = new QDialogButtonBox(StarWars);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(40, 240, 191, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        spinBox = new QSpinBox(StarWars);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(30, 40, 161, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10000);
        spinBox->setValue(1000);
        doubleSpinBox = new QDoubleSpinBox(StarWars);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(270, 80, 121, 22));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMaximum(200.000000000000000);
        doubleSpinBox->setValue(30.000000000000000);
        comboBox = new QComboBox(StarWars);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(270, 30, 121, 21));
        comboBox->setEditable(true);
        label_4 = new QLabel(StarWars);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 10, 161, 20));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        plainTextEdit = new QPlainTextEdit(StarWars);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(20, 90, 231, 131));
        label_5 = new QLabel(StarWars);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 70, 231, 20));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(StarWars);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 10, 121, 20));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(StarWars);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 60, 121, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(StarWars);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 110, 121, 20));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        doubleSpinBox_2 = new QDoubleSpinBox(StarWars);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(270, 130, 121, 22));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMaximum(200.000000000000000);
        doubleSpinBox_2->setValue(2.000000000000000);
        label_9 = new QLabel(StarWars);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 160, 121, 20));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(StarWars);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 190, 41, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(StarWars);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 240, 93, 29));

        retranslateUi(StarWars);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StarWars, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StarWars, qOverload<>(&QDialog::reject));

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StarWars);
    } // setupUi

    void retranslateUi(QDialog *StarWars)
    {
        StarWars->setWindowTitle(QCoreApplication::translate("StarWars", "Efecto de Star Wars", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("StarWars", "DEFAULT", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("StarWars", "MPEG", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("StarWars", "MJPG", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("StarWars", "PIM1", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("StarWars", "DIVX", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("StarWars", "XVID", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("StarWars", "DEFAULT", nullptr));
        label_4->setText(QCoreApplication::translate("StarWars", "N\303\272mero de Frames", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("StarWars", "AAAAAAAOOOOOOO\n"
"UUUUUUUUU\n"
"EEEEEEEEE\n"
"SSSSSSSS", nullptr));
        label_5->setText(QCoreApplication::translate("StarWars", "Texto", nullptr));
        label_6->setText(QCoreApplication::translate("StarWars", "Codec de v\303\255deo", nullptr));
        label_7->setText(QCoreApplication::translate("StarWars", "Frames por seg.", nullptr));
        label_8->setText(QCoreApplication::translate("StarWars", "Tama\303\261o del Texto", nullptr));
        label_9->setText(QCoreApplication::translate("StarWars", "Color del texto", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("StarWars", "Previsualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StarWars: public Ui_StarWars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARWARS_H
