// Generated by commsdsl2tools_qt v6.3.3

#pragma once

#include <tuple>
#include "cc_tools_qt_plugin/cc_mqttsn/message/Advertise.h"
#include "cc_tools_qt_plugin/cc_mqttsn/message/Fwd.h"
#include "cc_tools_qt_plugin/cc_mqttsn/message/Gwinfo.h"
#include "cc_tools_qt_plugin/cc_mqttsn/message/Searchgw.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace input
{

using FwdMessages =
    std::tuple<
        cc_tools_qt_plugin::cc_mqttsn::message::Advertise,
        cc_tools_qt_plugin::cc_mqttsn::message::Searchgw,
        cc_tools_qt_plugin::cc_mqttsn::message::Gwinfo,
        cc_tools_qt_plugin::cc_mqttsn::message::Fwd
    >;

} // namespace input

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin