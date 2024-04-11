// Generated by commsdsl2tools_qt v6.3.2

#include "Connack.h"

#include "cc_mqttsn/message/Connack.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/ReturnCode.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace message
{

namespace
{

static QVariantMap createProps_returnCode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::ConnackFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::ReturnCode;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_returnCode(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_returnCode(false));
    return props;
}

} // namespace

class ConnackImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Connack<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        ConnackImpl
    >
{
public:
    ConnackImpl() = default;
    ConnackImpl(const ConnackImpl&) = delete;
    ConnackImpl(ConnackImpl&&) = delete;
    virtual ~ConnackImpl() = default;
    ConnackImpl& operator=(const ConnackImpl&) = default;
    ConnackImpl& operator=(ConnackImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
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

Connack::MsgIdParamType Connack::doGetId()
{
    return ::cc_mqttsn::message::Connack<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Connack::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Connack::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Connack::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Connack::resetImpl()
{
    m_pImpl->reset();
}

bool Connack::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Connack*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Connack::MsgIdParamType Connack::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Connack::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Connack::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Connack::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Connack::lengthImpl() const
{
    return m_pImpl->length();
}

bool Connack::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
