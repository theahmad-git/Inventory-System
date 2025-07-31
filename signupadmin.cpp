#include "signupadmin.h"
#include "ui_signupadmin.h"

signupadmin::signupadmin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signupadmin)
{
    ui->setupUi(this);
}

signupadmin::~signupadmin()
{
    delete ui;
}
