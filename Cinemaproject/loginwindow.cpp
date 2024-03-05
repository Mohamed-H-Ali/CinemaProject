#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "WelcomeWindow.h"
#include "Users.h"
#include "Registerwindow.h"
Loginwindow::Loginwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Loginwindow)
{
    ui->setupUi(this);
    ui->ErrorLabel->setVisible(false);
}

Loginwindow::~Loginwindow()
{
    delete ui;
}

void Loginwindow::on_pushButtonLogin_clicked()
{
    bool existed=false;
    QString username=ui->lineEditUsername->text();
    QString password=ui->lineEditPassword->text();
    for(int i=0; i<100; i++){
        if(username == usernames[i] || password == passwords[i]){
            existed = true;
        }
    }
    if(!existed){
        ui->ErrorLabel->setVisible(true);
    }
    else
    {
        hide();
        welcomewindow *welcome = new welcomewindow(this);
        welcome->show();
    }
}


void Loginwindow::on_pushButtonRegiester_clicked()
{
    bool existed=false;
    QString username=ui->lineEditUsername->text();
    QString password=ui->lineEditPassword->text();
    for(int i=0; i<100; i++){
        if(username == usernames[i] || password == passwords[i]){
            existed = true;
        }
    }
    if(existed){
        ui->ErrorLabel->setVisible(true);
        ui->ErrorLabel->setText("This user already exists. Please login");
    }
    else
    {
        Registerwindow *regster = new Registerwindow();
        hide();
        regster->show();
    }


}

//A condition here to hide the login window and show the welcome window


