// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hello_world_msgs:srv/SetMessage.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__SRV__SET_MESSAGE__TRAITS_HPP_
#define HELLO_WORLD_MSGS__SRV__SET_MESSAGE__TRAITS_HPP_

#include "hello_world_msgs/srv/set_message__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::srv::SetMessage_Request>()
{
  return "hello_world_msgs::srv::SetMessage_Request";
}

template<>
struct has_fixed_size<hello_world_msgs::srv::SetMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_world_msgs::srv::SetMessage_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::srv::SetMessage_Response>()
{
  return "hello_world_msgs::srv::SetMessage_Response";
}

template<>
struct has_fixed_size<hello_world_msgs::srv::SetMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hello_world_msgs::srv::SetMessage_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::srv::SetMessage>()
{
  return "hello_world_msgs::srv::SetMessage";
}

template<>
struct has_fixed_size<hello_world_msgs::srv::SetMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<hello_world_msgs::srv::SetMessage_Request>::value &&
    has_fixed_size<hello_world_msgs::srv::SetMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<hello_world_msgs::srv::SetMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<hello_world_msgs::srv::SetMessage_Request>::value &&
    has_bounded_size<hello_world_msgs::srv::SetMessage_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // HELLO_WORLD_MSGS__SRV__SET_MESSAGE__TRAITS_HPP_
