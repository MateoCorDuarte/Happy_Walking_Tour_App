#include "create_new_tour_window.h"
#include "ui_create_new_tour_window.h"

Create_new_tour_window::Create_new_tour_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Create_new_tour_window)
{
    ui->setupUi(this);
}

Create_new_tour_window::~Create_new_tour_window()
{
    delete ui;
}
