// Generated by commsdsl2tools_qt v6.3.3

#pragma once

#include <QtCore/QVariantList>
#include <memory>
#include "cc_tools_qt_plugin/cc_mqttsn/Message.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqttsn
{

namespace message
{

class PubackImpl;
class Puback : public cc_tools_qt_plugin::cc_mqttsn::Message
{
public:
    Puback();
    Puback(const Puback&) = delete;
    Puback(Puback&&) = delete;
    virtual ~Puback();
    Puback& operator=(const Puback& other);
    Puback& operator=(Puback&&);
    static MsgIdParamType doGetId();
    static constexpr bool hasStaticMsgId() { return true; }
    static constexpr MsgIdType staticMsgId() { return static_cast<MsgIdType>(13U); }

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(cc_tools_qt::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const cc_tools_qt::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<PubackImpl> m_pImpl;
};

} // namespace message

} // namespace cc_mqttsn

} // namespace cc_tools_qt_plugin
