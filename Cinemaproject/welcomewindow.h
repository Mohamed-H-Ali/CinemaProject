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
    explicit welcomewindow(QWidget *parent = nullptr);
    ~welcomewindow();

private:
    Ui::welcomewindow *ui;
};

#endif // WELCOMEWINDOW_H
