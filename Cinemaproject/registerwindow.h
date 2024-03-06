#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QDialog>

namespace Ui {
class Registerwindow;
}

class Registerwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Registerwindow(QWidget *parent = nullptr);
    ~Registerwindow();

private slots:
    void on_pushButtonRegister2_clicked();

private:
    Ui::Registerwindow *ui;
};

#endif // REGISTERWINDOW_H
