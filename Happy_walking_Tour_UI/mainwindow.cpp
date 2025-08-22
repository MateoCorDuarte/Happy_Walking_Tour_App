#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Set the initial page to the first page (index 0)
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_create_new_tour_clicked()
{
    // Set the initial page to the first page (index 0)
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_see_previous_tours_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Finished_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

