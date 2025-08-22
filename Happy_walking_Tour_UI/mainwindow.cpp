#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_create_new_tour_clicked()
{
    create_new_tour_window = new Create_new_tour_window(this);

    create_new_tour_window->show();

    this->hide();
}


void MainWindow::on_see_previous_tours_clicked()
{

}

