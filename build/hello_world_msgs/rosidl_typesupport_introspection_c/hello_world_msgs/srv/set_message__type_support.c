// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hello_world_msgs:srv/SetMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hello_world_msgs/srv/set_message__rosidl_typesupport_introspection_c.h"
#include "hello_world_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hello_world_msgs/srv/set_message__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_member_array[1] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hello_world_msgs__srv__SetMessage_Request, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_members = {
  "hello_world_msgs__srv",  // message namespace
  "SetMessage_Request",  // message name
  1,  // number of fields
  sizeof(hello_world_msgs__srv__SetMessage_Request),
  SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_type_support_handle = {
  0,
  &SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_world_msgs, srv, SetMessage_Request)() {
  if (!SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_type_support_handle.typesupport_identifier) {
    SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetMessage_Request__rosidl_typesupport_introspection_c__SetMessage_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hello_world_msgs/srv/set_message__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hello_world_msgs/srv/set_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hello_world_msgs__srv__SetMessage_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_members = {
  "hello_world_msgs__srv",  // message namespace
  "SetMessage_Response",  // message name
  1,  // number of fields
  sizeof(hello_world_msgs__srv__SetMessage_Response),
  SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_type_support_handle = {
  0,
  &SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_world_msgs, srv, SetMessage_Response)() {
  if (!SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_type_support_handle.typesupport_identifier) {
    SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetMessage_Response__rosidl_typesupport_introspection_c__SetMessage_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/srv/set_message__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_service_members = {
  "hello_world_msgs__srv",  // service namespace
  "SetMessage",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_Request_message_type_support_handle,
  NULL  // response message
  // hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_Response_message_type_support_handle
};

static rosidl_service_type_support_t hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_service_type_support_handle = {
  0,
  &hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_world_msgs, srv, SetMessage_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_world_msgs, srv, SetMessage_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hello_world_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_world_msgs, srv, SetMessage)() {
  if (!hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_service_type_support_handle.typesupport_identifier) {
    hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_world_msgs, srv, SetMessage_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_world_msgs, srv, SetMessage_Response)()->data;
  }

  return &hello_world_msgs__srv__set_message__rosidl_typesupport_introspection_c__SetMessage_service_type_support_handle;
}
