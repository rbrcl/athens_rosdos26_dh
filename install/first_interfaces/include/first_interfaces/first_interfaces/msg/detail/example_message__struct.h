// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/example_message.h"


#ifndef FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__STRUCT_H_
#define FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'my_float_array'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'my_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ExampleMessage in the package first_interfaces.
typedef struct first_interfaces__msg__ExampleMessage
{
  float my_float;
  rosidl_runtime_c__float__Sequence my_float_array;
  rosidl_runtime_c__String my_string;
} first_interfaces__msg__ExampleMessage;

// Struct for a sequence of first_interfaces__msg__ExampleMessage.
typedef struct first_interfaces__msg__ExampleMessage__Sequence
{
  first_interfaces__msg__ExampleMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__msg__ExampleMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__STRUCT_H_
