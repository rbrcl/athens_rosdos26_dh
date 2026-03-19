// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice

#include "first_interfaces/msg/detail/example_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
const rosidl_type_hash_t *
first_interfaces__msg__ExampleMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0xce, 0x1b, 0x80, 0xd3, 0x0f, 0x7b, 0xca,
      0x3d, 0x7d, 0xe1, 0x24, 0x94, 0x42, 0xba, 0x3c,
      0x7a, 0xa3, 0x2e, 0xa9, 0x56, 0xb4, 0x25, 0x01,
      0x98, 0x48, 0x49, 0xe2, 0xc7, 0xc8, 0x5c, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char first_interfaces__msg__ExampleMessage__TYPE_NAME[] = "first_interfaces/msg/ExampleMessage";

// Define type names, field names, and default values
static char first_interfaces__msg__ExampleMessage__FIELD_NAME__my_float[] = "my_float";
static char first_interfaces__msg__ExampleMessage__FIELD_NAME__my_float_array[] = "my_float_array";
static char first_interfaces__msg__ExampleMessage__FIELD_NAME__my_string[] = "my_string";

static rosidl_runtime_c__type_description__Field first_interfaces__msg__ExampleMessage__FIELDS[] = {
  {
    {first_interfaces__msg__ExampleMessage__FIELD_NAME__my_float, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {first_interfaces__msg__ExampleMessage__FIELD_NAME__my_float_array, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {first_interfaces__msg__ExampleMessage__FIELD_NAME__my_string, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
first_interfaces__msg__ExampleMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {first_interfaces__msg__ExampleMessage__TYPE_NAME, 35, 35},
      {first_interfaces__msg__ExampleMessage__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32     my_float\n"
  "float32[]   my_float_array\n"
  "string      my_string";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
first_interfaces__msg__ExampleMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {first_interfaces__msg__ExampleMessage__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
first_interfaces__msg__ExampleMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *first_interfaces__msg__ExampleMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
