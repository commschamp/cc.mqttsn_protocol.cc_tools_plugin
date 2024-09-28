// Generated by commsdsl2tools_qt v6.3.4

#include "Qos.h"

#include "cc_mqttsn/field/Qos.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace field
{

QVariantMap createProps_qos(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::field::Qos<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("AtMostOnceDelivery", 0)
            .add("AtLeastOnceDelivery", 1)
            .add("ExactlyOnceDelivery", 2)
            .add("NoGwPublish", 3)
            .asMap();
}

} // namespace field

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
