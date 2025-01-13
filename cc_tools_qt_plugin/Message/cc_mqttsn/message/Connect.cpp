// Generated by commsdsl2tools_qt v7.0.0

#include "Connect.h"

#include "cc_mqttsn/message/Connect.h"
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

class ConnectImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message,
        ::cc_mqttsn::message::Connect,
        ConnectImpl
    >
{
public:
    ConnectImpl() = default;
    ConnectImpl(const ConnectImpl&) = default;
    ConnectImpl(ConnectImpl&&) = default;
    virtual ~ConnectImpl() = default;
    ConnectImpl& operator=(const ConnectImpl&) = default;
    ConnectImpl& operator=(ConnectImpl&&) = default;
};

Connect::Connect() : m_pImpl(new ConnectImpl) {}
Connect::~Connect() = default;

Connect& Connect::operator=(const Connect& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Connect& Connect::operator=(Connect&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Connect::nameImpl() const
{
    return m_pImpl->name();
}

bool Connect::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Connect::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Connect::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Connect::resetImpl()
{
    m_pImpl->reset();
}

bool Connect::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Connect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Connect::isValidImpl() const
{
    return m_pImpl->isValid();
}

Connect::DataSeq Connect::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Connect::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Connect::Ptr Connect::cloneImpl() const
{
    ImplPtr impl(static_cast<ConnectImpl*>(m_pImpl->clone().release()));
    return Ptr(new Connect(std::move(impl)));
}

void Connect::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Connect::DataSeq Connect::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Connect::FieldsList Connect::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Connect::FieldsList Connect::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Connect::Connect(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
