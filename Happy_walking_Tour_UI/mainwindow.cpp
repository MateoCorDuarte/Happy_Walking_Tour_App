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
    // Define the file filters to show only image files.
    // The syntax is "Description (*.ext1 *.ext2)"
    QString filter = "Images (*.png *.jpg *.jpeg *.bmp *.gif)";

    // Open the file dialog and get the selected file path.
    // The last argument sets the filter to the one we defined.
    QString filePath = QFileDialog::getOpenFileName(this, "Select an Image", QDir::homePath(), filter);

    // Check if the user selected a file (i.e., didn't cancel the dialog).
    if (!filePath.isEmpty()) {
        qDebug() << "Selected file: " << filePath;

        // Load the selected image into a QPixmap.
        QPixmap pixmap(filePath);

        // Check if the pixmap was loaded successfully.
        if (pixmap.isNull()) {
            QMessageBox::warning(this, "Error", "Failed to load image from " + filePath);
        } else {
            // Scale the pixmap to fit the label, while maintaining aspect ratio.
            /*int labelWidth = label_pic->width();
            int labelHeight = label_pic->height();
            QPixmap scaledPixmap = pixmap.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation);

            // Set the scaled image on the QLabel.
            //QImage->setPixmap(scaledPixmap);*/
            ui->label_pic->setPixmap(pixmap.scaled(100,100,Qt::KeepAspectRatio));
            QMessageBox::information(this, "Success", "Image loaded successfully!");
        }
    }
}

