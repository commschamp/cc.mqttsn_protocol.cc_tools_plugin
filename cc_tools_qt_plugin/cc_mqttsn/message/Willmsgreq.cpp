// Generated by commsdsl2tools_qt v6.3.2

#include "Willmsgreq.h"

#include "cc_mqttsn/message/Willmsgreq.h"
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

class WillmsgreqImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Willmsgreq<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        WillmsgreqImpl
    >
{
public:
    WillmsgreqImpl() = default;
    WillmsgreqImpl(const WillmsgreqImpl&) = delete;
    WillmsgreqImpl(WillmsgreqImpl&&) = delete;
    virtual ~WillmsgreqImpl() = default;
    WillmsgreqImpl& operator=(const WillmsgreqImpl&) = default;
    WillmsgreqImpl& operator=(WillmsgreqImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willmsgreq::Willmsgreq() : m_pImpl(new WillmsgreqImpl) {}
Willmsgreq::~Willmsgreq() = default;

Willmsgreq& Willmsgreq::operator=(const Willmsgreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willmsgreq& Willmsgreq::operator=(Willmsgreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Willmsgreq::MsgIdParamType Willmsgreq::doGetId()
{
    return ::cc_mqttsn::message::Willmsgreq<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Willmsgreq::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willmsgreq::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willmsgreq::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willmsgreq::resetImpl()
{
    m_pImpl->reset();
}

bool Willmsgreq::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Willmsgreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willmsgreq::MsgIdParamType Willmsgreq::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willmsgreq::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willmsgreq::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willmsgreq::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willmsgreq::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willmsgreq::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
