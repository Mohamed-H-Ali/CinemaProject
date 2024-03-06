#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>

namespace Ui {
class welcomewindow;
}

class welcomewindow : public QDialog
{
    Q_OBJECT

public:
    explicit welcomewindow(QString username, int age, QWidget *parent = nullptr);
    ~welcomewindow();

private slots:
    void on_logoutbutton_clicked();

private:
    Ui::welcomewindow *ui;
};

#endif // WELCOMEWINDOW_H
