#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    int totalTime = 0;
    int player1Time = 0;
    int player2Time = 0;
    int currentPlayer = 0;
    bool gameRunning = false;
private slots:
    void on_btnPlayer1_clicked();
    void on_btnPlayer2_clicked();
    void on_btn120sec_clicked();
    void on_btn5min_clicked();
    void on_btnStartGame_clicked();
    void on_btnStopGame_clicked();
    void updateTime();

};
#endif // MAINWINDOW_H
