// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PHOTOSPHOTOS_OBJECT
#define LQTG_TYPE_PHOTOSPHOTOS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/photosphotos.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT PhotosPhotosObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(PhotosPhotosClassType)
    Q_PROPERTY(qint32 count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(QList<Photo> photos READ photos WRITE setPhotos NOTIFY photosChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(PhotosPhotos core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum PhotosPhotosClassType {
        TypePhotosPhotos,
        TypePhotosPhotosSlice
    };

    PhotosPhotosObject(const PhotosPhotos &core, QObject *parent = 0);
    PhotosPhotosObject(QObject *parent = 0);
    virtual ~PhotosPhotosObject();

    void setCount(qint32 count);
    qint32 count() const;

    void setPhotos(const QList<Photo> &photos);
    QList<Photo> photos() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const PhotosPhotos &core);
    PhotosPhotos core() const;

    PhotosPhotosObject &operator =(const PhotosPhotos &b);
    bool operator ==(const PhotosPhotos &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void countChanged();
    void photosChanged();
    void usersChanged();

private Q_SLOTS:

private:
    PhotosPhotos m_core;
};

inline PhotosPhotosObject::PhotosPhotosObject(const PhotosPhotos &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline PhotosPhotosObject::PhotosPhotosObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline PhotosPhotosObject::~PhotosPhotosObject() {
}

inline void PhotosPhotosObject::setCount(qint32 count) {
    if(m_core.count() == count) return;
    m_core.setCount(count);
    Q_EMIT countChanged();
    Q_EMIT coreChanged();
}

inline qint32 PhotosPhotosObject::count() const {
    return m_core.count();
}

inline void PhotosPhotosObject::setPhotos(const QList<Photo> &photos) {
    if(m_core.photos() == photos) return;
    m_core.setPhotos(photos);
    Q_EMIT photosChanged();
    Q_EMIT coreChanged();
}

inline QList<Photo> PhotosPhotosObject::photos() const {
    return m_core.photos();
}

inline void PhotosPhotosObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

inline QList<User> PhotosPhotosObject::users() const {
    return m_core.users();
}

inline PhotosPhotosObject &PhotosPhotosObject::operator =(const PhotosPhotos &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT countChanged();
    Q_EMIT photosChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool PhotosPhotosObject::operator ==(const PhotosPhotos &b) const {
    return m_core == b;
}

inline void PhotosPhotosObject::setClassType(quint32 classType) {
    PhotosPhotos::PhotosPhotosClassType result;
    switch(classType) {
    case TypePhotosPhotos:
        result = PhotosPhotos::typePhotosPhotos;
        break;
    case TypePhotosPhotosSlice:
        result = PhotosPhotos::typePhotosPhotosSlice;
        break;
    default:
        result = PhotosPhotos::typePhotosPhotos;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 PhotosPhotosObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PhotosPhotos::typePhotosPhotos:
        result = TypePhotosPhotos;
        break;
    case PhotosPhotos::typePhotosPhotosSlice:
        result = TypePhotosPhotosSlice;
        break;
    default:
        result = TypePhotosPhotos;
        break;
    }

    return result;
}

inline void PhotosPhotosObject::setCore(const PhotosPhotos &core) {
    operator =(core);
}

inline PhotosPhotos PhotosPhotosObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_PHOTOSPHOTOS_OBJECT