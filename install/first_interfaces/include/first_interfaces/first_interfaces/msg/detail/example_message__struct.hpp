// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/example_message.hpp"


#ifndef FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__STRUCT_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__first_interfaces__msg__ExampleMessage __attribute__((deprecated))
#else
# define DEPRECATED__first_interfaces__msg__ExampleMessage __declspec(deprecated)
#endif

namespace first_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExampleMessage_
{
  using Type = ExampleMessage_<ContainerAllocator>;

  explicit ExampleMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_float = 0.0f;
      this->my_string = "";
    }
  }

  explicit ExampleMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : my_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_float = 0.0f;
      this->my_string = "";
    }
  }

  // field types and members
  using _my_float_type =
    float;
  _my_float_type my_float;
  using _my_float_array_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _my_float_array_type my_float_array;
  using _my_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _my_string_type my_string;

  // setters for named parameter idiom
  Type & set__my_float(
    const float & _arg)
  {
    this->my_float = _arg;
    return *this;
  }
  Type & set__my_float_array(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->my_float_array = _arg;
    return *this;
  }
  Type & set__my_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->my_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_interfaces::msg::ExampleMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_interfaces::msg::ExampleMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::ExampleMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::ExampleMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_interfaces__msg__ExampleMessage
    std::shared_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_interfaces__msg__ExampleMessage
    std::shared_ptr<first_interfaces::msg::ExampleMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExampleMessage_ & other) const
  {
    if (this->my_float != other.my_float) {
      return false;
    }
    if (this->my_float_array != other.my_float_array) {
      return false;
    }
    if (this->my_string != other.my_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExampleMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExampleMessage_

// alias to use template instance with default allocator
using ExampleMessage =
  first_interfaces::msg::ExampleMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__STRUCT_HPP_
