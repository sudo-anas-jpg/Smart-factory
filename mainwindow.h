#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "produit.h"
#include <QMessageBox>
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

private slots:
    void on_prim_clicked();

    void on_prod_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_Ajout1_clicked();

    void on_Aff_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
