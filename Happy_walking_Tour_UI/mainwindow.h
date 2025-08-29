#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "stop.h"
#include <QMainWindow>
#include <QStackedWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_create_new_tour_clicked();

    void on_see_previous_tours_clicked();

    void on_Finished_clicked();

    void on_Upload_image_clicked();

    void on_pushButton_clicked();

    void on_save_clicked();

private:
    Ui::MainWindow *ui;
    const QString name;
    const QString description;
    stop m_currentStop;
};
#endif // MAINWINDOW_H
