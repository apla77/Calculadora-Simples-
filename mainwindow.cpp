#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btn_7_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_7->text());
}

void MainWindow::on_btn_8_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_8->text());
}

void MainWindow::on_btn_9_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_9->text());
}

void MainWindow::on_btn_4_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_4->text());
}

void MainWindow::on_btn_5_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_5->text());
}

void MainWindow::on_btn_6_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_6->text());
}


void MainWindow::on_btn_1_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_1->text());
}


void MainWindow::on_btn_2_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_2->text());
}


void MainWindow::on_btn_3_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_3->text());
}


void MainWindow::on_btn_0_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ui->btn_0->text());

}


void MainWindow::on_btn_add_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + " + ");

}


void MainWindow::on_btn_multi_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + " x ");
}


void MainWindow::on_btn_subtra_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + " - ");
}


void MainWindow::on_btn_dividir_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + " ÷ ");
}

void MainWindow::on_btn_total_clicked()
{
    double tot = 0;
    QStringList lista = ui->lineCampo->text().split(" ");
    double pri = lista[0].replace(",", ".").toDouble();
    double seg = lista[2].replace(",", ".").toDouble();
    QString operador = lista[1];

    tot = operacao(pri, operador, seg);
    if(operador == "/" && seg == 0){
        ui->lineCampo->setText("Não é possível dividir por zero");
    }
    else{
        ui->lineCampo->setText(QString::number(tot).replace(".", ","));
    }
}


void MainWindow::on_btn_limpar_clicked()
{
    ui->lineCampo->setText("");
}

void MainWindow::on_btn_virgula_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + ",");
}


void MainWindow::on_btn_quadra_clicked()
{
    double total = ui->lineCampo->text().toDouble() * ui->lineCampo->text().toDouble();
    ui->lineCampo->setText(QString::number(total));
}

double MainWindow::operacao(double pri, QString op, double seg){
    double total = 0.0;
    if(op == "+"){
        total = pri + seg;
    }
    else if(op == "-"){
        total = pri - seg;
    }
    if(op == "x"){
        total = pri * seg;
    }
    if(op == "÷"){
        total = pri / seg;
    }
    return total;
}




