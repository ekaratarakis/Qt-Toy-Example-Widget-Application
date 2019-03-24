#include "pushthisbutton.h"
#include "ui_pushthisbutton.h"

PushThisButton::PushThisButton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PushThisButton)
{
    ui->setupUi(this);
    ui->Display->setText("Go ahead! Push the button");
    connect(ui->Button1, SIGNAL(released()), this, SLOT(ButtonPressed()));
    connect(ui->Button2, SIGNAL(released()), this, SLOT(ButtonPressed()));
    connect(ui->Button3, SIGNAL(released()), this, SLOT(ButtonPressed()));
    connect(ui->Button4, SIGNAL(released()), this, SLOT(ButtonPressed()));
}

PushThisButton::~PushThisButton()
{
    delete ui;
}

void PushThisButton::ButtonPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butval = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0))
    {
        ui->Display->setText(butval);
    }
    else
    {
        QString newVal = butval;
    }
}
