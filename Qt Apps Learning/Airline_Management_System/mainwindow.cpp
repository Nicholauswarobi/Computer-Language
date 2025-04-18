#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->pushButton_submit, SIGNAL(clicked()), this, SLOT(on_pushButton_submit_clicked()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_submit_clicked(){
    // Variables
    QString flights[] = {"Flight101", "Flight102", "Flight103"};
    int seats_no[] = {20, 30, 40};

    // User inputs
    QString user_flight_no = ui->lineEdit_flight_no->text();
    QString user_name = ui->lineEdit_passanger_name->text();
    bool found = false;

    for(int i = 0; i < 3; i++){
        if (user_flight_no == flights[i] && seats_no[i] > 0){
            QString msg = "Username: " + user_name + "\n"
                          + "Flight Name: " + flights[i] + "\n"
                          + "Seat reserved successfully!";
            QMessageBox::information(this, "Success Massage", msg, QMessageBox::Ok);
            found = true;
            break;
        }

    }
    if (!found){
    QMessageBox::warning(this, "Error Massage",
            "Incorrect flight or no seat available!");
    }
}

