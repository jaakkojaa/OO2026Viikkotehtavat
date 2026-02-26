#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnPlayer1_clicked()
{
    if (!gameRunning) return;
    if (currentPlayer == 1) currentPlayer = 2;
}

void MainWindow::on_btnPlayer2_clicked()
{
    if (!gameRunning) return;
    if (currentPlayer == 2) currentPlayer = 1;
}

void MainWindow::on_btn120sec_clicked()
{
    totalTime = 120;
    player1Time = totalTime;
    player2Time = totalTime;
    ui->progressBarPlayer1->setMaximum(totalTime);
    ui->progressBarPlayer2->setMaximum(totalTime);
    ui->progressBarPlayer1->setValue(totalTime);
    ui->progressBarPlayer2->setValue(totalTime);
    ui->labelGameStatus->setText("Time selected. Press START GAME.");
    gameRunning = false;
    currentPlayer = 1;
}

void MainWindow::on_btn5min_clicked()
{
    totalTime = 300;
    player1Time = totalTime;
    player2Time = totalTime;
    ui->progressBarPlayer1->setMaximum(totalTime);
    ui->progressBarPlayer2->setMaximum(totalTime);
    ui->progressBarPlayer1->setValue(totalTime);
    ui->progressBarPlayer2->setValue(totalTime);
    ui->labelGameStatus->setText("Time selected. Press START GAME.");
    gameRunning = false;
    currentPlayer = 1;
}

void MainWindow::on_btnStartGame_clicked()
{
    if (totalTime == 0) return;
    gameRunning = true;
    currentPlayer = 1;
    timer->start(1000);
    ui->labelGameStatus->setText("Game ongoing");
}

void MainWindow::on_btnStopGame_clicked()
{
    timer->stop();
    gameRunning = false;
    ui->labelGameStatus->setText("Game stopped. Select time to start again.");
}

void MainWindow::updateTime()
{
    if (!gameRunning) return;
    if (currentPlayer == 1)
    {
        player1Time--;
        ui->progressBarPlayer1->setValue(player1Time);
        if (player1Time <= 0)
        {
            timer->stop();
            gameRunning = false;
            ui->labelGameStatus->setText("Player 2 wins!");
        }
}
    else if (currentPlayer == 2)
    {
        player2Time--;
    ui->progressBarPlayer2->setValue(player2Time);
        if (player2Time <= 0)
    {
        timer->stop();
            gameRunning = false;
        ui->labelGameStatus->setText("Player 1 wins!");
        }
}

}
