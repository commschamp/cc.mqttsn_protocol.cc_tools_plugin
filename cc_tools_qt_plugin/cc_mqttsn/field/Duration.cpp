// Generated by commsdsl2tools_qt v6.3.2

#include "Duration.h"

#include "cc_mqttsn/field/Duration.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace field
{

QVariantMap createProps_duration(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::field::Duration<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
}

} // namespace field

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
