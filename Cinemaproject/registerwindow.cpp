#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"
Registerwindow::Registerwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Registerwindow)
{
    ui->setupUi(this);
    ui->ageerrormsg->setVisible(false);
    ui->retypeerrormsg->setVisible(false);
    ui->usererrormsg->setVisible(false);
    ui->registerrormsg->setVisible(false);
    ui->monthcombo->addItem("");
    ui->monthcombo->addItem("Jan.");
    ui->monthcombo->addItem("Feb.");
    ui->monthcombo->addItem("Mar.");
    ui->monthcombo->addItem("Abr.");
    ui->monthcombo->addItem("May");
    ui->monthcombo->addItem("Jun.");
    ui->monthcombo->addItem("Jul.");
    ui->monthcombo->addItem("Aug.");
    ui->monthcombo->addItem("Sept.");
    ui->monthcombo->addItem("Oct.");
    ui->monthcombo->addItem("Nov.");
    ui->monthcombo->addItem("Dec.");

}

Registerwindow::~Registerwindow()
{
    delete ui;
}

void Registerwindow::on_pushButtonRegister2_clicked()
{
    QString use=ui->usertext->text();
    QString password=ui->passtext->text();
    QString repassword=ui->repasstext->text();
    QString combomonth=ui->monthcombo->currentText();
    bool male = ui->radioButtonMale->isChecked();
    bool female= ui->radioButtonFemale->isChecked();
    bool admin=ui->radioButtonAdmin->isChecked();
    bool user=ui->radioButtonUser->isChecked();
    bool action=ui->ActionGenre->isChecked();
    bool drama=ui->DramaGenre->isChecked();
    bool comedy=ui->ComedyGenre->isChecked();
    bool horror=ui->Horrorgenre->isChecked();
    bool roma=ui->RomanceGenre->isChecked();
    bool other=ui->OtherGenre->isChecked();
    QString day= ui->daytext->text();
    QString year=ui->yeartext->text();
    int yearnum=year.toInt();
    bool errors=false;
    bool existed=false;
    for(int j=0; j<usersCount; j++){
        if(use==usernames[j]){
            existed=true;
            errors=true;
            break;
        }
    }
    if(existed){
        ui->usererrormsg->setVisible(true);
    }else{
        ui->usererrormsg->setVisible(false);
    }
    if(password!=repassword){
        ui->retypeerrormsg->setVisible(true);
        errors=true;
    }else{
        ui->retypeerrormsg->setVisible(false);
    }
    if(2024-yearnum<12){
        ui->ageerrormsg->setVisible(true);
        errors=true;
    }else{
        ui->ageerrormsg->setVisible(false);
    }
    bool checkbox=(action || drama || comedy || horror || roma || other);
    bool part1= (!(use=="") && !(password=="") && !(repassword==""));
    bool date= (!(day=="") && !(year=="") && !(combomonth==""));
    bool radios= (male || female) && (user || admin);
    if(!(checkbox && part1 && date && radios)){
        ui->registerrormsg->setVisible(true);
        errors=true;
    }else{
        ui->registerrormsg->setVisible(false);
    }
    if(!errors){
        usernames[usersCount]=use;
        ages[usersCount]=2024-yearnum;
        passwords[usersCount]=password;
        usersCount++;
        welcomewindow *welcome = new welcomewindow(use, 2024-yearnum , this);
        welcome->show();
        hide();
    }
}

