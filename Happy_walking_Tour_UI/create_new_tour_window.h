#ifndef CREATE_NEW_TOUR_WINDOW_H
#define CREATE_NEW_TOUR_WINDOW_H

#include <QDialog>

namespace Ui {
class Create_new_tour_window;
}

class Create_new_tour_window : public QDialog
{
    Q_OBJECT

public:
    explicit Create_new_tour_window(QWidget *parent = nullptr);
    ~Create_new_tour_window();

private:
    Ui::Create_new_tour_window *ui;
};

#endif // CREATE_NEW_TOUR_WINDOW_H
