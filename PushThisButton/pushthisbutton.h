#ifndef PUSHTHISBUTTON_H
#define PUSHTHISBUTTON_H

#include <QMainWindow>

namespace Ui {
class PushThisButton;
}

class PushThisButton : public QMainWindow
{
    Q_OBJECT

public:
    explicit PushThisButton(QWidget *parent = nullptr);
    ~PushThisButton();

private:
    Ui::PushThisButton *ui;

private slots:
    void ButtonPressed();
};

#endif // PUSHTHISBUTTON_H
