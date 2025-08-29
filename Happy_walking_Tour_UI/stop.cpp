#include "stop.h"

stop::stop() {}
stop::stop(const QString& name, const QString& description, const QVector<QString>& photoFilePaths)
    : m_name(name), m_description(description) {
    // Load each image from the provided file paths
    for (const QString& filePath : photoFilePaths) {
        QImage image(filePath);
        if (!image.isNull()) {
            m_images.append(image);
        } else {
            // It's a good practice to handle loading errors
            // You could log a warning here
            //qWarning() << "Failed to load image:" << filePath;
        }
    }
}

void stop::setName(const QString &name) {
    m_name = name;
}

void stop::setDescription(const QString &description) {
    m_description = description;
}

void stop::addImage(const QImage &image) {
    m_images.append(image);
}

QString stop::getName() const {
    return m_name;
}

QString stop::getDescription() const {
    return m_description;
}

QVector<QImage> stop::getImages() const {
    return m_images;
}
