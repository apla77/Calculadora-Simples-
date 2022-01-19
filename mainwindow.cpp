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

