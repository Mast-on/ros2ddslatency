// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hello_world_msgs:srv/SetMessage.idl
// generated code does not contain a copyright notice
#include "hello_world_msgs/srv/set_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hello_world_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hello_world_msgs/srv/set_message__struct.h"
#include "hello_world_msgs/srv/set_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // message
#include "rosidl_generator_c/string_functions.h"  // message

// forward declare type support functions


using _SetMessage_Request__ros_msg_type = hello_world_msgs__srv__SetMessage_Request;

static bool _SetMessage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMessage_Request__ros_msg_type * ros_message = static_cast<const _SetMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: message
  {
    const rosidl_generator_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetMessage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMessage_Request__ros_msg_type * ros_message = static_cast<_SetMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_generator_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_world_msgs
size_t get_serialized_size_hello_world_msgs__srv__SetMessage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMessage_Request__ros_msg_type * ros_message = static_cast<const _SetMessage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetMessage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hello_world_msgs__srv__SetMessage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_world_msgs
size_t max_serialized_size_hello_world_msgs__srv__SetMessage_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetMessage_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hello_world_msgs__srv__SetMessage_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMessage_Request = {
  "hello_world_msgs::srv",
  "SetMessage_Request",
  _SetMessage_Request__cdr_serialize,
  _SetMessage_Request__cdr_deserialize,
  _SetMessage_Request__get_serialized_size,
  _SetMessage_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMessage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMessage_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_world_msgs, srv, SetMessage_Request)() {
  return &_SetMessage_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/srv/set_message__struct.h"
// already included above
// #include "hello_world_msgs/srv/set_message__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetMessage_Response__ros_msg_type = hello_world_msgs__srv__SetMessage_Response;

static bool _SetMessage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMessage_Response__ros_msg_type * ros_message = static_cast<const _SetMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _SetMessage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMessage_Response__ros_msg_type * ros_message = static_cast<_SetMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_world_msgs
size_t get_serialized_size_hello_world_msgs__srv__SetMessage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMessage_Response__ros_msg_type * ros_message = static_cast<const _SetMessage_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMessage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hello_world_msgs__srv__SetMessage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_world_msgs
size_t max_serialized_size_hello_world_msgs__srv__SetMessage_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetMessage_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hello_world_msgs__srv__SetMessage_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMessage_Response = {
  "hello_world_msgs::srv",
  "SetMessage_Response",
  _SetMessage_Response__cdr_serialize,
  _SetMessage_Response__cdr_deserialize,
  _SetMessage_Response__get_serialized_size,
  _SetMessage_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMessage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMessage_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_world_msgs, srv, SetMessage_Response)() {
  return &_SetMessage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hello_world_msgs/srv/set_message.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMessage__callbacks = {
  "hello_world_msgs::srv",
  "SetMessage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_world_msgs, srv, SetMessage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_world_msgs, srv, SetMessage_Response)(),
};

static rosidl_service_type_support_t SetMessage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetMessage__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_world_msgs, srv, SetMessage)() {
  return &SetMessage__handle;
}

#if defined(__cplusplus)
}
#endif
