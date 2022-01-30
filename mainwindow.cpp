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

void MainWindow::on_btn_porcen_clicked()
{
    ui->lineCampo->setText( ui->lineCampo->text() + "%");
    double total = operacao(ui->lineCampo->text());
    ui->lineCampo->setText(QString::number(total).replace(".", ","));
}

void MainWindow::on_btn_total_clicked()
{
    double tot = operacao(ui->lineCampo->text());
    if(tot != qInf()){
        ui->lineCampo->setText(QString::number(tot).replace(".", ","));
    }
    else{
        ui->lineCampo->setText("Não é possível dividir por zero");
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

void MainWindow::on_btn_apagar_um_clicked()
{
    QString apagaUltimo = ui->lineCampo->text();
    ui->lineCampo->setText( apagaUltimo.remove(apagaUltimo.size() -1, 1));
}

void MainWindow::on_btn_quadra_clicked()
{
    double total = ui->lineCampo->text().toDouble() * ui->lineCampo->text().toDouble();
    ui->lineCampo->setText(QString::number(total));
}

double MainWindow::operacao(QString campoTexto){

    QString op2 = campoTexto[campoTexto.size() - 1];
    if(op2 == "%"){
        ui->lineCampo->setText(campoTexto.remove(campoTexto.size() -1, 1));
    }
    QStringList lista = campoTexto.split(" ");
    double pri = lista[0].replace(",", ".").toDouble();
    double seg = lista[2].replace(",", ".").toDouble();
    QString op = lista[1];

    double total = 0;

    if(op == "+"){
        total = pri + seg;
    }
    else if(op2 == "%"){
        total = pri * (seg/100);
    }
    else if(op == "-"){
        total = pri - seg;
    }
    else if(op == "x"){
        total = pri * seg;
    }
    else if(op == "÷"){
        total = pri / seg;
    }
    return total;
}









