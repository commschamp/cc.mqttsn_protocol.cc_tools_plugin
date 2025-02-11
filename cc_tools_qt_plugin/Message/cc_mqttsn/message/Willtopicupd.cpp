// Generated by commsdsl2tools_qt v7.0.3

#include "Willtopicupd.h"

#include "cc_mqttsn/message/Willtopicupd.h"
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

class WilltopicupdImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message,
        ::cc_mqttsn::message::Willtopicupd,
        WilltopicupdImpl
    >
{
public:
    WilltopicupdImpl() = default;
    WilltopicupdImpl(const WilltopicupdImpl&) = default;
    WilltopicupdImpl(WilltopicupdImpl&&) = default;
    virtual ~WilltopicupdImpl() = default;
    WilltopicupdImpl& operator=(const WilltopicupdImpl&) = default;
    WilltopicupdImpl& operator=(WilltopicupdImpl&&) = default;
};

Willtopicupd::Willtopicupd() : m_pImpl(new WilltopicupdImpl) {}
Willtopicupd::~Willtopicupd() = default;

Willtopicupd& Willtopicupd::operator=(const Willtopicupd& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopicupd& Willtopicupd::operator=(Willtopicupd&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willtopicupd::nameImpl() const
{
    return m_pImpl->name();
}

bool Willtopicupd::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Willtopicupd::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Willtopicupd::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Willtopicupd::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopicupd::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Willtopicupd*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Willtopicupd::isValidImpl() const
{
    return m_pImpl->isValid();
}

Willtopicupd::DataSeq Willtopicupd::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Willtopicupd::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Willtopicupd::Ptr Willtopicupd::cloneImpl() const
{
    ImplPtr impl(static_cast<WilltopicupdImpl*>(m_pImpl->clone().release()));
    return Ptr(new Willtopicupd(std::move(impl)));
}

void Willtopicupd::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Willtopicupd::DataSeq Willtopicupd::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Willtopicupd::FieldsList Willtopicupd::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Willtopicupd::FieldsList Willtopicupd::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Willtopicupd::Willtopicupd(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
