// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <tuple>
#include <QtCore/QVariantList>
#include "cc_tools_qt/TransportMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"
#include "cc_mqttsn/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_mqttsn/Message.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace frame
{

struct FrameTransportMessageFields
{
    using All =
        std::tuple<
            ::cc_mqttsn::field::MsgLengthField<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
            ::cc_mqttsn::field::MsgId<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
            ::cc_mqttsn::frame::FrameLayers<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Data::Field
        >;
    static const QVariantList& props();
};

class FrameTransportMessage : public
    cc_tools_qt::TransportMessageBase<
        cc_tools_qt_plugin::cc_mqttsn::Message,
        FrameTransportMessageFields::All
    >
{
protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace frame

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin