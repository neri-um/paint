/********************************************************************************
** Form generated from reading UI file 'capturadevideo.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURADEVIDEO_H
#define UI_CAPTURADEVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_capturadevideo
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *capturadevideo)
    {
        if (capturadevideo->objectName().isEmpty())
            capturadevideo->setObjectName("capturadevideo");
        capturadevideo->setWindowModality(Qt::WindowModality::WindowModal);
        capturadevideo->resize(408, 119);
        buttonBox = new QDialogButtonBox(capturadevideo);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-60, 70, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalSlider = new QSlider(capturadevideo);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(20, 30, 271, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(256);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(32);
        spinBox = new QSpinBox(capturadevideo);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(300, 10, 81, 22));
        spinBox->setMinimum(0);
        spinBox->setMaximum(256);
        label = new QLabel(capturadevideo);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(capturadevideo);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, capturadevideo, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, capturadevideo, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(capturadevideo);
    } // setupUi

    void retranslateUi(QDialog *capturadevideo)
    {
        capturadevideo->setWindowTitle(QCoreApplication::translate("capturadevideo", "Capturadevideo", nullptr));
        label->setText(QCoreApplication::translate("capturadevideo", "Frames del v\303\255deo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class capturadevideo: public Ui_capturadevideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURADEVIDEO_H
