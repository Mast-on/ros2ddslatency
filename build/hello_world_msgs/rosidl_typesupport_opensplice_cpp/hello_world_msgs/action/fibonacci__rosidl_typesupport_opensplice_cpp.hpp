// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef HELLO_WORLD_MSGS__ACTION__FIBONACCI__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define HELLO_WORLD_MSGS__ACTION__FIBONACCI__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "hello_world_msgs/action/fibonacci__struct.hpp"
#include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_Goal(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Goal & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_Goal_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_Goal(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Goal_ & dds_message,
  hello_world_msgs::action::Fibonacci_Goal & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_Goal(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_Goal(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_Goal(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_Goal)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_Result(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Result & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_Result_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_Result(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Result_ & dds_message,
  hello_world_msgs::action::Fibonacci_Result & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_Result(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_Result(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_Result(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_Result)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_Feedback(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Feedback & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_Feedback_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_Feedback(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & dds_message,
  hello_world_msgs::action::Fibonacci_Feedback & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_Feedback(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_Feedback(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_Feedback(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_Feedback)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_SendGoal_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_SendGoal_Request & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_SendGoal_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & dds_message,
  hello_world_msgs::action::Fibonacci_SendGoal_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_SendGoal_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_SendGoal_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_SendGoal_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_SendGoal_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_SendGoal_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_SendGoal_Response & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_SendGoal_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & dds_message,
  hello_world_msgs::action::Fibonacci_SendGoal_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_SendGoal_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_SendGoal_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_SendGoal_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_SendGoal_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
  hello_world_msgs, action,
  Fibonacci_SendGoal)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_GetResult_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_GetResult_Request & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_GetResult_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & dds_message,
  hello_world_msgs::action::Fibonacci_GetResult_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_GetResult_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_GetResult_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_GetResult_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_GetResult_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_GetResult_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_GetResult_Response & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_GetResult_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & dds_message,
  hello_world_msgs::action::Fibonacci_GetResult_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_GetResult_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_GetResult_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_GetResult_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_GetResult_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
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
  hello_world_msgs, action,
  Fibonacci_GetResult)();

#ifdef __cplusplus
}
#endif
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
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
namespace action
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void register_type__Fibonacci_FeedbackMessage(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_FeedbackMessage & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void publish__Fibonacci_FeedbackMessage(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern void convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & dds_message,
  hello_world_msgs::action::Fibonacci_FeedbackMessage & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
extern bool take__Fibonacci_FeedbackMessage(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
serialize__Fibonacci_FeedbackMessage(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_hello_world_msgs
const char *
deserialize__Fibonacci_FeedbackMessage(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace action
}  // namespace hello_world_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  hello_world_msgs, action,
  Fibonacci_FeedbackMessage)();

#ifdef __cplusplus
}
#endif
#endif  // HELLO_WORLD_MSGS__ACTION__FIBONACCI__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
