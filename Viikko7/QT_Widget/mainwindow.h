#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    int operand = 0;
    bool enteringSecondNumber = false;
    Ui::MainWindow *ui;
private slots:
    void numberClicked();
    void on_btnClear_clicked();
    void on_btnPlus_clicked();
    void on_btnMinus_clicked();
    void on_btnMultiply_clicked();
    void on_btnDivide_clicked();
    void on_btnEnter_clicked();



};
#endif // MAINWINDOW_H
