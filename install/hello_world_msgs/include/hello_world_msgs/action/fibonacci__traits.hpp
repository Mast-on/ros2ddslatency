// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hello_world_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__ACTION__FIBONACCI__TRAITS_HPP_
#define HELLO_WORLD_MSGS__ACTION__FIBONACCI__TRAITS_HPP_

#include "hello_world_msgs/action/fibonacci__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_Goal>()
{
  return "hello_world_msgs::action::Fibonacci_Goal";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_Result>()
{
  return "hello_world_msgs::action::Fibonacci_Result";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_Feedback>()
{
  return "hello_world_msgs::action::Fibonacci_Feedback";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "hello_world_msgs/action/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_SendGoal_Request>()
{
  return "hello_world_msgs::action::Fibonacci_SendGoal_Request";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hello_world_msgs::action::Fibonacci_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hello_world_msgs::action::Fibonacci_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_SendGoal_Response>()
{
  return "hello_world_msgs::action::Fibonacci_SendGoal_Response";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_SendGoal>()
{
  return "hello_world_msgs::action::Fibonacci_SendGoal";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hello_world_msgs::action::Fibonacci_SendGoal_Request>::value &&
    has_fixed_size<hello_world_msgs::action::Fibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hello_world_msgs::action::Fibonacci_SendGoal_Request>::value &&
    has_bounded_size<hello_world_msgs::action::Fibonacci_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_GetResult_Request>()
{
  return "hello_world_msgs::action::Fibonacci_GetResult_Request";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hello_world_msgs/action/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_GetResult_Response>()
{
  return "hello_world_msgs::action::Fibonacci_GetResult_Response";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hello_world_msgs::action::Fibonacci_Result>::value> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hello_world_msgs::action::Fibonacci_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_GetResult>()
{
  return "hello_world_msgs::action::Fibonacci_GetResult";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hello_world_msgs::action::Fibonacci_GetResult_Request>::value &&
    has_fixed_size<hello_world_msgs::action::Fibonacci_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hello_world_msgs::action::Fibonacci_GetResult_Request>::value &&
    has_bounded_size<hello_world_msgs::action::Fibonacci_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "hello_world_msgs/action/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::action::Fibonacci_FeedbackMessage>()
{
  return "hello_world_msgs::action::Fibonacci_FeedbackMessage";
}

template<>
struct has_fixed_size<hello_world_msgs::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hello_world_msgs::action::Fibonacci_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hello_world_msgs::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hello_world_msgs::action::Fibonacci_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // HELLO_WORLD_MSGS__ACTION__FIBONACCI__TRAITS_HPP_
