#ifndef STOP_H
#define STOP_H

#include <QString>
#include <QVector>
#include <QImage>
#include <QDebug>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>

class stop
{
public:
    stop();
    stop(const QString& name, const QString& description, const QVector<QString>& photoFilePaths);

    // Setters
    void setName(const QString &name);
    void setDescription(const QString &description);
    void addImage(const QString &image);// I need to pass the addres and append it to the

    // Getters
    QString getName() const;
    QString getDescription() const;
    QVector<QString> getImages() const;

private:
    QString m_name;
    QString m_description;
    QVector<QString> m_images;

};

#endif // STOP_H
