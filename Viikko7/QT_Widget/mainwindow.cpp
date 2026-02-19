#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn0, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn1, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn2, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn3, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn4, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn5, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn6, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn7, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn8, &QPushButton::clicked, this, &MainWindow::numberClicked);
    connect(ui->btn9, &QPushButton::clicked, this, &MainWindow::numberClicked);
    ui->lineEditNumber1->setFocus();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::numberClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString digit = button->text();

    if (!enteringSecondNumber)
        ui->lineEditNumber1->setText(ui->lineEditNumber1->text() + digit);
    else
        ui->lineEditNumber2->setText(ui->lineEditNumber2->text() + digit);
}

void MainWindow::on_btnClear_clicked()
{
    ui->lineEditNumber1->clear();
    ui->lineEditNumber2->clear();
    ui->lineEditResult->clear();
    enteringSecondNumber = false;
}

void MainWindow::on_btnPlus_clicked()
{
    operand = 0;
    enteringSecondNumber = true;
}

void MainWindow::on_btnMinus_clicked()
{
    operand = 1;
    enteringSecondNumber = true;
}

void MainWindow::on_btnMultiply_clicked()
{
    operand = 2;
    enteringSecondNumber = true;
}

void MainWindow::on_btnDivide_clicked()
{
    operand = 3;
    enteringSecondNumber = true;
}

void MainWindow::on_btnEnter_clicked()
{
    float n1 = ui->lineEditNumber1->text().toFloat();
    float n2 = ui->lineEditNumber2->text().toFloat();
    float result = 0;

    switch (operand)
    {
    case 0: result = n1 + n2; break;
    case 1: result = n1 - n2; break;
    case 2: result = n1 * n2; break;
    case 3:
    if (n2 != 0)
    result = n1 / n2;
    else {
    ui->lineEditResult->setText("Error");
    return;
    }
    break;
    }

ui->lineEditResult->setText(QString::number(result));
enteringSecondNumber = false;
}
