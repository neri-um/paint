/********************************************************************************
** Form generated from reading UI file 'brillocontraste.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRILLOCONTRASTE_H
#define UI_BRILLOCONTRASTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_brillocontrastegamma
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QLabel *label;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider_2;
    QLabel *label_2;
    QCheckBox *checkBox;
    QSlider *horizontalSlider_3;
    QLabel *label_3;
    QSpinBox *spinBox_3;

    void setupUi(QDialog *brillocontrastegamma)
    {
        if (brillocontrastegamma->objectName().isEmpty())
            brillocontrastegamma->setObjectName("brillocontrastegamma");
        brillocontrastegamma->setWindowModality(Qt::WindowModality::WindowModal);
        brillocontrastegamma->resize(380, 201);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(6);
        sizePolicy.setHeightForWidth(brillocontrastegamma->sizePolicy().hasHeightForWidth());
        brillocontrastegamma->setSizePolicy(sizePolicy);
        brillocontrastegamma->setMinimumSize(QSize(380, 201));
        brillocontrastegamma->setMaximumSize(QSize(380, 201));
        brillocontrastegamma->setSizeIncrement(QSize(0, 6));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/icono.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        brillocontrastegamma->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(brillocontrastegamma);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 170, 161, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalSlider = new QSlider(brillocontrastegamma);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 30, 271, 21));
        horizontalSlider->setMinimum(-256);
        horizontalSlider->setMaximum(256);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(32);
        label = new QLabel(brillocontrastegamma);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox = new QSpinBox(brillocontrastegamma);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(290, 10, 81, 22));
        spinBox->setMinimum(-256);
        spinBox->setMaximum(256);
        spinBox_2 = new QSpinBox(brillocontrastegamma);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(290, 60, 81, 22));
        spinBox_2->setMinimum(-100);
        spinBox_2->setMaximum(100);
        horizontalSlider_2 = new QSlider(brillocontrastegamma);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setGeometry(QRect(10, 80, 271, 21));
        horizontalSlider_2->setMinimum(-100);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider_2->setTickInterval(10);
        label_2 = new QLabel(brillocontrastegamma);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 271, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        checkBox = new QCheckBox(brillocontrastegamma);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(200, 180, 101, 17));
        checkBox->setChecked(true);
        horizontalSlider_3 = new QSlider(brillocontrastegamma);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setGeometry(QRect(10, 130, 271, 21));
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_3->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider_3->setTickInterval(10);
        label_3 = new QLabel(brillocontrastegamma);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 110, 271, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox_3 = new QSpinBox(brillocontrastegamma);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(290, 120, 81, 22));
        spinBox_3->setMinimum(-100);
        spinBox_3->setMaximum(100);

        retranslateUi(brillocontrastegamma);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, brillocontrastegamma, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, brillocontrastegamma, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(brillocontrastegamma);
    } // setupUi

    void retranslateUi(QDialog *brillocontrastegamma)
    {
        brillocontrastegamma->setWindowTitle(QCoreApplication::translate("brillocontrastegamma", "Brillo/contraste...", nullptr));
        label->setText(QCoreApplication::translate("brillocontrastegamma", "Brillo", nullptr));
        label_2->setText(QCoreApplication::translate("brillocontrastegamma", "Contraste", nullptr));
        checkBox->setText(QCoreApplication::translate("brillocontrastegamma", "Previsualizar", nullptr));
        label_3->setText(QCoreApplication::translate("brillocontrastegamma", "Contraste", nullptr));
    } // retranslateUi

};

namespace Ui {
    class brillocontrastegamma: public Ui_brillocontrastegamma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRILLOCONTRASTE_H
