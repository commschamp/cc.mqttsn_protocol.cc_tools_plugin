// Generated by commsdsl2tools_qt v6.3.0

#include "Willmsg.h"

#include "cc_mqttsn/message/Willmsg.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/WillMsg.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace message
{

namespace
{

static QVariantMap createProps_willMsg(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::WillmsgFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::WillMsg;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_willMsg(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_willMsg(false));
    return props;
}

} // namespace

class WillmsgImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Willmsg<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        WillmsgImpl
    >
{
public:
    WillmsgImpl() = default;
    WillmsgImpl(const WillmsgImpl&) = delete;
    WillmsgImpl(WillmsgImpl&&) = delete;
    virtual ~WillmsgImpl() = default;
    WillmsgImpl& operator=(const WillmsgImpl&) = default;
    WillmsgImpl& operator=(WillmsgImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willmsg::Willmsg() : m_pImpl(new WillmsgImpl) {}
Willmsg::~Willmsg() = default;

Willmsg& Willmsg::operator=(const Willmsg& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willmsg& Willmsg::operator=(Willmsg&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Willmsg::MsgIdParamType Willmsg::doGetId()
{
    return ::cc_mqttsn::message::Willmsg<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Willmsg::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willmsg::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willmsg::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willmsg::resetImpl()
{
    m_pImpl->reset();
}

bool Willmsg::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Willmsg*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willmsg::MsgIdParamType Willmsg::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willmsg::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willmsg::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willmsg::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willmsg::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willmsg::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin