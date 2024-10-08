// Generated by commsdsl2tools_qt v6.3.4

#include "Publish.h"

#include "cc_mqttsn/message/Publish.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/Data.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/Flags.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/MessageId.h"
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
    using Field = ::cc_mqttsn::message::PublishFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Flags;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_flags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_topicId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::PublishFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::TopicId;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_topicId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_msgId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::PublishFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::MsgId;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_messageId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_data(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::message::PublishFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Data;
    auto props = cc_tools_qt_plugin::cc_mqttsn::field::createProps_data(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(false));
    props.append(createProps_topicId(false));
    props.append(createProps_msgId(false));
    props.append(createProps_data(false));
    return props;
}

} // namespace

class PublishImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Publish<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        PublishImpl
    >
{
public:
    PublishImpl() = default;
    PublishImpl(const PublishImpl&) = delete;
    PublishImpl(PublishImpl&&) = delete;
    virtual ~PublishImpl() = default;
    PublishImpl& operator=(const PublishImpl&) = default;
    PublishImpl& operator=(PublishImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Publish::Publish() : m_pImpl(new PublishImpl) {}
Publish::~Publish() = default;

Publish& Publish::operator=(const Publish& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Publish& Publish::operator=(Publish&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Publish::MsgIdParamType Publish::doGetId()
{
    return ::cc_mqttsn::message::Publish<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Publish::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Publish::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Publish::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Publish::resetImpl()
{
    m_pImpl->reset();
}

bool Publish::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Publish*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Publish::MsgIdParamType Publish::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Publish::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Publish::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Publish::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Publish::lengthImpl() const
{
    return m_pImpl->length();
}

bool Publish::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
