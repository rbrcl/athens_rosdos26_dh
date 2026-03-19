// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "first_interfaces/msg/detail/example_message__functions.h"
#include "first_interfaces/msg/detail/example_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace first_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExampleMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) first_interfaces::msg::ExampleMessage(_init);
}

void ExampleMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<first_interfaces::msg::ExampleMessage *>(message_memory);
  typed_message->~ExampleMessage();
}

size_t size_function__ExampleMessage__my_float_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExampleMessage__my_float_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ExampleMessage__my_float_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExampleMessage__my_float_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ExampleMessage__my_float_array(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ExampleMessage__my_float_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ExampleMessage__my_float_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ExampleMessage__my_float_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExampleMessage_message_member_array[3] = {
  {
    "my_float",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::ExampleMessage, my_float),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "my_float_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::ExampleMessage, my_float_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExampleMessage__my_float_array,  // size() function pointer
    get_const_function__ExampleMessage__my_float_array,  // get_const(index) function pointer
    get_function__ExampleMessage__my_float_array,  // get(index) function pointer
    fetch_function__ExampleMessage__my_float_array,  // fetch(index, &value) function pointer
    assign_function__ExampleMessage__my_float_array,  // assign(index, value) function pointer
    resize_function__ExampleMessage__my_float_array  // resize(index) function pointer
  },
  {
    "my_string",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::ExampleMessage, my_string),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExampleMessage_message_members = {
  "first_interfaces::msg",  // message namespace
  "ExampleMessage",  // message name
  3,  // number of fields
  sizeof(first_interfaces::msg::ExampleMessage),
  false,  // has_any_key_member_
  ExampleMessage_message_member_array,  // message members
  ExampleMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ExampleMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExampleMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExampleMessage_message_members,
  get_message_typesupport_handle_function,
  &first_interfaces__msg__ExampleMessage__get_type_hash,
  &first_interfaces__msg__ExampleMessage__get_type_description,
  &first_interfaces__msg__ExampleMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace first_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<first_interfaces::msg::ExampleMessage>()
{
  return &::first_interfaces::msg::rosidl_typesupport_introspection_cpp::ExampleMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, first_interfaces, msg, ExampleMessage)() {
  return &::first_interfaces::msg::rosidl_typesupport_introspection_cpp::ExampleMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
