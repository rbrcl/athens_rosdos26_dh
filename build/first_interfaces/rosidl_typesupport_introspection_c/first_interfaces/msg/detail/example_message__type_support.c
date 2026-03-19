// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "first_interfaces/msg/detail/example_message__rosidl_typesupport_introspection_c.h"
#include "first_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "first_interfaces/msg/detail/example_message__functions.h"
#include "first_interfaces/msg/detail/example_message__struct.h"


// Include directives for member types
// Member `my_float_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `my_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  first_interfaces__msg__ExampleMessage__init(message_memory);
}

void first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_fini_function(void * message_memory)
{
  first_interfaces__msg__ExampleMessage__fini(message_memory);
}

size_t first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__size_function__ExampleMessage__my_float_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__get_const_function__ExampleMessage__my_float_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__get_function__ExampleMessage__my_float_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__fetch_function__ExampleMessage__my_float_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__get_const_function__ExampleMessage__my_float_array(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__assign_function__ExampleMessage__my_float_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__get_function__ExampleMessage__my_float_array(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__resize_function__ExampleMessage__my_float_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_member_array[3] = {
  {
    "my_float",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__ExampleMessage, my_float),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "my_float_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__ExampleMessage, my_float_array),  // bytes offset in struct
    NULL,  // default value
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__size_function__ExampleMessage__my_float_array,  // size() function pointer
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__get_const_function__ExampleMessage__my_float_array,  // get_const(index) function pointer
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__get_function__ExampleMessage__my_float_array,  // get(index) function pointer
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__fetch_function__ExampleMessage__my_float_array,  // fetch(index, &value) function pointer
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__assign_function__ExampleMessage__my_float_array,  // assign(index, value) function pointer
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__resize_function__ExampleMessage__my_float_array  // resize(index) function pointer
  },
  {
    "my_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__ExampleMessage, my_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_members = {
  "first_interfaces__msg",  // message namespace
  "ExampleMessage",  // message name
  3,  // number of fields
  sizeof(first_interfaces__msg__ExampleMessage),
  false,  // has_any_key_member_
  first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_member_array,  // message members
  first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_type_support_handle = {
  0,
  &first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_members,
  get_message_typesupport_handle_function,
  &first_interfaces__msg__ExampleMessage__get_type_hash,
  &first_interfaces__msg__ExampleMessage__get_type_description,
  &first_interfaces__msg__ExampleMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_interfaces, msg, ExampleMessage)() {
  if (!first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_type_support_handle.typesupport_identifier) {
    first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &first_interfaces__msg__ExampleMessage__rosidl_typesupport_introspection_c__ExampleMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
