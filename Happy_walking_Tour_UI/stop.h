#ifndef STOP_H
#define STOP_H

#include <QString>
#include <QVector>
#include <QImage>

class stop
{
public:
    stop();
    stop(const QString& name, const QString& description, const QVector<QString>& photoFilePaths);

    // Setters
    void setName(const QString &name);
    void setDescription(const QString &description);
    void addImage(const QImage &image);// I need to pass the addres and append it to the

    // Getters
    QString getName() const;
    QString getDescription() const;
    QVector<QImage> getImages() const;

private:
    QString m_name;
    QString m_description;
    QVector<QImage> m_images;

};

#endif // STOP_H
