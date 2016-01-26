// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "peernotifyeventsobject.h"

PeerNotifyEventsObject::PeerNotifyEventsObject(const PeerNotifyEvents &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

PeerNotifyEventsObject::PeerNotifyEventsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

PeerNotifyEventsObject::~PeerNotifyEventsObject() {
}

PeerNotifyEventsObject &PeerNotifyEventsObject::operator =(const PeerNotifyEvents &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

bool PeerNotifyEventsObject::operator ==(const PeerNotifyEvents &b) const {
    return m_core == b;
}

void PeerNotifyEventsObject::setClassType(int classType) {
    PeerNotifyEvents::PeerNotifyEventsType result;
    switch(classType) {
    case TypePeerNotifyEventsEmpty:
        result = PeerNotifyEvents::typePeerNotifyEventsEmpty;
        break;
    case TypePeerNotifyEventsAll:
        result = PeerNotifyEvents::typePeerNotifyEventsAll;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int PeerNotifyEventsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PeerNotifyEvents::typePeerNotifyEventsEmpty:
        result = TypePeerNotifyEventsEmpty;
        break;
    case PeerNotifyEvents::typePeerNotifyEventsAll:
        result = TypePeerNotifyEventsAll;
        break;
    }

    return result;
}

void PeerNotifyEventsObject::setCore(const PeerNotifyEvents &core) {
    operator =(core);
}

PeerNotifyEvents PeerNotifyEventsObject::core() const {
    return m_core;
}
