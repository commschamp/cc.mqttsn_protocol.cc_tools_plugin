// Generated by commsdsl2tools_qt v6.3.0

#include "Pubrec.h"

#include "cc_mqttsn/message/Pubrec.h"
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
    using Field = ::cc_mqttsn::message::PubrecFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::MsgId;
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

class PubrecImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Pubrec<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        PubrecImpl
    >
{
public:
    PubrecImpl() = default;
    PubrecImpl(const PubrecImpl&) = delete;
    PubrecImpl(PubrecImpl&&) = delete;
    virtual ~PubrecImpl() = default;
    PubrecImpl& operator=(const PubrecImpl&) = default;
    PubrecImpl& operator=(PubrecImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Pubrec::Pubrec() : m_pImpl(new PubrecImpl) {}
Pubrec::~Pubrec() = default;

Pubrec& Pubrec::operator=(const Pubrec& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pubrec& Pubrec::operator=(Pubrec&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Pubrec::MsgIdParamType Pubrec::doGetId()
{
    return ::cc_mqttsn::message::Pubrec<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Pubrec::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Pubrec::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Pubrec::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Pubrec::resetImpl()
{
    m_pImpl->reset();
}

bool Pubrec::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Pubrec*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Pubrec::MsgIdParamType Pubrec::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Pubrec::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Pubrec::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Pubrec::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Pubrec::lengthImpl() const
{
    return m_pImpl->length();
}

bool Pubrec::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin