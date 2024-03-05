#include "welcomewindow.h"
#include "ui_welcomewindow.h"

welcomewindow::welcomewindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::welcomewindow)
{
    ui->setupUi(this);
}

welcomewindow::~welcomewindow()
{
    delete ui;
}
