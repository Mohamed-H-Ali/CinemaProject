#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"
#include "QPixmap"
welcomewindow::welcomewindow(QString username, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::welcomewindow)
{
    ui->setupUi(this);
    QString str=QString::number(age);
    QString temporary=username+" "+str;
    ui->adminlabel->setText(temporary);
    QPixmap pix("S:\\semester II courses\\CS II lab\\Qt-assignment\\CinemaProject\\Cinemaproject\\cinema.jfif");
    int w= ui->piclabel->width();
    int l=ui->piclabel->height();
    ui->piclabel->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));
}
welcomewindow::~welcomewindow()
{
    delete ui;
}

void welcomewindow::on_logoutbutton_clicked()
{
    hide();
    Loginwindow *loginpage= new Loginwindow(this);
    loginpage->show();
}

