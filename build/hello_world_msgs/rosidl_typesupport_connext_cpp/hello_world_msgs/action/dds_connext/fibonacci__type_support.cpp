// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from hello_world_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_Goal()
{
  return hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Goal & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_Goal_ & dds_message)
{
  // member.name order
  dds_message.order_ =
    ros_message.order;

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Goal_ & dds_message,
  hello_world_msgs::action::Fibonacci_Goal & ros_message)
{
  // member.name order
  ros_message.order =
    dds_message.order_;

  return true;
}

bool
to_cdr_stream__Fibonacci_Goal(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_Goal & ros_message =
    *(const hello_world_msgs::action::Fibonacci_Goal *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_Goal_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_Goal_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_Goal_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_Goal_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_Goal(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_Goal_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_Goal_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_Goal & ros_message =
    *(hello_world_msgs::action::Fibonacci_Goal *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_Goal__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_Goal",
  &get_type_code__Fibonacci_Goal,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_Goal,
  &to_message__Fibonacci_Goal
};

static rosidl_message_type_support_t _Fibonacci_Goal__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_Goal>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_Goal__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_Goal)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_Goal__handle;
}

#ifdef __cplusplus
}
#endif
#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include <ndds/connext_cpp/connext_cpp_requester_details.h>
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/service_type_support.h"
#include "rosidl_typesupport_connext_cpp/service_type_support_decl.hpp"
#include "hello_world_msgs/action/fibonacci__struct.hpp"
#include "hello_world_msgs/action/dds_connext/Fibonacci_Support.h"
#include "hello_world_msgs/action/dds_connext/Fibonacci_Plugin.h"

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace dds_
{
class UUID_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID &,
  unique_identifier_msgs::msg::dds_::UUID_ &);
bool convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ &,
  unique_identifier_msgs::msg::UUID &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs
namespace hello_world_msgs
{
namespace action
{
namespace dds_
{
class Fibonacci_Goal_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Goal &,
  hello_world_msgs::action::dds_::Fibonacci_Goal_ &);
bool convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Goal_ &,
  hello_world_msgs::action::Fibonacci_Goal &);
}  // namespace typesupport_connext_cpp
}  // namespace action
}  // namespace hello_world_msgs


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_SendGoal_Request()
{
  return hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_SendGoal_Request & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & dds_message)
{
  // member.name goal_id
  if (
    !unique_identifier_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.goal_id,
      dds_message.goal_id_))
  {
    return false;
  }

  // member.name goal
  if (
    !hello_world_msgs::action::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.goal,
      dds_message.goal_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & dds_message,
  hello_world_msgs::action::Fibonacci_SendGoal_Request & ros_message)
{
  // member.name goal_id
  if (
    !unique_identifier_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.goal_id_,
      ros_message.goal_id))
  {
    return false;
  }

  // member.name goal
  if (
    !hello_world_msgs::action::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.goal_,
      ros_message.goal))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__Fibonacci_SendGoal_Request(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_SendGoal_Request & ros_message =
    *(const hello_world_msgs::action::Fibonacci_SendGoal_Request *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_SendGoal_Request(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_SendGoal_Request & ros_message =
    *(hello_world_msgs::action::Fibonacci_SendGoal_Request *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_SendGoal_Request__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_SendGoal_Request",
  &get_type_code__Fibonacci_SendGoal_Request,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_SendGoal_Request,
  &to_message__Fibonacci_SendGoal_Request
};

static rosidl_message_type_support_t _Fibonacci_SendGoal_Request__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_SendGoal_Request>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_SendGoal_Request)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace dds_
{
class Time_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const builtin_interfaces::msg::Time &,
  builtin_interfaces::msg::dds_::Time_ &);
bool convert_dds_message_to_ros(
  const builtin_interfaces::msg::dds_::Time_ &,
  builtin_interfaces::msg::Time &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_SendGoal_Response()
{
  return hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_SendGoal_Response & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & dds_message)
{
  // member.name accepted
  dds_message.accepted_ =
    ros_message.accepted;

  // member.name stamp
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.stamp,
      dds_message.stamp_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & dds_message,
  hello_world_msgs::action::Fibonacci_SendGoal_Response & ros_message)
{
  // member.name accepted
  ros_message.accepted =
    dds_message.accepted_ == DDS_BOOLEAN_TRUE;

  // member.name stamp
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.stamp_,
      ros_message.stamp))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__Fibonacci_SendGoal_Response(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_SendGoal_Response & ros_message =
    *(const hello_world_msgs::action::Fibonacci_SendGoal_Response *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_SendGoal_Response(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_SendGoal_Response & ros_message =
    *(hello_world_msgs::action::Fibonacci_SendGoal_Response *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_SendGoal_Response__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_SendGoal_Response",
  &get_type_code__Fibonacci_SendGoal_Response,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_SendGoal_Response,
  &to_message__Fibonacci_SendGoal_Response
};

static rosidl_message_type_support_t _Fibonacci_SendGoal_Response__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_SendGoal_Response>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_SendGoal_Response)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;


namespace hello_world_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

void * create_requester__Fibonacci_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  if (!untyped_participant || !request_topic_str || !response_topic_str || !untyped_reader) {
    return NULL;
  }
  auto _allocator = allocator ? allocator : &malloc;

  DDSDomainParticipant * participant = static_cast<DDSDomainParticipant *>(untyped_participant);
  const DDS_DataReaderQos * datareader_qos = static_cast<const DDS_DataReaderQos *>(untyped_datareader_qos);
  const DDS_DataWriterQos * datawriter_qos = static_cast<const DDS_DataWriterQos *>(untyped_datawriter_qos);
  connext::RequesterParams requester_params(participant);

  // we create separate publishers and subscribers
  // because the default publisher is a singleton within
  // the replier/requester context in connext.
  // if we use the implicit one, every service/client will
  // overwrite the QoS of all previous instances.
  DDS::Publisher * publisher = participant->create_publisher(
    DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (publisher == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of publisher for requester");
    return NULL;
  }
  DDS::Subscriber * subscriber = participant->create_subscriber(
    DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (subscriber == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of subscriber for requester");
    return NULL;
  }
  requester_params.publisher(publisher);
  requester_params.subscriber(subscriber);
  requester_params.request_topic_name(request_topic_str);
  requester_params.reply_topic_name(response_topic_str);
  requester_params.datareader_qos(*datareader_qos);
  requester_params.datawriter_qos(*datawriter_qos);

  RequesterType * requester = static_cast<RequesterType *>(_allocator(sizeof(RequesterType)));
  try {
    new (requester) RequesterType(requester_params);
  } catch (...) {
    RMW_SET_ERROR_MSG("C++ exception during construction of Requester");
    return NULL;
  }

  *untyped_reader = requester->get_reply_datareader();
  *untyped_writer = requester->get_request_datawriter();
  return requester;
}

const char * destroy_requester__Fibonacci_SendGoal(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  auto requester = static_cast<RequesterType *>(untyped_requester);

  requester->~RequesterType();
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

int64_t send_request__Fibonacci_SendGoal(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using ROSRequestType = hello_world_msgs::action::Fibonacci_SendGoal_Request;
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  connext::WriteSample<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_> request;
  const ROSRequestType & ros_request = *(
    static_cast<const ROSRequestType *>(untyped_ros_request));
  hello_world_msgs::action::typesupport_connext_cpp::convert_ros_message_to_dds(
    ros_request, request.data());

  RequesterType * requester = static_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

void * create_replier__Fibonacci_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  if (!untyped_participant || !request_topic_str || !response_topic_str || !untyped_reader) {
    return NULL;
  }
  auto _allocator = allocator ? allocator : &malloc;

  DDSDomainParticipant * participant = static_cast<DDSDomainParticipant *>(untyped_participant);
  const DDS_DataReaderQos * datareader_qos = static_cast<const DDS_DataReaderQos *>(untyped_datareader_qos);
  const DDS_DataWriterQos * datawriter_qos = static_cast<const DDS_DataWriterQos *>(untyped_datawriter_qos);
  connext::ReplierParams<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  > replier_params(participant);

  // we create separate publishers and subscribers
  // because the default publisher is a singleton within
  // the replier/requester context in connext.
  // if we use the implicit one, every service/client will
  // overwrite the QoS of all previous instances.
  DDS::Publisher * publisher = participant->create_publisher(
    DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (publisher == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of publisher for replier");
    return NULL;
  }
  DDS::Subscriber * subscriber = participant->create_subscriber(
    DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (subscriber == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of subscriber for replier");
    return NULL;
  }
  replier_params.publisher(publisher);
  replier_params.subscriber(subscriber);
  replier_params.request_topic_name(request_topic_str);
  replier_params.reply_topic_name(response_topic_str);
  replier_params.datareader_qos(*datareader_qos);
  replier_params.datawriter_qos(*datawriter_qos);

  ReplierType * replier = static_cast<ReplierType *>(_allocator(sizeof(ReplierType)));
  try {
    new (replier) ReplierType(replier_params);
  } catch (...) {
    RMW_SET_ERROR_MSG("C++ exception during construction of Requester");
    return NULL;
  }

  *untyped_reader = replier->get_request_datareader();
  *untyped_writer = replier->get_reply_datawriter();
  return replier;
}

const char * destroy_replier__Fibonacci_SendGoal(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  auto replier = static_cast<ReplierType *>(untyped_replier);

  replier->~ReplierType();
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(replier);
  return nullptr;
}

bool take_request__Fibonacci_SendGoal(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  using ROSRequestType = hello_world_msgs::action::Fibonacci_SendGoal_Request;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = static_cast<ReplierType *>(untyped_replier);

  ROSRequestType & ros_request = *static_cast<ROSRequestType *>(untyped_ros_request);

  connext::Sample<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  bool converted =
    hello_world_msgs::action::typesupport_connext_cpp::convert_dds_message_to_ros(request.data(), ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  return true;
}

bool take_response__Fibonacci_SendGoal(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  using ROSResponseType = hello_world_msgs::action::Fibonacci_SendGoal_Response;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = static_cast<RequesterType *>(untyped_requester);

  ROSResponseType & ros_response = *static_cast<ROSResponseType *>(untyped_ros_response);

  connext::Sample<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->sequence_number = sequence_number;

  bool converted =
    hello_world_msgs::action::typesupport_connext_cpp::convert_dds_message_to_ros(response.data(), ros_response);
  return converted;
}

bool send_response__Fibonacci_SendGoal(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ROSResponseType = const hello_world_msgs::action::Fibonacci_SendGoal_Response;
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_> response;
  ROSResponseType & ros_response = *(reinterpret_cast<ROSResponseType *>(untyped_ros_response));
  bool converted =
    hello_world_msgs::action::typesupport_connext_cpp::convert_ros_message_to_dds(ros_response, response.data());
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = static_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

void *
get_request_datawriter__Fibonacci_SendGoal(void * untyped_requester)
{
  if (!untyped_requester) {
    return NULL;
  }
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);
  return requester->get_request_datawriter();
}

void *
get_reply_datareader__Fibonacci_SendGoal(void * untyped_requester)
{
  if (!untyped_requester) {
    return NULL;
  }
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);
  return requester->get_reply_datareader();
}

void *
get_request_datareader__Fibonacci_SendGoal(void * untyped_replier)
{
  if (!untyped_replier) {
    return NULL;
  }
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);
  return replier->get_request_datareader();
}

void *
get_reply_datawriter__Fibonacci_SendGoal(void * untyped_replier)
{
  if (!untyped_replier) {
    return NULL;
  }
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);
  return replier->get_reply_datawriter();
}

static service_type_support_callbacks_t _Fibonacci_SendGoal__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_SendGoal",
  &create_requester__Fibonacci_SendGoal,
  &destroy_requester__Fibonacci_SendGoal,
  &create_replier__Fibonacci_SendGoal,
  &destroy_replier__Fibonacci_SendGoal,
  &send_request__Fibonacci_SendGoal,
  &take_request__Fibonacci_SendGoal,
  &send_response__Fibonacci_SendGoal,
  &take_response__Fibonacci_SendGoal,
  &get_request_datawriter__Fibonacci_SendGoal,
  &get_reply_datareader__Fibonacci_SendGoal,
  &get_request_datareader__Fibonacci_SendGoal,
  &get_reply_datawriter__Fibonacci_SendGoal,
};

static rosidl_service_type_support_t _Fibonacci_SendGoal__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<hello_world_msgs::action::Fibonacci_SendGoal>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_SendGoal__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_SendGoal)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_Result()
{
  return hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Result & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_Result_ & dds_message)
{
  // member.name sequence
  {
    size_t size = ros_message.sequence.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.sequence_.maximum()) {
      if (!dds_message.sequence_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.sequence_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.sequence_[static_cast<DDS_Long>(i)] =
        ros_message.sequence[i];
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Result_ & dds_message,
  hello_world_msgs::action::Fibonacci_Result & ros_message)
{
  // member.name sequence
  {
    size_t size = dds_message.sequence_.length();
    ros_message.sequence.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.sequence[i] =
        dds_message.sequence_[static_cast<DDS_Long>(i)];
    }
  }

  return true;
}

bool
to_cdr_stream__Fibonacci_Result(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_Result & ros_message =
    *(const hello_world_msgs::action::Fibonacci_Result *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_Result_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_Result_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_Result_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_Result_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_Result(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_Result_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_Result_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_Result & ros_message =
    *(hello_world_msgs::action::Fibonacci_Result *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_Result__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_Result",
  &get_type_code__Fibonacci_Result,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_Result,
  &to_message__Fibonacci_Result
};

static rosidl_message_type_support_t _Fibonacci_Result__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_Result>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_Result__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_Result)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_Result__handle;
}

#ifdef __cplusplus
}
#endif
#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include <ndds/connext_cpp/connext_cpp_requester_details.h>
// already included above
// #include <ndds/ndds_cpp.h>
// already included above
// #include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/service_type_support_decl.hpp"
// already included above
// #include "hello_world_msgs/action/fibonacci__struct.hpp"
// already included above
// #include "hello_world_msgs/action/dds_connext/Fibonacci_Support.h"
// already included above
// #include "hello_world_msgs/action/dds_connext/Fibonacci_Plugin.h"

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace dds_
{
class UUID_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID &,
  unique_identifier_msgs::msg::dds_::UUID_ &);
bool convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ &,
  unique_identifier_msgs::msg::UUID &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_GetResult_Request()
{
  return hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_GetResult_Request & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & dds_message)
{
  // member.name goal_id
  if (
    !unique_identifier_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.goal_id,
      dds_message.goal_id_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & dds_message,
  hello_world_msgs::action::Fibonacci_GetResult_Request & ros_message)
{
  // member.name goal_id
  if (
    !unique_identifier_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.goal_id_,
      ros_message.goal_id))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__Fibonacci_GetResult_Request(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_GetResult_Request & ros_message =
    *(const hello_world_msgs::action::Fibonacci_GetResult_Request *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_GetResult_Request(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_GetResult_Request & ros_message =
    *(hello_world_msgs::action::Fibonacci_GetResult_Request *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_GetResult_Request__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_GetResult_Request",
  &get_type_code__Fibonacci_GetResult_Request,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_GetResult_Request,
  &to_message__Fibonacci_GetResult_Request
};

static rosidl_message_type_support_t _Fibonacci_GetResult_Request__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_GetResult_Request>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_GetResult_Request)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace hello_world_msgs
{
namespace action
{
namespace dds_
{
class Fibonacci_Result_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Result &,
  hello_world_msgs::action::dds_::Fibonacci_Result_ &);
bool convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Result_ &,
  hello_world_msgs::action::Fibonacci_Result &);
}  // namespace typesupport_connext_cpp
}  // namespace action
}  // namespace hello_world_msgs


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_GetResult_Response()
{
  return hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_GetResult_Response & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & dds_message)
{
  // member.name status
  dds_message.status_ =
    ros_message.status;

  // member.name result
  if (
    !hello_world_msgs::action::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.result,
      dds_message.result_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & dds_message,
  hello_world_msgs::action::Fibonacci_GetResult_Response & ros_message)
{
  // member.name status
  ros_message.status =
    dds_message.status_;

  // member.name result
  if (
    !hello_world_msgs::action::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.result_,
      ros_message.result))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__Fibonacci_GetResult_Response(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_GetResult_Response & ros_message =
    *(const hello_world_msgs::action::Fibonacci_GetResult_Response *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_GetResult_Response(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_GetResult_Response & ros_message =
    *(hello_world_msgs::action::Fibonacci_GetResult_Response *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_GetResult_Response__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_GetResult_Response",
  &get_type_code__Fibonacci_GetResult_Response,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_GetResult_Response,
  &to_message__Fibonacci_GetResult_Response
};

static rosidl_message_type_support_t _Fibonacci_GetResult_Response__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_GetResult_Response>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_GetResult_Response)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;


namespace hello_world_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

void * create_requester__Fibonacci_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  if (!untyped_participant || !request_topic_str || !response_topic_str || !untyped_reader) {
    return NULL;
  }
  auto _allocator = allocator ? allocator : &malloc;

  DDSDomainParticipant * participant = static_cast<DDSDomainParticipant *>(untyped_participant);
  const DDS_DataReaderQos * datareader_qos = static_cast<const DDS_DataReaderQos *>(untyped_datareader_qos);
  const DDS_DataWriterQos * datawriter_qos = static_cast<const DDS_DataWriterQos *>(untyped_datawriter_qos);
  connext::RequesterParams requester_params(participant);

  // we create separate publishers and subscribers
  // because the default publisher is a singleton within
  // the replier/requester context in connext.
  // if we use the implicit one, every service/client will
  // overwrite the QoS of all previous instances.
  DDS::Publisher * publisher = participant->create_publisher(
    DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (publisher == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of publisher for requester");
    return NULL;
  }
  DDS::Subscriber * subscriber = participant->create_subscriber(
    DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (subscriber == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of subscriber for requester");
    return NULL;
  }
  requester_params.publisher(publisher);
  requester_params.subscriber(subscriber);
  requester_params.request_topic_name(request_topic_str);
  requester_params.reply_topic_name(response_topic_str);
  requester_params.datareader_qos(*datareader_qos);
  requester_params.datawriter_qos(*datawriter_qos);

  RequesterType * requester = static_cast<RequesterType *>(_allocator(sizeof(RequesterType)));
  try {
    new (requester) RequesterType(requester_params);
  } catch (...) {
    RMW_SET_ERROR_MSG("C++ exception during construction of Requester");
    return NULL;
  }

  *untyped_reader = requester->get_reply_datareader();
  *untyped_writer = requester->get_request_datawriter();
  return requester;
}

const char * destroy_requester__Fibonacci_GetResult(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  auto requester = static_cast<RequesterType *>(untyped_requester);

  requester->~RequesterType();
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

int64_t send_request__Fibonacci_GetResult(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using ROSRequestType = hello_world_msgs::action::Fibonacci_GetResult_Request;
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  connext::WriteSample<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_> request;
  const ROSRequestType & ros_request = *(
    static_cast<const ROSRequestType *>(untyped_ros_request));
  hello_world_msgs::action::typesupport_connext_cpp::convert_ros_message_to_dds(
    ros_request, request.data());

  RequesterType * requester = static_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

void * create_replier__Fibonacci_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  if (!untyped_participant || !request_topic_str || !response_topic_str || !untyped_reader) {
    return NULL;
  }
  auto _allocator = allocator ? allocator : &malloc;

  DDSDomainParticipant * participant = static_cast<DDSDomainParticipant *>(untyped_participant);
  const DDS_DataReaderQos * datareader_qos = static_cast<const DDS_DataReaderQos *>(untyped_datareader_qos);
  const DDS_DataWriterQos * datawriter_qos = static_cast<const DDS_DataWriterQos *>(untyped_datawriter_qos);
  connext::ReplierParams<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  > replier_params(participant);

  // we create separate publishers and subscribers
  // because the default publisher is a singleton within
  // the replier/requester context in connext.
  // if we use the implicit one, every service/client will
  // overwrite the QoS of all previous instances.
  DDS::Publisher * publisher = participant->create_publisher(
    DDS_PUBLISHER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (publisher == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of publisher for replier");
    return NULL;
  }
  DDS::Subscriber * subscriber = participant->create_subscriber(
    DDS_SUBSCRIBER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
  if (subscriber == NULL) {
    RMW_SET_ERROR_MSG("C++ exception during construction of subscriber for replier");
    return NULL;
  }
  replier_params.publisher(publisher);
  replier_params.subscriber(subscriber);
  replier_params.request_topic_name(request_topic_str);
  replier_params.reply_topic_name(response_topic_str);
  replier_params.datareader_qos(*datareader_qos);
  replier_params.datawriter_qos(*datawriter_qos);

  ReplierType * replier = static_cast<ReplierType *>(_allocator(sizeof(ReplierType)));
  try {
    new (replier) ReplierType(replier_params);
  } catch (...) {
    RMW_SET_ERROR_MSG("C++ exception during construction of Requester");
    return NULL;
  }

  *untyped_reader = replier->get_request_datareader();
  *untyped_writer = replier->get_reply_datawriter();
  return replier;
}

const char * destroy_replier__Fibonacci_GetResult(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  auto replier = static_cast<ReplierType *>(untyped_replier);

  replier->~ReplierType();
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(replier);
  return nullptr;
}

bool take_request__Fibonacci_GetResult(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  using ROSRequestType = hello_world_msgs::action::Fibonacci_GetResult_Request;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = static_cast<ReplierType *>(untyped_replier);

  ROSRequestType & ros_request = *static_cast<ROSRequestType *>(untyped_ros_request);

  connext::Sample<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  bool converted =
    hello_world_msgs::action::typesupport_connext_cpp::convert_dds_message_to_ros(request.data(), ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  return true;
}

bool take_response__Fibonacci_GetResult(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  using ROSResponseType = hello_world_msgs::action::Fibonacci_GetResult_Response;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = static_cast<RequesterType *>(untyped_requester);

  ROSResponseType & ros_response = *static_cast<ROSResponseType *>(untyped_ros_response);

  connext::Sample<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->sequence_number = sequence_number;

  bool converted =
    hello_world_msgs::action::typesupport_connext_cpp::convert_dds_message_to_ros(response.data(), ros_response);
  return converted;
}

bool send_response__Fibonacci_GetResult(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ROSResponseType = const hello_world_msgs::action::Fibonacci_GetResult_Response;
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_> response;
  ROSResponseType & ros_response = *(reinterpret_cast<ROSResponseType *>(untyped_ros_response));
  bool converted =
    hello_world_msgs::action::typesupport_connext_cpp::convert_ros_message_to_dds(ros_response, response.data());
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = static_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

void *
get_request_datawriter__Fibonacci_GetResult(void * untyped_requester)
{
  if (!untyped_requester) {
    return NULL;
  }
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);
  return requester->get_request_datawriter();
}

void *
get_reply_datareader__Fibonacci_GetResult(void * untyped_requester)
{
  if (!untyped_requester) {
    return NULL;
  }
  using RequesterType = connext::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);
  return requester->get_reply_datareader();
}

void *
get_request_datareader__Fibonacci_GetResult(void * untyped_replier)
{
  if (!untyped_replier) {
    return NULL;
  }
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);
  return replier->get_request_datareader();
}

void *
get_reply_datawriter__Fibonacci_GetResult(void * untyped_replier)
{
  if (!untyped_replier) {
    return NULL;
  }
  using ReplierType = connext::Replier<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);
  return replier->get_reply_datawriter();
}

static service_type_support_callbacks_t _Fibonacci_GetResult__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_GetResult",
  &create_requester__Fibonacci_GetResult,
  &destroy_requester__Fibonacci_GetResult,
  &create_replier__Fibonacci_GetResult,
  &destroy_replier__Fibonacci_GetResult,
  &send_request__Fibonacci_GetResult,
  &take_request__Fibonacci_GetResult,
  &send_response__Fibonacci_GetResult,
  &take_response__Fibonacci_GetResult,
  &get_request_datawriter__Fibonacci_GetResult,
  &get_reply_datareader__Fibonacci_GetResult,
  &get_request_datareader__Fibonacci_GetResult,
  &get_reply_datawriter__Fibonacci_GetResult,
};

static rosidl_service_type_support_t _Fibonacci_GetResult__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<hello_world_msgs::action::Fibonacci_GetResult>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_GetResult__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_GetResult)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_Feedback()
{
  return hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Feedback & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_Feedback_ & dds_message)
{
  // member.name sequence
  {
    size_t size = ros_message.sequence.size();
    if (size > (std::numeric_limits<DDS_Long>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.sequence_.maximum()) {
      if (!dds_message.sequence_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.sequence_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.sequence_[static_cast<DDS_Long>(i)] =
        ros_message.sequence[i];
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & dds_message,
  hello_world_msgs::action::Fibonacci_Feedback & ros_message)
{
  // member.name sequence
  {
    size_t size = dds_message.sequence_.length();
    ros_message.sequence.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.sequence[i] =
        dds_message.sequence_[static_cast<DDS_Long>(i)];
    }
  }

  return true;
}

bool
to_cdr_stream__Fibonacci_Feedback(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_Feedback & ros_message =
    *(const hello_world_msgs::action::Fibonacci_Feedback *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_Feedback_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_Feedback_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_Feedback_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_Feedback_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_Feedback(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_Feedback_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_Feedback_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_Feedback & ros_message =
    *(hello_world_msgs::action::Fibonacci_Feedback *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_Feedback__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_Feedback",
  &get_type_code__Fibonacci_Feedback,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_Feedback,
  &to_message__Fibonacci_Feedback
};

static rosidl_message_type_support_t _Fibonacci_Feedback__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_Feedback>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_Feedback__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_Feedback)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_connext_cpp.hpp"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace dds_
{
class UUID_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const unique_identifier_msgs::msg::UUID &,
  unique_identifier_msgs::msg::dds_::UUID_ &);
bool convert_dds_message_to_ros(
  const unique_identifier_msgs::msg::dds_::UUID_ &,
  unique_identifier_msgs::msg::UUID &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs
namespace hello_world_msgs
{
namespace action
{
namespace dds_
{
class Fibonacci_Feedback_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_Feedback &,
  hello_world_msgs::action::dds_::Fibonacci_Feedback_ &);
bool convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_Feedback_ &,
  hello_world_msgs::action::Fibonacci_Feedback &);
}  // namespace typesupport_connext_cpp
}  // namespace action
}  // namespace hello_world_msgs


namespace hello_world_msgs
{

namespace action
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Fibonacci_FeedbackMessage()
{
  return hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const hello_world_msgs::action::Fibonacci_FeedbackMessage & ros_message,
  hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & dds_message)
{
  // member.name goal_id
  if (
    !unique_identifier_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.goal_id,
      dds_message.goal_id_))
  {
    return false;
  }

  // member.name feedback
  if (
    !hello_world_msgs::action::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.feedback,
      dds_message.feedback_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & dds_message,
  hello_world_msgs::action::Fibonacci_FeedbackMessage & ros_message)
{
  // member.name goal_id
  if (
    !unique_identifier_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.goal_id_,
      ros_message.goal_id))
  {
    return false;
  }

  // member.name feedback
  if (
    !hello_world_msgs::action::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.feedback_,
      ros_message.feedback))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__Fibonacci_FeedbackMessage(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const hello_world_msgs::action::Fibonacci_FeedbackMessage & ros_message =
    *(const hello_world_msgs::action::Fibonacci_FeedbackMessage *)untyped_ros_message;

  // create a respective connext dds type
  hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ * dds_message = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Fibonacci_FeedbackMessage(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ * dds_message =
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  hello_world_msgs::action::Fibonacci_FeedbackMessage & ros_message =
    *(hello_world_msgs::action::Fibonacci_FeedbackMessage *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Fibonacci_FeedbackMessage__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_FeedbackMessage",
  &get_type_code__Fibonacci_FeedbackMessage,
  nullptr,
  nullptr,
  &to_cdr_stream__Fibonacci_FeedbackMessage,
  &to_message__Fibonacci_FeedbackMessage
};

static rosidl_message_type_support_t _Fibonacci_FeedbackMessage__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Fibonacci_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace hello_world_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::action::Fibonacci_FeedbackMessage>()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  hello_world_msgs, action,
  Fibonacci_FeedbackMessage)()
{
  return &hello_world_msgs::action::typesupport_connext_cpp::_Fibonacci_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
