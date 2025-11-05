#ifndef BAJORELIEVE_H
#define BAJORELIEVE_H

#include <QDialog>

namespace Ui {
class Bajorelieve;
}

class Bajorelieve : public QDialog
{
    Q_OBJECT

public:
    explicit Bajorelieve(int numfoto, int numres, QWidget *parent = nullptr);
    ~Bajorelieve();

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_Bajorelieve_accepted();

    void on_Bajorelieve_rejected();

private:
    Ui::Bajorelieve *ui;
    int nfoto;
    int nres;
    int ntextura;
};

#endif // BAJORELIEVE_H
