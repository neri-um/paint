/********************************************************************************
** Form generated from reading UI file 'ajustelineal.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJUSTELINEAL_H
#define UI_AJUSTELINEAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AjusteLineal
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QCheckBox *checkBox_2;
    QDialogButtonBox *buttonBox_2;
    QLabel *label_4;

    void setupUi(QDialog *AjusteLineal)
    {
        if (AjusteLineal->objectName().isEmpty())
            AjusteLineal->setObjectName("AjusteLineal");
        AjusteLineal->setWindowModality(Qt::WindowModality::WindowModal);
        AjusteLineal->resize(392, 166);
        buttonBox = new QDialogButtonBox(AjusteLineal);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 120, 161, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalSlider = new QSlider(AjusteLineal);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 40, 271, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(5);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(32);
        label = new QLabel(AjusteLineal);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalSlider_2 = new QSlider(AjusteLineal);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setGeometry(QRect(10, 90, 271, 21));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setValue(5);
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider_2->setTickInterval(10);
        spinBox_2 = new QSpinBox(AjusteLineal);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(290, 70, 81, 22));
        spinBox_2->setMinimum(0);
        spinBox_2->setMaximum(100);
        spinBox_2->setValue(5);
        checkBox = new QCheckBox(AjusteLineal);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(190, 128, 101, 17));
        checkBox->setChecked(true);
        spinBox = new QSpinBox(AjusteLineal);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(290, 20, 81, 22));
        spinBox->setMinimum(0);
        spinBox->setMaximum(100);
        spinBox->setValue(5);
        label_2 = new QLabel(AjusteLineal);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 271, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(AjusteLineal);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 271, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox_3 = new QSpinBox(AjusteLineal);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(280, 0, 81, 22));
        spinBox_3->setMinimum(0);
        spinBox_3->setMaximum(100);
        spinBox_3->setValue(5);
        spinBox_4 = new QSpinBox(AjusteLineal);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setGeometry(QRect(280, 50, 81, 22));
        spinBox_4->setMinimum(0);
        spinBox_4->setMaximum(100);
        spinBox_4->setValue(5);
        horizontalSlider_3 = new QSlider(AjusteLineal);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setGeometry(QRect(0, 70, 271, 21));
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setValue(5);
        horizontalSlider_3->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_3->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider_3->setTickInterval(10);
        horizontalSlider_4 = new QSlider(AjusteLineal);
        horizontalSlider_4->setObjectName("horizontalSlider_4");
        horizontalSlider_4->setGeometry(QRect(0, 20, 271, 21));
        horizontalSlider_4->setMinimum(0);
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setPageStep(16);
        horizontalSlider_4->setValue(5);
        horizontalSlider_4->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_4->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider_4->setTickInterval(32);
        checkBox_2 = new QCheckBox(AjusteLineal);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(180, 108, 101, 17));
        checkBox_2->setChecked(true);
        buttonBox_2 = new QDialogButtonBox(AjusteLineal);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setGeometry(QRect(0, 100, 161, 32));
        buttonBox_2->setOrientation(Qt::Orientation::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_4 = new QLabel(AjusteLineal);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 50, 271, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(AjusteLineal);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AjusteLineal, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AjusteLineal, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AjusteLineal);
    } // setupUi

    void retranslateUi(QDialog *AjusteLineal)
    {
        AjusteLineal->setWindowTitle(QCoreApplication::translate("AjusteLineal", "AjusteLineal", nullptr));
        label->setText(QCoreApplication::translate("AjusteLineal", "Percentil Minimo", nullptr));
        checkBox->setText(QCoreApplication::translate("AjusteLineal", "Previsualizar", nullptr));
        label_2->setText(QCoreApplication::translate("AjusteLineal", "Percentil M\303\241ximo", nullptr));
        label_3->setText(QCoreApplication::translate("AjusteLineal", "Percentil Minimo", nullptr));
        checkBox_2->setText(QCoreApplication::translate("AjusteLineal", "Previsualizar", nullptr));
        label_4->setText(QCoreApplication::translate("AjusteLineal", "Percentil M\303\241ximo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjusteLineal: public Ui_AjusteLineal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJUSTELINEAL_H
