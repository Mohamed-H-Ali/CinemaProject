#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Loginwindow;
}
QT_END_NAMESPACE

class Loginwindow : public QMainWindow
{
    Q_OBJECT

public:
    Loginwindow(QWidget *parent = nullptr);
    ~Loginwindow();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonRegiester_clicked();

private:
    Ui::Loginwindow *ui;
};
#endif // LOGINWINDOW_H
