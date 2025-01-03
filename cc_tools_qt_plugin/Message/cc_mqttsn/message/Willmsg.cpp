// Generated by commsdsl2tools_qt v7.0.0

#include "Willmsg.h"

#include "cc_mqttsn/message/Willmsg.h"
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

class WillmsgImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message,
        ::cc_mqttsn::message::Willmsg,
        WillmsgImpl
    >
{
public:
    WillmsgImpl() = default;
    WillmsgImpl(const WillmsgImpl&) = default;
    WillmsgImpl(WillmsgImpl&&) = default;
    virtual ~WillmsgImpl() = default;
    WillmsgImpl& operator=(const WillmsgImpl&) = default;
    WillmsgImpl& operator=(WillmsgImpl&&) = default;
};

Willmsg::Willmsg() : m_pImpl(new WillmsgImpl) {}
Willmsg::~Willmsg() = default;

Willmsg& Willmsg::operator=(const Willmsg& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willmsg& Willmsg::operator=(Willmsg&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willmsg::nameImpl() const
{
    return m_pImpl->name();
}

bool Willmsg::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Willmsg::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Willmsg::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Willmsg::resetImpl()
{
    m_pImpl->reset();
}

bool Willmsg::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Willmsg*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Willmsg::isValidImpl() const
{
    return m_pImpl->isValid();
}

Willmsg::DataSeq Willmsg::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Willmsg::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Willmsg::Ptr Willmsg::cloneImpl() const
{
    ImplPtr impl(static_cast<WillmsgImpl*>(m_pImpl->clone().release()));
    return Ptr(new Willmsg(std::move(impl)));
}

void Willmsg::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Willmsg::DataSeq Willmsg::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Willmsg::FieldsList Willmsg::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Willmsg::FieldsList Willmsg::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Willmsg::Willmsg(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
