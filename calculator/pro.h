#ifndef PRO_H
#define PRO_H

#include <QWidget>

namespace Ui {
class pro;
}

class pro : public QWidget
{
    Q_OBJECT

public:
    explicit pro(QWidget *parent = nullptr);
    ~pro();

private slots:
    void on_pushButton_6_clicked();

    void on_btn1_4_clicked();

    void on_btnDot_4_clicked();

    void on_btn0_4_clicked();

    void on_btnClear_4_clicked();

    void on_btnChu_4_clicked();

    void on_btn2_4_clicked();

    void on_btn3_4_clicked();

    void on_btnCheng_4_clicked();

    void on_btn4_4_clicked();

    void on_btn5_4_clicked();

    void on_btn6_4_clicked();

    void on_btnLose_4_clicked();

    void on_btn7_4_clicked();

    void on_btn8_4_clicked();

    void on_btn9_4_clicked();

    void on_btnPlus_4_clicked();

    void on_btnDengyu_4_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_27_clicked();

private:
    Ui::pro *ui;
    qreal rezult = 0;
    qreal num1 = 0;
    qreal num2 = 0;
    quint8 mode = 0;
    //1+,2-,3*,4/,5x^2,6x^3,7x^y,8e^x,9 10^x,10x^-1,11 sqrt(x)
    //12pow(x,3),13pow(x,y),14lnx,15log(10)x,16x!,17sinx,18cosx
    //19tanx,20e,21EE,22Rad,23sinh,24cosh,25tanh,26π,27Rand
};

#endif // PRO_H
