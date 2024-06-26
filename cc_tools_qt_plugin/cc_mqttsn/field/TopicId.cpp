// Generated by commsdsl2tools_qt v6.3.3

#include "TopicId.h"

#include "cc_mqttsn/field/TopicId.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace field
{

QVariantMap createProps_topicId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::field::TopicId<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
}

} // namespace field

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
