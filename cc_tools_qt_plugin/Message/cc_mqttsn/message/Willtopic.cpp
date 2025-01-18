// Generated by commsdsl2tools_qt v7.0.2

#include "Willtopic.h"

#include "cc_mqttsn/message/Willtopic.h"
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

class WilltopicImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message,
        ::cc_mqttsn::message::Willtopic,
        WilltopicImpl
    >
{
public:
    WilltopicImpl() = default;
    WilltopicImpl(const WilltopicImpl&) = default;
    WilltopicImpl(WilltopicImpl&&) = default;
    virtual ~WilltopicImpl() = default;
    WilltopicImpl& operator=(const WilltopicImpl&) = default;
    WilltopicImpl& operator=(WilltopicImpl&&) = default;
};

Willtopic::Willtopic() : m_pImpl(new WilltopicImpl) {}
Willtopic::~Willtopic() = default;

Willtopic& Willtopic::operator=(const Willtopic& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopic& Willtopic::operator=(Willtopic&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willtopic::nameImpl() const
{
    return m_pImpl->name();
}

bool Willtopic::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Willtopic::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Willtopic::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Willtopic::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopic::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Willtopic*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Willtopic::isValidImpl() const
{
    return m_pImpl->isValid();
}

Willtopic::DataSeq Willtopic::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Willtopic::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Willtopic::Ptr Willtopic::cloneImpl() const
{
    ImplPtr impl(static_cast<WilltopicImpl*>(m_pImpl->clone().release()));
    return Ptr(new Willtopic(std::move(impl)));
}

void Willtopic::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Willtopic::DataSeq Willtopic::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Willtopic::FieldsList Willtopic::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Willtopic::FieldsList Willtopic::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Willtopic::Willtopic(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
