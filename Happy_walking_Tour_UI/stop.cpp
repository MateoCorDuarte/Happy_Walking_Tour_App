#include "stop.h"

stop::stop() {}
stop::stop(const QString &name, const QString &description)
    : m_name(name), m_description(description) {}

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
