// Generated by commsdsl2tools_qt v6.3.2

#include "FrameTransportMessage.h"

#include "cc_mqttsn/field/MsgId.h"
#include "cc_mqttsn/field/MsgLengthField.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/MsgId.h"
#include "cc_tools_qt_plugin/cc_mqttsn/field/MsgLengthField.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace frame
{

struct LengthLayer
{
    static QVariantMap createProps_msgLengthField(bool serHidden)
    {
        return cc_tools_qt_plugin::cc_mqttsn::field::createProps_msgLengthField("Length", serHidden);
    }
}; // struct LengthLayer

struct IdLayer
{
    static QVariantMap createProps_msgId(bool serHidden)
    {
        return cc_tools_qt_plugin::cc_mqttsn::field::createProps_msgId("MsgId", serHidden);
    }
}; // struct IdLayer

struct DataLayer
{
    static QVariantMap createProps_data(bool serHidden)
    {
        return cc_tools_qt::property::field::ArrayList().name("Data").serialisedHidden(serHidden).asMap();
    }
}; // struct DataLayer

namespace
{

QVariantList createProps()
{
     QVariantList props;
     props.append(LengthLayer::createProps_msgLengthField(false));
     props.append(IdLayer::createProps_msgId(false));
     props.append(DataLayer::createProps_data(false));
     return props;
}

} // namespace

const QVariantList& FrameTransportMessageFields::props()
{
    static const QVariantList Props = createProps();
    return Props;
}

const QVariantList& FrameTransportMessage::fieldsPropertiesImpl() const
{
    return FrameTransportMessageFields::props();
}

} // namespace frame

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
