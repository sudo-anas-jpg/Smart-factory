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





void MainWindow::on_prim_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_prod_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Ajout1_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_Aff_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_5_clicked()
{
     int id = ui->lineEdit_id->text().toInt();
     QString m = ui->lineEdit_nom->text();
     int prix = ui->lineEdit_prix->text().toInt();
    produit P(id,prix,m);
    bool test = P.ajouter();
    if(test)
    {
        QMessageBox::information(nullptr,"ajout produit","produit ajouté:");
    }
}
