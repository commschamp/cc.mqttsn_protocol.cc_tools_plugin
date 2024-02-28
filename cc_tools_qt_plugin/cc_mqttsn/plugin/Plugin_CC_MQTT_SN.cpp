// Generated by commsdsl2tools_qt v6.3.0

#include "Plugin_CC_MQTT_SN.h"

#include "Protocol_CC_MQTT_SN.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace plugin
{

Plugin_CC_MQTT_SN::Plugin_CC_MQTT_SN() :
    m_protocol(new Protocol_CC_MQTT_SN())
{
    pluginProperties()
        .setProtocolCreateFunc(
            [this]() noexcept -> cc_tools_qt::ProtocolPtr
            {
                return m_protocol;
            })
    ;
}

Plugin_CC_MQTT_SN::~Plugin_CC_MQTT_SN() = default;

} // namespace plugin

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
