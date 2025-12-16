#include "bajorelieve.h"
#include "ui_bajorelieve.h"
#include "imagenes.h"

Bajorelieve::Bajorelieve(int numfoto, int numres, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Bajorelieve)
{
    ui->setupUi(this);
    nfoto=numfoto;
    nres=numres;
    ntextura=0;
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);
}

Bajorelieve::~Bajorelieve()
{
    activar_callback_fotos(true);
    delete ui;
}

void Bajorelieve::on_horizontalSlider_valueChanged(int value)
{
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);

}


void Bajorelieve::on_dial_valueChanged(int value)
{
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);
}


void Bajorelieve::on_spinBox_valueChanged(int arg1)
{
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);

}

void Bajorelieve::on_radioButton_clicked()
{
    ntextura=0;
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);

}


void Bajorelieve::on_radioButton_2_clicked()
{
    ntextura=1;
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);

}


void Bajorelieve::on_radioButton_3_clicked()
{
    ntextura=2;
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);

}


void Bajorelieve::on_radioButton_4_clicked()
{
    ntextura=3;
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura);

}


void Bajorelieve::on_Bajorelieve_accepted()
{
    ver_bajorrelieve(nfoto, nres, ui->dial->value(),ui->horizontalSlider->value()/100.0, ui->spinBox->value(), ntextura, true);

    destroyWindow("Efecto de bajo relieve");
}


void Bajorelieve::on_Bajorelieve_rejected()
{
    destroyWindow("Efecto de bajo relieve");
}

