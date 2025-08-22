#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
