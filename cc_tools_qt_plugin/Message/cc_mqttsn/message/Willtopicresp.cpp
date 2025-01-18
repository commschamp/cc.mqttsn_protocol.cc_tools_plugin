// Generated by commsdsl2tools_qt v7.0.2

#include "Willtopicresp.h"

#include "cc_mqttsn/message/Willtopicresp.h"
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

class WilltopicrespImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message,
        ::cc_mqttsn::message::Willtopicresp,
        WilltopicrespImpl
    >
{
public:
    WilltopicrespImpl() = default;
    WilltopicrespImpl(const WilltopicrespImpl&) = default;
    WilltopicrespImpl(WilltopicrespImpl&&) = default;
    virtual ~WilltopicrespImpl() = default;
    WilltopicrespImpl& operator=(const WilltopicrespImpl&) = default;
    WilltopicrespImpl& operator=(WilltopicrespImpl&&) = default;
};

Willtopicresp::Willtopicresp() : m_pImpl(new WilltopicrespImpl) {}
Willtopicresp::~Willtopicresp() = default;

Willtopicresp& Willtopicresp::operator=(const Willtopicresp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopicresp& Willtopicresp::operator=(Willtopicresp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willtopicresp::nameImpl() const
{
    return m_pImpl->name();
}

bool Willtopicresp::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Willtopicresp::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Willtopicresp::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Willtopicresp::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopicresp::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Willtopicresp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Willtopicresp::isValidImpl() const
{
    return m_pImpl->isValid();
}

Willtopicresp::DataSeq Willtopicresp::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Willtopicresp::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Willtopicresp::Ptr Willtopicresp::cloneImpl() const
{
    ImplPtr impl(static_cast<WilltopicrespImpl*>(m_pImpl->clone().release()));
    return Ptr(new Willtopicresp(std::move(impl)));
}

void Willtopicresp::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Willtopicresp::DataSeq Willtopicresp::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Willtopicresp::FieldsList Willtopicresp::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Willtopicresp::FieldsList Willtopicresp::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Willtopicresp::Willtopicresp(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
