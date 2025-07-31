#include "baradmin.h"
#include "ui_baradmin.h"

baradmin::baradmin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::baradmin)
{
    ui->setupUi(this);
}

baradmin::~baradmin()
{
    delete ui;
}
