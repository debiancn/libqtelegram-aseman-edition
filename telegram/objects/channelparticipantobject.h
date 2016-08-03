// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELPARTICIPANT_OBJECT
#define LQTG_TYPE_CHANNELPARTICIPANT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/channelparticipant.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ChannelParticipantObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ChannelParticipantClassType)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 inviterId READ inviterId WRITE setInviterId NOTIFY inviterIdChanged)
    Q_PROPERTY(qint32 kickedBy READ kickedBy WRITE setKickedBy NOTIFY kickedByChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(ChannelParticipant core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ChannelParticipantClassType {
        TypeChannelParticipant,
        TypeChannelParticipantSelf,
        TypeChannelParticipantModerator,
        TypeChannelParticipantEditor,
        TypeChannelParticipantKicked,
        TypeChannelParticipantCreator
    };

    ChannelParticipantObject(const ChannelParticipant &core, QObject *parent = 0);
    ChannelParticipantObject(QObject *parent = 0);
    virtual ~ChannelParticipantObject();

    void setDate(qint32 date);
    qint32 date() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setKickedBy(qint32 kickedBy);
    qint32 kickedBy() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ChannelParticipant &core);
    ChannelParticipant core() const;

    ChannelParticipantObject &operator =(const ChannelParticipant &b);
    bool operator ==(const ChannelParticipant &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dateChanged();
    void inviterIdChanged();
    void kickedByChanged();
    void userIdChanged();

private Q_SLOTS:

private:
    ChannelParticipant m_core;
};

inline ChannelParticipantObject::ChannelParticipantObject(const ChannelParticipant &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline ChannelParticipantObject::ChannelParticipantObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline ChannelParticipantObject::~ChannelParticipantObject() {
}

inline void ChannelParticipantObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

inline qint32 ChannelParticipantObject::date() const {
    return m_core.date();
}

inline void ChannelParticipantObject::setInviterId(qint32 inviterId) {
    if(m_core.inviterId() == inviterId) return;
    m_core.setInviterId(inviterId);
    Q_EMIT inviterIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 ChannelParticipantObject::inviterId() const {
    return m_core.inviterId();
}

inline void ChannelParticipantObject::setKickedBy(qint32 kickedBy) {
    if(m_core.kickedBy() == kickedBy) return;
    m_core.setKickedBy(kickedBy);
    Q_EMIT kickedByChanged();
    Q_EMIT coreChanged();
}

inline qint32 ChannelParticipantObject::kickedBy() const {
    return m_core.kickedBy();
}

inline void ChannelParticipantObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 ChannelParticipantObject::userId() const {
    return m_core.userId();
}

inline ChannelParticipantObject &ChannelParticipantObject::operator =(const ChannelParticipant &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT dateChanged();
    Q_EMIT inviterIdChanged();
    Q_EMIT kickedByChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool ChannelParticipantObject::operator ==(const ChannelParticipant &b) const {
    return m_core == b;
}

inline void ChannelParticipantObject::setClassType(quint32 classType) {
    ChannelParticipant::ChannelParticipantClassType result;
    switch(classType) {
    case TypeChannelParticipant:
        result = ChannelParticipant::typeChannelParticipant;
        break;
    case TypeChannelParticipantSelf:
        result = ChannelParticipant::typeChannelParticipantSelf;
        break;
    case TypeChannelParticipantModerator:
        result = ChannelParticipant::typeChannelParticipantModerator;
        break;
    case TypeChannelParticipantEditor:
        result = ChannelParticipant::typeChannelParticipantEditor;
        break;
    case TypeChannelParticipantKicked:
        result = ChannelParticipant::typeChannelParticipantKicked;
        break;
    case TypeChannelParticipantCreator:
        result = ChannelParticipant::typeChannelParticipantCreator;
        break;
    default:
        result = ChannelParticipant::typeChannelParticipant;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 ChannelParticipantObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChannelParticipant::typeChannelParticipant:
        result = TypeChannelParticipant;
        break;
    case ChannelParticipant::typeChannelParticipantSelf:
        result = TypeChannelParticipantSelf;
        break;
    case ChannelParticipant::typeChannelParticipantModerator:
        result = TypeChannelParticipantModerator;
        break;
    case ChannelParticipant::typeChannelParticipantEditor:
        result = TypeChannelParticipantEditor;
        break;
    case ChannelParticipant::typeChannelParticipantKicked:
        result = TypeChannelParticipantKicked;
        break;
    case ChannelParticipant::typeChannelParticipantCreator:
        result = TypeChannelParticipantCreator;
        break;
    default:
        result = TypeChannelParticipant;
        break;
    }

    return result;
}

inline void ChannelParticipantObject::setCore(const ChannelParticipant &core) {
    operator =(core);
}

inline ChannelParticipant ChannelParticipantObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_CHANNELPARTICIPANT_OBJECT