// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hello_world_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__ACTION__FIBONACCI__STRUCT_H_
#define HELLO_WORLD_MSGS__ACTION__FIBONACCI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_Goal
{
  int32_t order;
} hello_world_msgs__action__Fibonacci_Goal;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_Goal.
typedef struct hello_world_msgs__action__Fibonacci_Goal__Sequence
{
  hello_world_msgs__action__Fibonacci_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_Result
{
  rosidl_generator_c__int32__Sequence sequence;
} hello_world_msgs__action__Fibonacci_Result;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_Result.
typedef struct hello_world_msgs__action__Fibonacci_Result__Sequence
{
  hello_world_msgs__action__Fibonacci_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_Feedback
{
  rosidl_generator_c__int32__Sequence sequence;
} hello_world_msgs__action__Fibonacci_Feedback;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_Feedback.
typedef struct hello_world_msgs__action__Fibonacci_Feedback__Sequence
{
  hello_world_msgs__action__Fibonacci_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "hello_world_msgs/action/fibonacci__struct.h"

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hello_world_msgs__action__Fibonacci_Goal goal;
} hello_world_msgs__action__Fibonacci_SendGoal_Request;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_SendGoal_Request.
typedef struct hello_world_msgs__action__Fibonacci_SendGoal_Request__Sequence
{
  hello_world_msgs__action__Fibonacci_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hello_world_msgs__action__Fibonacci_SendGoal_Response;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_SendGoal_Response.
typedef struct hello_world_msgs__action__Fibonacci_SendGoal_Response__Sequence
{
  hello_world_msgs__action__Fibonacci_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hello_world_msgs__action__Fibonacci_GetResult_Request;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_GetResult_Request.
typedef struct hello_world_msgs__action__Fibonacci_GetResult_Request__Sequence
{
  hello_world_msgs__action__Fibonacci_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hello_world_msgs/action/fibonacci__struct.h"

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_GetResult_Response
{
  int8_t status;
  hello_world_msgs__action__Fibonacci_Result result;
} hello_world_msgs__action__Fibonacci_GetResult_Response;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_GetResult_Response.
typedef struct hello_world_msgs__action__Fibonacci_GetResult_Response__Sequence
{
  hello_world_msgs__action__Fibonacci_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hello_world_msgs/action/fibonacci__struct.h"

// Struct defined in action/Fibonacci in the package hello_world_msgs.
typedef struct hello_world_msgs__action__Fibonacci_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hello_world_msgs__action__Fibonacci_Feedback feedback;
} hello_world_msgs__action__Fibonacci_FeedbackMessage;

// Struct for a sequence of hello_world_msgs__action__Fibonacci_FeedbackMessage.
typedef struct hello_world_msgs__action__Fibonacci_FeedbackMessage__Sequence
{
  hello_world_msgs__action__Fibonacci_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_world_msgs__action__Fibonacci_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLO_WORLD_MSGS__ACTION__FIBONACCI__STRUCT_H_
