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


void MainWindow::on_Upload_image_clicked()
{
    // The syntax is "Description (*.ext1 *.ext2)"
    QString filter = "Images (*.png *.jpg *.jpeg *.bmp *.gif)";

    //here I need to set a vector, in case the user wants to set more pictures
    QString filePath = QFileDialog::getOpenFileName(this, "Select an Image", QDir::homePath(), filter);

    // Check if the user selected a file (i.e., didn't cancel the dialog).
    if (!filePath.isEmpty()) {
        stops.addImage(filePath);
        /*qDebug() << "Selected file: " << filePath;

        // Load the selected image into a QPixmap.
        // the setter from the stop/tour object will use the address to then store the pictures.
        QPixmap pixmap(filePath);

        // Check if the pixmap was loaded successfully.
        if (pixmap.isNull()) {
            QMessageBox::warning(this, "Error", "Failed to load image from " + filePath);
        } else {
            // Scale the pixmap to fit the label, while maintaining aspect ratio.

            ui->show_tour_cover->setPixmap(pixmap.scaled(100,100,Qt::KeepAspectRatio));
            QMessageBox::information(this, "Success", "Image loaded successfully!");
        }*/
    }

}


void MainWindow::on_pushButton_clicked()
{
    // take all, and use the getters to put them on QLabels at the left.
    // maybe I can use a friend function so save can be applied to every stop and tour in the current window.
}


void MainWindow::on_save_clicked()
{
    //Storing in the tour/stop class:
    QString Name = ui->name_input_line_edit->text();
    QString Description = ui->description_input->toPlainText();


    stops.setName(Name);
    stops.setDescription(Description);
    //ui->tour_name->setText();
    QMessageBox::information(this, "Success", "Name and description saved correctly!");

    //showing the results at the side.
    ui->tour_name_show->setText(stops.getName());
    ui->tour_description_show->setText(stops.getDescription());

    QVector<QString> image =stops.getImages();
    if (!image[0].isEmpty()) {
        qDebug() << "Selected file: " << image[0];

        // Load the selected image into a QPixmap.
        // the setter from the stop/tour object will use the address to then store the pictures.
        QPixmap pixmap(image[0]);

        // Check if the pixmap was loaded successfully.
        if (pixmap.isNull()) {
            QMessageBox::warning(this, "Error", "Failed to load image from " + image[0]);
        } else {
            // Scale the pixmap to fit the label, while maintaining aspect ratio.

            ui->show_tour_cover->setPixmap(pixmap.scaled(100,100,Qt::KeepAspectRatio));
            QMessageBox::information(this, "Success", "Image loaded successfully!");
        }
    }
}

