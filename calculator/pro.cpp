#include "pro.h"
#include "ui_pro.h"
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <random>
#include "dialog.h"

pro::pro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pro)
{
    ui->setupUi(this);
}

pro::~pro()
{
    delete ui;
}

void pro::on_btnDot_4_clicked()
{
    ui->lineEdit_4->insert(".");
}

void pro::on_btn0_4_clicked()
{
    ui->lineEdit_4->insert("0");
}


void pro::on_btn1_4_clicked()
{
    ui->lineEdit_4->insert("1");
}


void pro::on_btn2_4_clicked()
{
    ui->lineEdit_4->insert("2");
}


void pro::on_btn3_4_clicked()
{
    ui->lineEdit_4->insert("3");
}


void pro::on_btn4_4_clicked()
{
    ui->lineEdit_4->insert("4");
}


void pro::on_btn5_4_clicked()
{
    ui->lineEdit_4->insert("5");
}


void pro::on_btn6_4_clicked()
{
    ui->lineEdit_4->insert("6");
}


void pro::on_btn7_4_clicked()
{
    ui->lineEdit_4->insert("7");
}


void pro::on_btn8_4_clicked()
{
    ui->lineEdit_4->insert("8");
}


void pro::on_btn9_4_clicked()
{
    ui->lineEdit_4->insert("9");
}


void pro::on_btnDengyu_4_clicked()
{
    num2 = ui->lineEdit_4->text().toDouble();
    if(num1 > 999999999999999 || num2 > 999999999999999)
    {
        ui->lineEdit_4->setText("输入超出范围");
    }
    ui->lineEdit_4->clear();
    switch (mode) {
        case 0:rezult = num2;break;
        case 1:rezult = num1 + num2;break;
        case 2:rezult = num1 - num2;break;
        case 3:rezult = num1 * num2;break;
        case 4:
            if(num2 == 0)
            {
                ui->lineEdit_4->setText("除数不能为零");
                break;
            }
            rezult = num1 / num2;
            break;
        case 5:rezult = num1 * num1;break;
        case 6:rezult = num1 * num1 * num1;break;
        case 7:rezult = pow(num1, num2);break;
        case 8:rezult = exp(num1);break;
        case 9:rezult = pow(10.0, (int)num1);break;
        case 10:rezult = 1.0/num1;break;
        case 11:rezult = sqrt(num1);break;
        case 12:rezult = cbrt(num1);break;
        case 13:
            if(num2 == 0)
            {
                ui->lineEdit_4->setText("除数不能为零");
                break;
            }
            rezult = pow(num1, 1.0/num2);
            break;
        case 14:rezult = log(num1);break;
        case 15:rezult = log10(num1);break;
        case 16:
            rezult = 1;
            for(int i = 1; i <=num1; ++i)
            {
                rezult *= i;
            }
            break;
        case 17:rezult = sin(num1);break;
        case 18:rezult = cos(num1);break;
        case 19:rezult = tan(num1);break;
        case 20:rezult = M_E;break;
        case 21:rezult = num1 * pow(10, num2);break;
        case 23:rezult = sinh(num1);break;
        case 24:rezult = cosh(num1);break;
        case 25:rezult = tanh(num1);break;
        case 26:rezult = M_PI;break;
        case 27:
//            srand(time(NULL));//时间
//            srand(getpid());//进程
//            rezult = rand() / static_cast<double>(RAND_MAX);
            std::mt19937 gen(time(0)); // 使用当前时间作为种子
            std::uniform_real_distribution<double> dis(0.0, 1.0); // 均匀分布的随机数生成器，范围为[0.0, 1.0)
            rezult = dis(gen); // 生成随机浮点数
            break;
//        default:rezult = 0;break;
    }
    if(rezult > 999999999999999)
    {
        ui->lineEdit_4->setText("输入超出范围");
    }
    QString rzt;
    rzt = QString::number(rezult, 10, 4);
    ui->lineEdit_4->setText(rzt);
}


void pro::on_btnClear_4_clicked()
{
    ui->lineEdit_4->clear();
}


void pro::on_btnPlus_4_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 1;
}


void pro::on_btnLose_4_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 2;
}


void pro::on_btnCheng_4_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 3;
}


void pro::on_btnChu_4_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 4;
}

void pro::on_pushButton_6_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 5;
}


void pro::on_pushButton_4_clicked()
{
    Dialog *d = new Dialog;
    this->close();
    d->show();
}


void pro::on_pushButton_5_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 6;
}


void pro::on_pushButton_12_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 7;
}


void pro::on_pushButton_7_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 8;
}


void pro::on_pushButton_13_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 9;
}


void pro::on_pushButton_14_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 10;
}


void pro::on_pushButton_8_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 11;
}


void pro::on_pushButton_15_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 12;
}


void pro::on_pushButton_16_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 13;
}


void pro::on_pushButton_9_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 14;
}


void pro::on_pushButton_17_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 15;
}


void pro::on_pushButton_18_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 16;
}


void pro::on_pushButton_10_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 17;
}


void pro::on_pushButton_19_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 18;
}


void pro::on_pushButton_20_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 19;
}


void pro::on_pushButton_23_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 20;
}


void pro::on_pushButton_24_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 21;
}


void pro::on_pushButton_25_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 22;
}


void pro::on_pushButton_26_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 23;
}


void pro::on_pushButton_11_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 24;
}


void pro::on_pushButton_21_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 25;
}


void pro::on_pushButton_22_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 26;
}


void pro::on_pushButton_27_clicked()
{
    num1 = ui->lineEdit_4->text().toDouble();
    ui->lineEdit_4->clear();
    mode = 27;
}

