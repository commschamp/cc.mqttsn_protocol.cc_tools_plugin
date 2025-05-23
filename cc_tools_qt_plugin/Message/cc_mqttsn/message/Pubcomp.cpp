// Generated by commsdsl2tools_qt v7.1.0

#include "Pubcomp.h"

#include "cc_mqttsn/message/Pubcomp.h"
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

class PubcompImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message,
        ::cc_mqttsn::message::Pubcomp,
        PubcompImpl
    >
{
public:
    PubcompImpl() = default;
    PubcompImpl(const PubcompImpl&) = default;
    PubcompImpl(PubcompImpl&&) = default;
    virtual ~PubcompImpl() = default;
    PubcompImpl& operator=(const PubcompImpl&) = default;
    PubcompImpl& operator=(PubcompImpl&&) = default;
};

Pubcomp::Pubcomp() : m_pImpl(new PubcompImpl) {}
Pubcomp::~Pubcomp() = default;

Pubcomp& Pubcomp::operator=(const Pubcomp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pubcomp& Pubcomp::operator=(Pubcomp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Pubcomp::nameImpl() const
{
    return m_pImpl->name();
}

bool Pubcomp::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Pubcomp::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Pubcomp::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Pubcomp::resetImpl()
{
    m_pImpl->reset();
}

bool Pubcomp::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Pubcomp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Pubcomp::isValidImpl() const
{
    return m_pImpl->isValid();
}

Pubcomp::DataSeq Pubcomp::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Pubcomp::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Pubcomp::Ptr Pubcomp::cloneImpl() const
{
    ImplPtr impl(static_cast<PubcompImpl*>(m_pImpl->clone().release()));
    return Ptr(new Pubcomp(std::move(impl)));
}

void Pubcomp::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Pubcomp::DataSeq Pubcomp::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Pubcomp::FieldsList Pubcomp::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Pubcomp::FieldsList Pubcomp::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Pubcomp::Pubcomp(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
