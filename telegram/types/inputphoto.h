// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPHOTO
#define LQTG_TYPE_INPUTPHOTO

#include "telegramtypeobject.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputPhoto : public TelegramTypeObject
{
public:
    enum InputPhotoType {
        typeInputPhotoEmpty = 0x1cd7bf0d,
        typeInputPhoto = 0xfb95c6c4
    };

    InputPhoto(InputPhotoType classType = typeInputPhotoEmpty, InboundPkt *in = 0);
    InputPhoto(InboundPkt *in);
    virtual ~InputPhoto();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(InputPhotoType classType);
    InputPhotoType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputPhoto &b);

private:
    qint64 m_accessHash;
    qint64 m_id;
    InputPhotoType m_classType;
};

#endif // LQTG_TYPE_INPUTPHOTO