// Generated by commsdsl2tools_qt v6.3.0

#include "Willtopicresp.h"

#include "cc_mqttsn/message/Willtopicresp.h"
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
    using Field = ::cc_mqttsn::message::WilltopicrespFields<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::ReturnCode;
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

class WilltopicrespImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqttsn::message::Willtopicresp<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        WilltopicrespImpl
    >
{
public:
    WilltopicrespImpl() = default;
    WilltopicrespImpl(const WilltopicrespImpl&) = delete;
    WilltopicrespImpl(WilltopicrespImpl&&) = delete;
    virtual ~WilltopicrespImpl() = default;
    WilltopicrespImpl& operator=(const WilltopicrespImpl&) = default;
    WilltopicrespImpl& operator=(WilltopicrespImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willtopicresp::Willtopicresp() : m_pImpl(new WilltopicrespImpl) {}
Willtopicresp::~Willtopicresp() = default;

Willtopicresp& Willtopicresp::operator=(const Willtopicresp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopicresp& Willtopicresp::operator=(Willtopicresp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

Willtopicresp::MsgIdParamType Willtopicresp::doGetId()
{
    return ::cc_mqttsn::message::Willtopicresp<cc_tools_qt_plugin::cc_mqttsn::Message, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::doGetId();
}

const char* Willtopicresp::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willtopicresp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willtopicresp::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willtopicresp::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopicresp::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const Willtopicresp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willtopicresp::MsgIdParamType Willtopicresp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willtopicresp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willtopicresp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willtopicresp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willtopicresp::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willtopicresp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin