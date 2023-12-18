#include "dialog.h"
#include "ui_dialog.h"
#include "pro.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnDot_clicked()
{
    ui->lineEdit->insert(".");
}

void Dialog::on_btn0_clicked()
{
    ui->lineEdit->insert("0");
}


void Dialog::on_btn1_clicked()
{
    ui->lineEdit->insert("1");
}


void Dialog::on_btn2_clicked()
{
    ui->lineEdit->insert("2");
}


void Dialog::on_btn3_clicked()
{
    ui->lineEdit->insert("3");
}


void Dialog::on_btn4_clicked()
{
    ui->lineEdit->insert("4");
}


void Dialog::on_btn5_clicked()
{
    ui->lineEdit->insert("5");
}


void Dialog::on_btn6_clicked()
{
    ui->lineEdit->insert("6");
}


void Dialog::on_btn7_clicked()
{
    ui->lineEdit->insert("7");
}


void Dialog::on_btn8_clicked()
{
    ui->lineEdit->insert("8");
}


void Dialog::on_btn9_clicked()
{
    ui->lineEdit->insert("9");
}


void Dialog::on_btnDengyu_clicked()
{
    num2 = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    switch (mode) {
        case 0:rezult = num2;break;
        case 1:rezult = num1 + num2;break;
        case 2:rezult = num1 - num2;break;
        case 3:rezult = num1 * num2;break;
        case 4:
            if(num2 == 0)
            {
                ui->lineEdit->setText("除数不能为零");
                break;
            }
            rezult = num1 / num2;
            break;
    }
    QString rzt;
    rzt = QString::number(rezult, 10, 4);
    ui->lineEdit->setText(rzt);
}


void Dialog::on_btnClear_clicked()
{
    ui->lineEdit->clear();
}


void Dialog::on_btnPlus_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    mode = 1;
}


void Dialog::on_btnLose_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    mode = 2;
}


void Dialog::on_btnCheng_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    mode = 3;
}


void Dialog::on_btnChu_clicked()
{
    num1 = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    mode = 4;
}


void Dialog::on_pushButton_clicked()
{
    this->close();
    pro *p = new pro();
    p->show();
}

