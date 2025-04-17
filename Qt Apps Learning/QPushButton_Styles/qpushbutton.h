#ifndef QPUSHBUTTON_H
#define QPUSHBUTTON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QPushButton;
}
QT_END_NAMESPACE

class QPushButton : public QMainWindow
{
    Q_OBJECT

public:
    QPushButton(QWidget *parent = nullptr);
    ~QPushButton();

private:
    Ui::QPushButton *ui;
};
#endif // QPUSHBUTTON_H
