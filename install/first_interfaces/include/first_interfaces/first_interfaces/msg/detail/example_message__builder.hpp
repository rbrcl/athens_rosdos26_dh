// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/example_message.hpp"


#ifndef FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__BUILDER_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_interfaces/msg/detail/example_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_interfaces
{

namespace msg
{

namespace builder
{

class Init_ExampleMessage_my_string
{
public:
  explicit Init_ExampleMessage_my_string(::first_interfaces::msg::ExampleMessage & msg)
  : msg_(msg)
  {}
  ::first_interfaces::msg::ExampleMessage my_string(::first_interfaces::msg::ExampleMessage::_my_string_type arg)
  {
    msg_.my_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_interfaces::msg::ExampleMessage msg_;
};

class Init_ExampleMessage_my_float_array
{
public:
  explicit Init_ExampleMessage_my_float_array(::first_interfaces::msg::ExampleMessage & msg)
  : msg_(msg)
  {}
  Init_ExampleMessage_my_string my_float_array(::first_interfaces::msg::ExampleMessage::_my_float_array_type arg)
  {
    msg_.my_float_array = std::move(arg);
    return Init_ExampleMessage_my_string(msg_);
  }

private:
  ::first_interfaces::msg::ExampleMessage msg_;
};

class Init_ExampleMessage_my_float
{
public:
  Init_ExampleMessage_my_float()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExampleMessage_my_float_array my_float(::first_interfaces::msg::ExampleMessage::_my_float_type arg)
  {
    msg_.my_float = std::move(arg);
    return Init_ExampleMessage_my_float_array(msg_);
  }

private:
  ::first_interfaces::msg::ExampleMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_interfaces::msg::ExampleMessage>()
{
  return first_interfaces::msg::builder::Init_ExampleMessage_my_float();
}

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__BUILDER_HPP_
