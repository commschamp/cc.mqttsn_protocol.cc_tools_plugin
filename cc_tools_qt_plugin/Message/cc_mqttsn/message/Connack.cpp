// Generated by commsdsl2tools_qt v7.0.0

#include "Connack.h"

#include "cc_mqttsn/message/Connack.h"
#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_mqttsn/Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqttsn
{

namespace message
{

class ConnackImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message,
        ::cc_mqttsn::message::Connack,
        ConnackImpl
    >
{
public:
    ConnackImpl() = default;
    ConnackImpl(const ConnackImpl&) = default;
    ConnackImpl(ConnackImpl&&) = default;
    virtual ~ConnackImpl() = default;
    ConnackImpl& operator=(const ConnackImpl&) = default;
    ConnackImpl& operator=(ConnackImpl&&) = default;
};

Connack::Connack() : m_pImpl(new ConnackImpl) {}
Connack::~Connack() = default;

Connack& Connack::operator=(const Connack& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Connack& Connack::operator=(Connack&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Connack::nameImpl() const
{
    return m_pImpl->name();
}

bool Connack::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Connack::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Connack::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Connack::resetImpl()
{
    m_pImpl->reset();
}

bool Connack::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Connack*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Connack::isValidImpl() const
{
    return m_pImpl->isValid();
}

Connack::DataSeq Connack::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Connack::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Connack::Ptr Connack::cloneImpl() const
{
    ImplPtr impl(static_cast<ConnackImpl*>(m_pImpl->clone().release()));
    return Ptr(new Connack(std::move(impl)));
}

void Connack::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Connack::DataSeq Connack::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Connack::FieldsList Connack::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Connack::FieldsList Connack::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Connack::Connack(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
