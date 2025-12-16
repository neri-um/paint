#include "capturadevideo.h"
#include "ui_capturadevideo.h"

capturadevideo::capturadevideo(string nombre, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::capturadevideo)
{
    ui->setupUi(this);
    if (cap.open(nombre)){
        int nframes = cap.get(CAP_PROP_FRAME_COUNT);
        ui->horizontalSlider->setMaximum(nframes-1);
        ui->spinBox->setMaximum(nframes-1);
        Mat frame;
        if (cap.read(frame))
            imshow("Frame del video", frame);
    }
}

bool capturadevideo::isOpened()
{
    return cap.isOpened();
}

capturadevideo::~capturadevideo()
{
    delete ui;
}

void capturadevideo::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
    cap.set(CAP_PROP_POS_FRAMES, value);
    Mat frame;
    if (cap.read(frame))
        imshow("Frame del video", frame);
}


void capturadevideo::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}


void capturadevideo::on_capturadevideo_accepted()
{
    cap.set(CAP_PROP_POS_FRAMES, ui->spinBox->value());
    Mat frame;
    if (cap.read(frame)){
        crear_nueva(primera_libre(),frame);
    }
    destroyWindow("Frame del video");
}


void capturadevideo::on_capturadevideo_rejected()
{
    destroyWindow("Frame del video");
}

