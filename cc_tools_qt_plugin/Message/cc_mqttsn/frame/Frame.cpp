// Generated by commsdsl2tools_qt v7.0.2

#include "Frame.h"

#include "cc_mqttsn/frame/Frame.h"
#include "cc_tools_qt/ToolsFrameBase.h"
#include "cc_tools_qt_plugin/Message/cc_mqttsn/Message.h"
#include "cc_tools_qt_plugin/Message/cc_mqttsn/factory/MsgFactory.h"
#include "cc_tools_qt_plugin/Message/cc_mqttsn/frame/FrameTransportMessage.h"
#include "cc_tools_qt_plugin/cc_mqttsn/Version.h"
#include "cc_tools_qt_plugin/cc_mqttsn/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqttsn
{

namespace frame
{

namespace
{
using ProtFrame =
    ::cc_mqttsn::frame::Frame<
        cc_tools_qt_plugin::Message::cc_mqttsn::Message::ProtInterface,
        ::cc_mqttsn::input::AllMessages<cc_tools_qt_plugin::Message::cc_mqttsn::Message::ProtInterface, cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions>,
        cc_tools_qt_plugin::cc_mqttsn::options::DefaultOptions
     >;
}// namespace

class FrameImpl : public
   cc_tools_qt::ToolsFrameBase<
       cc_tools_qt_plugin::Message::cc_mqttsn::Message,
       ProtFrame,
       cc_tools_qt_plugin::Message::cc_mqttsn::factory::MsgFactory,
       cc_tools_qt_plugin::Message::cc_mqttsn::frame::FrameTransportMessage
   >
{
};

Frame::Frame() :
    m_pImpl(new FrameImpl){
}

Frame::~Frame() = default;

cc_tools_qt::ToolsMessagesList Frame::readDataImpl(const cc_tools_qt::ToolsDataInfo& dataInfo, bool final)
{
    return m_pImpl->readData(dataInfo, final);
}

void Frame::updateMessageImpl(cc_tools_qt::ToolsMessage& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc_tools_qt::ToolsMessagePtr Frame::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessage();
}

cc_tools_qt::ToolsMessagePtr Frame::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessage();
}

cc_tools_qt::ToolsMessagePtr Frame::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessage();
}

cc_tools_qt::ToolsMessagesList Frame::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc_tools_qt::ToolsMessagePtr Frame::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return m_pImpl->createMessage(idAsString, idx);
}

} // namespace frame

} // namespace cc_mqttsn

} // namespace Message

} // namespace cc_tools_qt_plugin
