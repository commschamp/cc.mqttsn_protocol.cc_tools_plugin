// Generated by commsdsl2tools_qt v6.3.4

#include "MsgLengthField.h"

#include "cc_mqttsn/field/MsgLengthField.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace field
{

namespace
{

struct MsgLengthFieldMembers
{
    static QVariantMap createProps_short(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqttsn::field::MsgLengthFieldMembers<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Short;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .displayOffset(1)
                .asMap();
    }

    struct LongMembers
    {
        static QVariantMap createProps_long(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_mqttsn::field::MsgLengthFieldMembers<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::LongMembers::Long;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .displayOffset(3)
                    .asMap();
        }
    }; // struct LongMembers

    static QVariantMap createProps_long(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqttsn::field::MsgLengthFieldMembers<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>::Long;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .uncheckable()
                .field(LongMembers::createProps_long(serHidden))
                .asMap();
    }
}; // struct MsgLengthFieldMembers

} // namespace

QVariantMap createProps_msgLengthField(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqttsn::field::MsgLengthField<cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(MsgLengthFieldMembers::createProps_short(serHidden))
            .add(MsgLengthFieldMembers::createProps_long(serHidden))
            .serialisedHidden()
            .asMap();
}

} // namespace field

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
