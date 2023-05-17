#include "mainwindow.h"
#include "./ui_mainwindow.h"


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


void MainWindow::on_pushButton_2_clicked()
{
    double r;
    double r1 =  ui->textEdit1-> toPlainText().toDouble();
    double r2 =  ui->textEdit2-> toPlainText().toDouble();
    if (ui->radioButton->isChecked()){
         r = r1 + r2;
        }
    else{
         r = (r1 * r2) / (r1 + r2);
        }

    ui->textEdit3->setText(QString::number(r));

}

