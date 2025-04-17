#include "qpushbutton.h"
#include "./ui_qpushbutton.h"

QPushButton::QPushButton(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QPushButton)
{
    ui->setupUi(this);
}

QPushButton::~QPushButton()
{
    delete ui;
}
