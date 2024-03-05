#include "registerwindow.h"
#include "ui_registerwindow.h"

Registerwindow::Registerwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Registerwindow)
{
    ui->setupUi(this);
}

Registerwindow::~Registerwindow()
{
    delete ui;
}
