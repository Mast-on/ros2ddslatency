// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef HELLO_WORLD_MSGS__SRV__SET_MESSAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define HELLO_WORLD_MSGS__SRV__SET_MESSAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "hello_world_msgs/srv/set_message__struct.hpp"
#include "hello_world_msgs/srv/dds_opensplice/ccpp_SetMessage_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hello_world_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace hello_world_msgs
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__SetMessage_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::srv::SetMessage_Request & ros_message,
  hello_world_msgs::srv::dds_::SetMessage_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__SetMessage_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::srv::dds_::SetMessage_Request_ & dds_message,
  hello_world_msgs::srv::SetMessage_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__SetMessage_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__SetMessage_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__SetMessage_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, srv,
  SetMessage_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/srv/set_message__struct.hpp"
// already included above
// #include "hello_world_msgs/srv/dds_opensplice/ccpp_SetMessage_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace hello_world_msgs
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__SetMessage_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::srv::SetMessage_Response & ros_message,
  hello_world_msgs::srv::dds_::SetMessage_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__SetMessage_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::srv::dds_::SetMessage_Response_ & dds_message,
  hello_world_msgs::srv::SetMessage_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__SetMessage_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__SetMessage_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__SetMessage_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, srv,
  SetMessage_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "hello_world_msgs/srv/set_message__struct.hpp"
// already included above
// #include "hello_world_msgs/srv/dds_opensplice/ccpp_SetMessage_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, srv,
  SetMessage)();

#ifdef __cplusplus
}
#endif
#endif  // HELLO_WORLD_MSGS__SRV__SET_MESSAGE__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
