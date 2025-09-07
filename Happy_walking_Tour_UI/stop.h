#ifndef STOP_H
#define STOP_H

#include <QString>
#include <QVector>
#include <QImage>
#include <QDebug>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>

struct ImageNode {
    QString imagePath; // Stores the image file path
    ImageNode* next;
    ImageNode* previous;
};

class stop
{
public:
    stop();
    stop(const QString& name, const QString& description, const QVector<QString>& photoFilePaths);
    ~stop();
    // Setters
    void setName(const QString &name);
    void setDescription(const QString &description);
    void addImage(const QString &newImage);// I need to pass the addres and append it to the

    // Getters
    QString getName() const;
    QString getDescription() const;
    QString getImage() const;


    void nextImage();
    void previousImage();

private:
    QString m_name;
    QString m_description;

    //linked list to store the image address.
    ImageNode* head;
    ImageNode* tail;
    ImageNode* currentImage;
};

#endif // STOP_H
