// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hello_world_msgs:srv/SetMessage.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__SRV__SET_MESSAGE__STRUCT_HPP_
#define HELLO_WORLD_MSGS__SRV__SET_MESSAGE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__hello_world_msgs__srv__SetMessage_Request __attribute__((deprecated))
#else
# define DEPRECATED__hello_world_msgs__srv__SetMessage_Request __declspec(deprecated)
#endif

namespace hello_world_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMessage_Request_
{
  using Type = SetMessage_Request_<ContainerAllocator>;

  explicit SetMessage_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit SetMessage_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hello_world_msgs__srv__SetMessage_Request
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hello_world_msgs__srv__SetMessage_Request
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMessage_Request_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMessage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMessage_Request_

// alias to use template instance with default allocator
using SetMessage_Request =
  hello_world_msgs::srv::SetMessage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hello_world_msgs

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__hello_world_msgs__srv__SetMessage_Response __attribute__((deprecated))
#else
# define DEPRECATED__hello_world_msgs__srv__SetMessage_Response __declspec(deprecated)
#endif

namespace hello_world_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMessage_Response_
{
  using Type = SetMessage_Response_<ContainerAllocator>;

  explicit SetMessage_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetMessage_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hello_world_msgs__srv__SetMessage_Response
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hello_world_msgs__srv__SetMessage_Response
    std::shared_ptr<hello_world_msgs::srv::SetMessage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMessage_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMessage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMessage_Response_

// alias to use template instance with default allocator
using SetMessage_Response =
  hello_world_msgs::srv::SetMessage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hello_world_msgs

namespace hello_world_msgs
{

namespace srv
{

struct SetMessage
{
  using Request = hello_world_msgs::srv::SetMessage_Request;
  using Response = hello_world_msgs::srv::SetMessage_Response;
};

}  // namespace srv

}  // namespace hello_world_msgs

#endif  // HELLO_WORLD_MSGS__SRV__SET_MESSAGE__STRUCT_HPP_
