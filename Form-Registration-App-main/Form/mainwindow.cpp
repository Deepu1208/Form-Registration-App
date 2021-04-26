#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Deepika 212218104151","Confirm Submission ?",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Deepika 212218104151","Submission is successful!");
    }
    if(reply==QMessageBox::No)
    {
        qDebug()<<"Nothing is submitted";
    }
}
void MainWindow::on_lineEdit_3_returnPressed()
{
    QRegularExpression re("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
    QRegularExpressionMatch match = re.match(ui->lineEdit_3->text());
    bool hasMatch = match.hasMatch();
    if (!hasMatch)
    {
       QMessageBox::information(this,"Deepika 212218104151","Invalid Format");
    }
}
