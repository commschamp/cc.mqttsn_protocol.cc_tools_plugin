cmake_minimum_required (VERSION 3.10)
project ("cc_mqttsn_cc_tools_qt_plugin")

# Configuration variables
# OPT_QT_MAJOR_VERSION - The major Qt version, defaults to 5

######################################################################

if ("${OPT_QT_MAJOR_VERSION}" STREQUAL "")
    set(OPT_QT_MAJOR_VERSION 5)
endif()

if ("${CMAKE_CXX_STANDARD}" STREQUAL "")
    set(CMAKE_CXX_STANDARD 17)
endif()

if ("${CMAKE_CXX_STANDARD}" VERSION_LESS "17")
    message (FATAL_ERROR "Use C++17 or later (instead of C++${CMAKE_CXX_STANDARD}) to compile this project.")
endif()

find_package(LibComms REQUIRED)
find_package(cc_mqttsn REQUIRED)
find_package(cc_tools_qt REQUIRED)
find_package(Qt${OPT_QT_MAJOR_VERSION} REQUIRED COMPONENTS Widgets Core)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_AUTORCC ON)

include(${LibComms_DIR}/CC_Compile.cmake)
cc_compile(WARN_AS_ERR)
cc_msvc_force_warn_opt(/W4)

include(GNUInstallDirs)

set (CORE_LIB_NAME "cc_tools_qt_plugin_cc_mqttsn_protocol_core")

######################################################################

function (cc_plugin_core)
    set (name ${CORE_LIB_NAME})
    set (src
        cc_tools_qt_plugin/cc_mqttsn/field/ClientId.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/Data.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/Duration.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/Flags.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/GwAdd.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/GwId.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/MessageId.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/MsgId.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/MsgLengthField.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/ProtocolId.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/Qos.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/Radius.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/ReturnCode.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/TopicId.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/TopicIdType.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/TopicName.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/WillMsg.cpp
        cc_tools_qt_plugin/cc_mqttsn/field/WillTopic.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Advertise.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Connack.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Connect.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Disconnect.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Gwinfo.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Pingreq.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Pingresp.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Puback.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Pubcomp.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Publish.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Pubrec.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Pubrel.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Regack.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Register.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Searchgw.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Suback.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Subscribe.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Unsuback.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Unsubscribe.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willmsg.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willmsgreq.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willmsgresp.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willmsgupd.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willtopic.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willtopicreq.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willtopicresp.cpp
        cc_tools_qt_plugin/cc_mqttsn/message/Willtopicupd.cpp
        cc_tools_qt_plugin/cc_mqttsn/Message.cpp
        cc_tools_qt_plugin/cc_mqttsn/frame/FrameTransportMessage.cpp
        cc_tools_qt_plugin/cc_mqttsn/factory/AllMessagesDynMemMsgFactory.cpp
    )

    add_library (${name} STATIC ${src})
    target_link_libraries (${name} PUBLIC cc::cc_mqttsn cc::comms cc::cc_tools_qt Qt${OPT_QT_MAJOR_VERSION}::Widgets Qt${OPT_QT_MAJOR_VERSION}::Core)
    target_include_directories (${name} PUBLIC ${PROJECT_SOURCE_DIR})
    target_compile_options(${name} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/bigobj /wd4127 /wd5054>
        $<$<CXX_COMPILER_ID:GNU>:-ftemplate-depth=2048 -fconstexpr-depth=4096 -Wno-unused-local-typedefs>
        $<$<CXX_COMPILER_ID:Clang>:-ftemplate-depth=2048 -fconstexpr-depth=4096 -Wno-unused-local-typedefs>
    )

endfunction()

######################################################################

function (cc_plugin protocol has_config_widget)
    string(TOLOWER "cc_tools_plugin_${protocol}" name)

    if (NOT "${name}" MATCHES ".*_protocol$")
        string(APPEND name "_protocol")
    endif ()

    set (meta_file "${CMAKE_CURRENT_SOURCE_DIR}/cc_tools_qt_plugin/cc_mqttsn/plugin/Plugin_${protocol}.json")
    set (stamp_file "${CMAKE_CURRENT_BINARY_DIR}/${protocol}_refresh_stamp.txt")

    if ((NOT EXISTS ${stamp_file}) OR (${meta_file} IS_NEWER_THAN ${stamp_file}))
        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/cc_tools_qt_plugin/cc_mqttsn/plugin/Plugin_${protocol}.h)

        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${stamp_file})
    endif ()

    set (src
        cc_tools_qt_plugin/cc_mqttsn/plugin/Protocol_${protocol}.cpp
        cc_tools_qt_plugin/cc_mqttsn/plugin/Plugin_${protocol}.cpp
        cc_tools_qt_plugin/cc_mqttsn/plugin/Plugin_${protocol}.h
    )

    if (has_config_widget)
        list (APPEND src cc_tools_qt_plugin/cc_mqttsn/plugin/ConfigWidget_${protocol}.cpp)
    endif ()

    set(extra_link_opts)
    if (CMAKE_COMPILER_IS_GNUCC)
        set(extra_link_opts "-Wl,--no-undefined")
    endif ()

    add_library (${name} MODULE ${src} ${moc})
    target_link_libraries (${name} ${CORE_LIB_NAME} cc::cc_tools_qt Qt${OPT_QT_MAJOR_VERSION}::Widgets Qt${OPT_QT_MAJOR_VERSION}::Core ${extra_link_opts})
    target_compile_options(${name} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/bigobj /wd4127 /wd5054>
        $<$<CXX_COMPILER_ID:GNU>:-ftemplate-depth=2048 -fconstexpr-depth=4096>
        $<$<CXX_COMPILER_ID:Clang>:-ftemplate-depth=2048 -fconstexpr-depth=4096>
    )

    install (
        TARGETS ${name}
        DESTINATION ${CMAKE_INSTALL_FULL_LIBDIR}/cc_tools_qt/plugin)

    install (
        FILES cc_tools_qt_plugin/cc_mqttsn/plugin/${protocol}.cfg
        DESTINATION ${CMAKE_INSTALL_FULL_DATAROOTDIR}/cc_tools_qt)

endfunction()

######################################################################

if (TARGET cc::cc_tools_qt)
    get_target_property(cc_inc cc::cc_tools_qt INTERFACE_INCLUDE_DIRECTORIES)

    if (NOT cc_inc)
        message (FATAL_ERROR "No include directories are specified for cc::cc_tools_qt")
    endif ()

    # Global include is required for "moc"
    include_directories (${cc_inc})
endif ()

cc_plugin_core()

cc_plugin ("CC_MQTT_SN" FALSE)
