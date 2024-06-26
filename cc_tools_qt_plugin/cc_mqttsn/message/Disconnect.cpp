// Generated by commsdsl2tools_qt v6.3.3

#include "Disconnect.h"

#include "cc_mqttsn/message/Disconnect.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/Duration.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace message
{

namespace
{

struct DurationMembers
{
    static QVariantMap createProps_duration(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqttsn::message::DisconnectFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::DurationMembers::Duration;
        auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_duration(Field::name(), serHidden);
        return props;
    }
}; // struct DurationMembers

static QVariantMap createProps_duration(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::DisconnectFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Duration;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .field(DurationMembers::createProps_duration(serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_duration(false));
    return props;
}

} // namespace

class DisconnectImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Disconnect<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        DisconnectImpl
    >
{
public:
    DisconnectImpl() = default;
    DisconnectImpl(const DisconnectImpl&) = delete;
    DisconnectImpl(DisconnectImpl&&) = delete;
    virtual ~DisconnectImpl() = default;
    DisconnectImpl& operator=(const DisconnectImpl&) = default;
    DisconnectImpl& operator=(DisconnectImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Disconnect::Disconnect() : m_pImpl(new DisconnectImpl) {}
Disconnect::~Disconnect() = default;

Disconnect& Disconnect::operator=(const Disconnect& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Disconnect& Disconnect::operator=(Disconnect&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Disconnect::MsgIdParamType Disconnect::doGetId()
{
    return ::cc_mqttsn::message::Disconnect<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Disconnect::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Disconnect::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Disconnect::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Disconnect::resetImpl()
{
    m_pImpl->reset();
}

bool Disconnect::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Disconnect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Disconnect::MsgIdParamType Disconnect::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Disconnect::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Disconnect::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Disconnect::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Disconnect::lengthImpl() const
{
    return m_pImpl->length();
}

bool Disconnect::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
