// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hello_world_msgs:srv/SetMessage.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__SRV__SET_MESSAGE__STRUCT_H_
#define HELLO_WORLD_MSGS__SRV__SET_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/SetMessage in the package hello_world_msgs.
typedef struct hello_world_msgs__srv__SetMessage_Request
{
  rosidl_generator_c__String message;
} hello_world_msgs__srv__SetMessage_Request;

// Struct for a sequence of hello_world_msgs__srv__SetMessage_Request.
typedef struct hello_world_msgs__srv__SetMessage_Request__Sequence
{
  hello_world_msgs__srv__SetMessage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__srv__SetMessage_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetMessage in the package hello_world_msgs.
typedef struct hello_world_msgs__srv__SetMessage_Response
{
  bool result;
} hello_world_msgs__srv__SetMessage_Response;

// Struct for a sequence of hello_world_msgs__srv__SetMessage_Response.
typedef struct hello_world_msgs__srv__SetMessage_Response__Sequence
{
  hello_world_msgs__srv__SetMessage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__srv__SetMessage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLO_WORLD_MSGS__SRV__SET_MESSAGE__STRUCT_H_
