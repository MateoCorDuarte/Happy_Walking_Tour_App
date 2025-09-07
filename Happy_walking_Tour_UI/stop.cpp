#include "stop.h"

stop::stop() {}
stop::stop(const QString& name, const QString& description, const QVector<QString>& photoFilePaths)
    : m_name(name), m_description(description) {
    // Load each image from the provided file paths
    /*for (const QString& filePath : photoFilePaths) {
        //QImage image(filePath);
        if (!filePath.isNull()) {
            m_images.append(filePath);
        } else {
            // It's a good practice to handle loading errors
            // You could log a warning here
            //qWarning() << "Failed to load image:" << filePath;
        }
    }*/
}
stop::~stop() {
    ImageNode* current = head;
    while(current != nullptr) {
        ImageNode* next = current->next;
        delete current;
        current = next;
    }
}

//Setters

void stop::setName(const QString &name) {
    m_name = name;
}

void stop::setDescription(const QString &description) {
    m_description = description;
}

//Getters
QString stop::getName() const {
    return m_name;
}

QString stop::getDescription() const {
    return m_description;
}

QString stop::getImages() const {
    return this->currentImage != nullptr ? this->currentImage->imagePath : "";
}


//Methods
void stop::addImage(const QString &newImage) {
    //QImage Image(image);
    ImageNode* newNode = new ImageNode;
    newNode->imagePath = newImage;
    newNode->next = nullptr;
    newNode->previous = this->tail;

    if (this->tail != nullptr) {
        this->tail->next = newNode;
    } else {
        this->head = newNode;
    }
    this->tail = newNode;

    if (this->currentImage == nullptr) {
        this->currentImage = newNode;
    }
}

void stop::nextImage(){
    if (this->currentImage != nullptr && this->currentImage->next != nullptr) {
        this->currentImage = this->currentImage->next;
    }
}

void stop::previousImage(){
    if (this->currentImage != nullptr && this->currentImage->previous != nullptr) {
        this->currentImage = this->currentImage->previous;
    }
}




