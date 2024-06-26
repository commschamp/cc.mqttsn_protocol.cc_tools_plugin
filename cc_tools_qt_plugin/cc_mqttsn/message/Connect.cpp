// Generated by commsdsl2tools_qt v6.3.3

#include "Connect.h"

#include "cc_mqttsn/message/Connect.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/ClientId.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/Duration.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/Flags.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/ProtocolId.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace message
{

namespace
{

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::ConnectFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Flags;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_flags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_protocolId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::ConnectFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::ProtocolId;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_protocolId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_duration(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::ConnectFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Duration;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_duration(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_clientId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::ConnectFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::ClientId;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_clientId(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(false));
    props.append(createProps_protocolId(false));
    props.append(createProps_duration(false));
    props.append(createProps_clientId(false));
    return props;
}

} // namespace

class ConnectImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Connect<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        ConnectImpl
    >
{
public:
    ConnectImpl() = default;
    ConnectImpl(const ConnectImpl&) = delete;
    ConnectImpl(ConnectImpl&&) = delete;
    virtual ~ConnectImpl() = default;
    ConnectImpl& operator=(const ConnectImpl&) = default;
    ConnectImpl& operator=(ConnectImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
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

Connect::MsgIdParamType Connect::doGetId()
{
    return ::cc_mqttsn::message::Connect<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Connect::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Connect::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Connect::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Connect::resetImpl()
{
    m_pImpl->reset();
}

bool Connect::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Connect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Connect::MsgIdParamType Connect::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Connect::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Connect::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Connect::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Connect::lengthImpl() const
{
    return m_pImpl->length();
}

bool Connect::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
