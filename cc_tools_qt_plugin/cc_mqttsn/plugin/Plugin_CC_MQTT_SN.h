// Generated by commsdsl2tools_qt v7.0.0

#pragma once

#include "cc_tools_qt/ToolsPlugin.h"

#include <QtCore/QObject>
#include <QtCore/QtPlugin>

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace plugin
{

class Plugin_CC_MQTT_SN : public cc_tools_qt::ToolsPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cc.MqttSnProtocolPlugin" FILE "Plugin_CC_MQTT_SN.json")
    Q_INTERFACES(cc_tools_qt::ToolsPlugin)
    using Base = cc_tools_qt::ToolsPlugin;

public:
    Plugin_CC_MQTT_SN();
    virtual ~Plugin_CC_MQTT_SN();

protected:
    virtual cc_tools_qt::ToolsProtocolPtr createProtocolImpl() override;
};

} // namespace plugin

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
