#ifndef CAPTURADEVIDEO_H
#define CAPTURADEVIDEO_H

#include <QDialog>
#include "imagenes.h"

namespace Ui {
class capturadevideo;
}

class capturadevideo : public QDialog
{
    Q_OBJECT

public:
    explicit capturadevideo(string nombre, QWidget *parent = nullptr);
    ~capturadevideo();
    bool isOpened();

private slots:
    void on_horizontalSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_capturadevideo_accepted();

    void on_capturadevideo_destroyed();

private:
    Ui::capturadevideo *ui;
    VideoCapture cap;
};

#endif // CAPTURADEVIDEO_H
