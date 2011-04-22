#include "idruiwidget.h"
#include "ui_idr.h"

idruiwidget::idruiwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::idruiwidget)
{
    ui->setupUi(this);
}

idruiwidget::~idruiwidget()
{
    delete ui;
}
