#ifndef BRILLOCONTRASTE_H
#define BRILLOCONTRASTE_H

#include <QDialog>

namespace Ui {
    class brillocontrastegamma;
}

class brillocontraste : public QDialog {
    Q_OBJECT
public:
    brillocontraste(int numfoto, QWidget *parent = nullptr);
    ~brillocontraste();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::brillocontrastegamma *ui;
    int nfoto;
    double suma;
    double multiplica;
    double gama;
    void actualizar();

private slots:
    void on_spinBox_valueChanged(int );
    void on_spinBox_2_valueChanged(int );
    void on_horizontalSlider_valueChanged(int value);
    void on_horizontalSlider_2_valueChanged(int value);
    void on_checkBox_stateChanged(int arg1);
    void on_spinBox_3_valueChanged(int arg1);
    void on_horizontalSlider_3_valueChanged(int value);
    void on_brillocontrastegamma_accepted();
    void on_brillocontrastegamma_rejected();
};

#endif // BRILLOCONTRASTE_H
