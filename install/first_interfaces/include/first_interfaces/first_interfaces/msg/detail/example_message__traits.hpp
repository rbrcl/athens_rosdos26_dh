// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/example_message.hpp"


#ifndef FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__TRAITS_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "first_interfaces/msg/detail/example_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace first_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExampleMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: my_float
  {
    out << "my_float: ";
    rosidl_generator_traits::value_to_yaml(msg.my_float, out);
    out << ", ";
  }

  // member: my_float_array
  {
    if (msg.my_float_array.size() == 0) {
      out << "my_float_array: []";
    } else {
      out << "my_float_array: [";
      size_t pending_items = msg.my_float_array.size();
      for (auto item : msg.my_float_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: my_string
  {
    out << "my_string: ";
    rosidl_generator_traits::value_to_yaml(msg.my_string, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExampleMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: my_float
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_float: ";
    rosidl_generator_traits::value_to_yaml(msg.my_float, out);
    out << "\n";
  }

  // member: my_float_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.my_float_array.size() == 0) {
      out << "my_float_array: []\n";
    } else {
      out << "my_float_array:\n";
      for (auto item : msg.my_float_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: my_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_string: ";
    rosidl_generator_traits::value_to_yaml(msg.my_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExampleMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace first_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use first_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const first_interfaces::msg::ExampleMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  first_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use first_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const first_interfaces::msg::ExampleMessage & msg)
{
  return first_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<first_interfaces::msg::ExampleMessage>()
{
  return "first_interfaces::msg::ExampleMessage";
}

template<>
inline const char * name<first_interfaces::msg::ExampleMessage>()
{
  return "first_interfaces/msg/ExampleMessage";
}

template<>
struct has_fixed_size<first_interfaces::msg::ExampleMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<first_interfaces::msg::ExampleMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<first_interfaces::msg::ExampleMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__TRAITS_HPP_
