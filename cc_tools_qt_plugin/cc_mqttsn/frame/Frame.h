// Generated by commsdsl2tools_qt v6.3.2

#pragma once

#include "cc_mqttsn/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_mqttsn/Message.h"
#include "cc_tools_qt_plugin/cc_mqttsn/Version.h"
#include "cc_tools_qt_plugin/cc_mqttsn/input/AllMessages.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/MsgFactoryFrameOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace frame
{

using Frame =
    ::cc_mqttsn::frame::Frame<
        cc_tools_qt_plugin::cc_mqttsn::Message,
        cc_tools_qt_plugin::cc_mqttsn::input::AllMessages,
        cc_tools_qt_plugin::cc_mqttsn::options::MsgFactoryFrameOptions
    >;

} // namespace frame

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
