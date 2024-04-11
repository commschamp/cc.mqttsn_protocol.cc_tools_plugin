// Generated by commsdsl2tools_qt v6.3.2

#include "Pubrel.h"

#include "cc_mqttsn/message/Pubrel.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/MessageId.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::PubrelFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::MsgId;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_messageId(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId(false));
    return props;
}

} // namespace

class PubrelImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Pubrel<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        PubrelImpl
    >
{
public:
    PubrelImpl() = default;
    PubrelImpl(const PubrelImpl&) = delete;
    PubrelImpl(PubrelImpl&&) = delete;
    virtual ~PubrelImpl() = default;
    PubrelImpl& operator=(const PubrelImpl&) = default;
    PubrelImpl& operator=(PubrelImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Pubrel::Pubrel() : m_pImpl(new PubrelImpl) {}
Pubrel::~Pubrel() = default;

Pubrel& Pubrel::operator=(const Pubrel& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pubrel& Pubrel::operator=(Pubrel&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Pubrel::MsgIdParamType Pubrel::doGetId()
{
    return ::cc_mqttsn::message::Pubrel<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Pubrel::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Pubrel::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Pubrel::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Pubrel::resetImpl()
{
    m_pImpl->reset();
}

bool Pubrel::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Pubrel*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Pubrel::MsgIdParamType Pubrel::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Pubrel::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Pubrel::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Pubrel::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Pubrel::lengthImpl() const
{
    return m_pImpl->length();
}

bool Pubrel::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
