#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

double num1, num2;
char operador = '1';

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
}

void MainWindow::on_pushButton_4_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
}

void MainWindow::on_pushButton_7_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}

void MainWindow::on_pushButton_3_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}

void MainWindow::on_pushButton_5_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}

void MainWindow::on_pushButton_8_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}

void MainWindow::on_pushButton_2_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}

void MainWindow::on_pushButton_6_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
}

void MainWindow::on_pushButton_9_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}

void MainWindow::on_pushButton_10_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}

void MainWindow::on_pushButton_11_clicked()
{
    if(operador == '0'){
        ui->lineEdit->setText("");
        operador = '1';
    }
    ui->lineEdit->setText(ui->lineEdit->text() + ".");
}

void MainWindow::on_pushButton_15_clicked()
{
    operador = '+';
    num1 = ui->lineEdit->text().toDouble(NULL);
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_14_clicked()
{
    operador = '-';
    num1 = ui->lineEdit->text().toDouble(NULL);
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_13_clicked()
{
    operador = '*';
    num1 = ui->lineEdit->text().toDouble(NULL);
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_12_clicked()
{
    operador = '/';
    num1 = ui->lineEdit->text().toDouble(NULL);
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_16_clicked()
{
    num2 = ui->lineEdit->text().toDouble(NULL);
    switch (operador) {
    case '+':
        ui->lineEdit->setText(QString::number(num1+num2));
        operador = '0';
        break;
    case '-':
        ui->lineEdit->setText(QString::number(num1-num2));
        operador = '0';
        break;
    case '*':
        ui->lineEdit->setText(QString::number(num1*num2));
        operador = '0';
        break;
    case '/':
        ui->lineEdit->setText(QString::number(num1/num2));
        operador = '0';
        break;
    default:
        break;
    }
}

void MainWindow::on_pushButton_17_clicked()
{
    QString texto = ui->lineEdit->text();
    if(texto != ""){
        texto.remove((texto.size())-1, 1);
        ui->lineEdit->setText(texto);
    }
}
