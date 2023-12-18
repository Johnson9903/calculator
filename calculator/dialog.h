#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btn0_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btnDengyu_clicked();

    void on_btnClear_clicked();

    void on_btnPlus_clicked();

    void on_btnLose_clicked();

    void on_btnCheng_clicked();

    void on_btnChu_clicked();

    void on_btnDot_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    qreal rezult = 0;
    qreal num1 = 0;
    qreal num2 = 0;
    quint8 mode = 0;//1+,2-,3*,4/
};
#endif // DIALOG_H
