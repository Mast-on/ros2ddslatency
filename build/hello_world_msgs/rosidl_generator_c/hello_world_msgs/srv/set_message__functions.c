// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hello_world_msgs:srv/SetMessage.idl
// generated code does not contain a copyright notice
#include "hello_world_msgs/srv/set_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `message`
#include "rosidl_generator_c/string_functions.h"

bool
hello_world_msgs__srv__SetMessage_Request__init(hello_world_msgs__srv__SetMessage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_generator_c__String__init(&msg->message)) {
    hello_world_msgs__srv__SetMessage_Request__fini(msg);
    return false;
  }
  return true;
}

void
hello_world_msgs__srv__SetMessage_Request__fini(hello_world_msgs__srv__SetMessage_Request * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_generator_c__String__fini(&msg->message);
}

hello_world_msgs__srv__SetMessage_Request *
hello_world_msgs__srv__SetMessage_Request__create()
{
  hello_world_msgs__srv__SetMessage_Request * msg = (hello_world_msgs__srv__SetMessage_Request *)malloc(sizeof(hello_world_msgs__srv__SetMessage_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hello_world_msgs__srv__SetMessage_Request));
  bool success = hello_world_msgs__srv__SetMessage_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hello_world_msgs__srv__SetMessage_Request__destroy(hello_world_msgs__srv__SetMessage_Request * msg)
{
  if (msg) {
    hello_world_msgs__srv__SetMessage_Request__fini(msg);
  }
  free(msg);
}


bool
hello_world_msgs__srv__SetMessage_Request__Sequence__init(hello_world_msgs__srv__SetMessage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hello_world_msgs__srv__SetMessage_Request * data = NULL;
  if (size) {
    data = (hello_world_msgs__srv__SetMessage_Request *)calloc(size, sizeof(hello_world_msgs__srv__SetMessage_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hello_world_msgs__srv__SetMessage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hello_world_msgs__srv__SetMessage_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hello_world_msgs__srv__SetMessage_Request__Sequence__fini(hello_world_msgs__srv__SetMessage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hello_world_msgs__srv__SetMessage_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hello_world_msgs__srv__SetMessage_Request__Sequence *
hello_world_msgs__srv__SetMessage_Request__Sequence__create(size_t size)
{
  hello_world_msgs__srv__SetMessage_Request__Sequence * array = (hello_world_msgs__srv__SetMessage_Request__Sequence *)malloc(sizeof(hello_world_msgs__srv__SetMessage_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hello_world_msgs__srv__SetMessage_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hello_world_msgs__srv__SetMessage_Request__Sequence__destroy(hello_world_msgs__srv__SetMessage_Request__Sequence * array)
{
  if (array) {
    hello_world_msgs__srv__SetMessage_Request__Sequence__fini(array);
  }
  free(array);
}


bool
hello_world_msgs__srv__SetMessage_Response__init(hello_world_msgs__srv__SetMessage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
hello_world_msgs__srv__SetMessage_Response__fini(hello_world_msgs__srv__SetMessage_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

hello_world_msgs__srv__SetMessage_Response *
hello_world_msgs__srv__SetMessage_Response__create()
{
  hello_world_msgs__srv__SetMessage_Response * msg = (hello_world_msgs__srv__SetMessage_Response *)malloc(sizeof(hello_world_msgs__srv__SetMessage_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hello_world_msgs__srv__SetMessage_Response));
  bool success = hello_world_msgs__srv__SetMessage_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hello_world_msgs__srv__SetMessage_Response__destroy(hello_world_msgs__srv__SetMessage_Response * msg)
{
  if (msg) {
    hello_world_msgs__srv__SetMessage_Response__fini(msg);
  }
  free(msg);
}


bool
hello_world_msgs__srv__SetMessage_Response__Sequence__init(hello_world_msgs__srv__SetMessage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hello_world_msgs__srv__SetMessage_Response * data = NULL;
  if (size) {
    data = (hello_world_msgs__srv__SetMessage_Response *)calloc(size, sizeof(hello_world_msgs__srv__SetMessage_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hello_world_msgs__srv__SetMessage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hello_world_msgs__srv__SetMessage_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hello_world_msgs__srv__SetMessage_Response__Sequence__fini(hello_world_msgs__srv__SetMessage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hello_world_msgs__srv__SetMessage_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hello_world_msgs__srv__SetMessage_Response__Sequence *
hello_world_msgs__srv__SetMessage_Response__Sequence__create(size_t size)
{
  hello_world_msgs__srv__SetMessage_Response__Sequence * array = (hello_world_msgs__srv__SetMessage_Response__Sequence *)malloc(sizeof(hello_world_msgs__srv__SetMessage_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hello_world_msgs__srv__SetMessage_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hello_world_msgs__srv__SetMessage_Response__Sequence__destroy(hello_world_msgs__srv__SetMessage_Response__Sequence * array)
{
  if (array) {
    hello_world_msgs__srv__SetMessage_Response__Sequence__fini(array);
  }
  free(array);
}
