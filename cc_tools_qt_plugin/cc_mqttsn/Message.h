// Generated by commsdsl2tools_qt v6.3.4

#pragma once

#include "cc_mqttsn/Message.h"
#include "cc_tools_qt/MessageBase.h"
#include "cc_tools_qt_plugin/cc_mqttsn/Version.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

class Message : public
    cc_tools_qt::MessageBase<
        ::cc_mqttsn::Message
    >
{
protected:
    virtual QString idAsStringImpl() const override;
    virtual const QVariantList& extraTransportFieldsPropertiesImpl() const override;
};

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
