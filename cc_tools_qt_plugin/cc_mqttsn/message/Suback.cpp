// Generated by commsdsl2tools_qt v6.3.2

#include "Suback.h"

#include "cc_mqttsn/message/Suback.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/Flags.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/MessageId.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/ReturnCode.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/TopicId.h"
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
    using Field = ::cc_mqttsn::message::SubackFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Flags;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_flags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_topicId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::SubackFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::TopicId;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_topicId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_msgId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::SubackFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::MsgId;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_messageId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_returnCode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::SubackFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::ReturnCode;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_returnCode(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(false));
    props.append(createProps_topicId(false));
    props.append(createProps_msgId(false));
    props.append(createProps_returnCode(false));
    return props;
}

} // namespace

class SubackImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Suback<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        SubackImpl
    >
{
public:
    SubackImpl() = default;
    SubackImpl(const SubackImpl&) = delete;
    SubackImpl(SubackImpl&&) = delete;
    virtual ~SubackImpl() = default;
    SubackImpl& operator=(const SubackImpl&) = default;
    SubackImpl& operator=(SubackImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Suback::Suback() : m_pImpl(new SubackImpl) {}
Suback::~Suback() = default;

Suback& Suback::operator=(const Suback& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Suback& Suback::operator=(Suback&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Suback::MsgIdParamType Suback::doGetId()
{
    return ::cc_mqttsn::message::Suback<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Suback::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Suback::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Suback::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Suback::resetImpl()
{
    m_pImpl->reset();
}

bool Suback::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Suback*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Suback::MsgIdParamType Suback::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Suback::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Suback::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Suback::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Suback::lengthImpl() const
{
    return m_pImpl->length();
}

bool Suback::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
