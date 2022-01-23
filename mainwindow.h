#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    double operacao(double pri, QString op, double seg);

private slots:
    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_0_clicked();

    void on_btn_add_clicked();

    void on_btn_total_clicked();

    void on_btn_limpar_clicked();

    void on_btn_quadra_clicked();

    void on_btn_dividir_clicked();

    void on_btn_multi_clicked();

    void on_btn_subtra_clicked();

    void on_btn_virgula_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
