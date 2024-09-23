// Generated by commsdsl2tools_qt v6.3.4

#include "Protocol_CC_MQTT_SN.h"

#include <cassert>
#include "cc_tools_qt/ProtocolBase.h"
#include "cc_tools_qt_plugin/cc_mqttsn/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_mqttsn/frame/FrameTransportMessage.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace plugin
{

class Protocol_CC_MQTT_SNImpl : public
    cc_tools_qt::ProtocolBase<
        cc_tools_qt_plugin::cc_mqttsn::frame::Frame,
        cc_tools_qt_plugin::cc_mqttsn::frame::FrameTransportMessage
    >
{
    using Base =
        cc_tools_qt::ProtocolBase<
            cc_tools_qt_plugin::cc_mqttsn::frame::Frame,
            cc_tools_qt_plugin::cc_mqttsn::frame::FrameTransportMessage
        >;
public:
    friend class cc_tools_qt_plugin::cc_mqttsn::plugin::Protocol_CC_MQTT_SN;

    Protocol_CC_MQTT_SNImpl() = default;
    virtual ~Protocol_CC_MQTT_SNImpl() = default;

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("CC MQTT-SN");
        return Str;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;
};

Protocol_CC_MQTT_SN::Protocol_CC_MQTT_SN()
  : m_pImpl(new Protocol_CC_MQTT_SNImpl())
{
}

Protocol_CC_MQTT_SN::~Protocol_CC_MQTT_SN() = default;

const QString& Protocol_CC_MQTT_SN::nameImpl() const
{
    return m_pImpl->name();
}

Protocol_CC_MQTT_SN::MessagesList Protocol_CC_MQTT_SN::readImpl(const cc_tools_qt::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc_tools_qt::DataInfoPtr Protocol_CC_MQTT_SN::writeImpl(cc_tools_qt::Message& msg)
{
    return m_pImpl->write(msg);
}

Protocol_CC_MQTT_SN::MessagesList Protocol_CC_MQTT_SN::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc_tools_qt::MessagePtr Protocol_CC_MQTT_SN::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc_tools_qt::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

Protocol_CC_MQTT_SN::UpdateStatus Protocol_CC_MQTT_SN::updateMessageImpl(cc_tools_qt::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc_tools_qt::MessagePtr Protocol_CC_MQTT_SN::cloneMessageImpl(const cc_tools_qt::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc_tools_qt::MessagePtr Protocol_CC_MQTT_SN::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc_tools_qt::MessagePtr Protocol_CC_MQTT_SN::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc_tools_qt::MessagePtr Protocol_CC_MQTT_SN::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
