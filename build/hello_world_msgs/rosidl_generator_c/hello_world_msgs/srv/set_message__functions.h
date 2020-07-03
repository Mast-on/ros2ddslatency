// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hello_world_msgs:srv/SetMessage.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__SRV__SET_MESSAGE__FUNCTIONS_H_
#define HELLO_WORLD_MSGS__SRV__SET_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hello_world_msgs/srv/set_message__struct.h"

/// Initialize srv/SetMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hello_world_msgs__srv__SetMessage_Request
 * )) before or use
 * hello_world_msgs__srv__SetMessage_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
bool
hello_world_msgs__srv__SetMessage_Request__init(hello_world_msgs__srv__SetMessage_Request * msg);

/// Finalize srv/SetMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Request__fini(hello_world_msgs__srv__SetMessage_Request * msg);

/// Create srv/SetMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hello_world_msgs__srv__SetMessage_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
hello_world_msgs__srv__SetMessage_Request *
hello_world_msgs__srv__SetMessage_Request__create();

/// Destroy srv/SetMessage message.
/**
 * It calls
 * hello_world_msgs__srv__SetMessage_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Request__destroy(hello_world_msgs__srv__SetMessage_Request * msg);


/// Initialize array of srv/SetMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * hello_world_msgs__srv__SetMessage_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
bool
hello_world_msgs__srv__SetMessage_Request__Sequence__init(hello_world_msgs__srv__SetMessage_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetMessage messages.
/**
 * It calls
 * hello_world_msgs__srv__SetMessage_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Request__Sequence__fini(hello_world_msgs__srv__SetMessage_Request__Sequence * array);

/// Create array of srv/SetMessage messages.
/**
 * It allocates the memory for the array and calls
 * hello_world_msgs__srv__SetMessage_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
hello_world_msgs__srv__SetMessage_Request__Sequence *
hello_world_msgs__srv__SetMessage_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetMessage messages.
/**
 * It calls
 * hello_world_msgs__srv__SetMessage_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Request__Sequence__destroy(hello_world_msgs__srv__SetMessage_Request__Sequence * array);

/// Initialize srv/SetMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hello_world_msgs__srv__SetMessage_Response
 * )) before or use
 * hello_world_msgs__srv__SetMessage_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
bool
hello_world_msgs__srv__SetMessage_Response__init(hello_world_msgs__srv__SetMessage_Response * msg);

/// Finalize srv/SetMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Response__fini(hello_world_msgs__srv__SetMessage_Response * msg);

/// Create srv/SetMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hello_world_msgs__srv__SetMessage_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
hello_world_msgs__srv__SetMessage_Response *
hello_world_msgs__srv__SetMessage_Response__create();

/// Destroy srv/SetMessage message.
/**
 * It calls
 * hello_world_msgs__srv__SetMessage_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Response__destroy(hello_world_msgs__srv__SetMessage_Response * msg);


/// Initialize array of srv/SetMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * hello_world_msgs__srv__SetMessage_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
bool
hello_world_msgs__srv__SetMessage_Response__Sequence__init(hello_world_msgs__srv__SetMessage_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetMessage messages.
/**
 * It calls
 * hello_world_msgs__srv__SetMessage_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Response__Sequence__fini(hello_world_msgs__srv__SetMessage_Response__Sequence * array);

/// Create array of srv/SetMessage messages.
/**
 * It allocates the memory for the array and calls
 * hello_world_msgs__srv__SetMessage_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
hello_world_msgs__srv__SetMessage_Response__Sequence *
hello_world_msgs__srv__SetMessage_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetMessage messages.
/**
 * It calls
 * hello_world_msgs__srv__SetMessage_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_world_msgs
void
hello_world_msgs__srv__SetMessage_Response__Sequence__destroy(hello_world_msgs__srv__SetMessage_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // HELLO_WORLD_MSGS__SRV__SET_MESSAGE__FUNCTIONS_H_
