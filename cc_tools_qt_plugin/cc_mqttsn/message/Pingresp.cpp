// Generated by commsdsl2tools_qt v6.3.3

#include "Pingresp.h"

#include "cc_mqttsn/message/Pingresp.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class PingrespImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Pingresp<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        PingrespImpl
    >
{
public:
    PingrespImpl() = default;
    PingrespImpl(const PingrespImpl&) = delete;
    PingrespImpl(PingrespImpl&&) = delete;
    virtual ~PingrespImpl() = default;
    PingrespImpl& operator=(const PingrespImpl&) = default;
    PingrespImpl& operator=(PingrespImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Pingresp::Pingresp() : m_pImpl(new PingrespImpl) {}
Pingresp::~Pingresp() = default;

Pingresp& Pingresp::operator=(const Pingresp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pingresp& Pingresp::operator=(Pingresp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Pingresp::MsgIdParamType Pingresp::doGetId()
{
    return ::cc_mqttsn::message::Pingresp<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Pingresp::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Pingresp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Pingresp::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Pingresp::resetImpl()
{
    m_pImpl->reset();
}

bool Pingresp::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Pingresp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Pingresp::MsgIdParamType Pingresp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Pingresp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Pingresp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Pingresp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Pingresp::lengthImpl() const
{
    return m_pImpl->length();
}

bool Pingresp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
