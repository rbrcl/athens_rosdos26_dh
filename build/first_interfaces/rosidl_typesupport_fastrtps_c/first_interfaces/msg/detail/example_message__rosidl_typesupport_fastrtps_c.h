// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice
#ifndef FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "first_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "first_interfaces/msg/detail/example_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
bool cdr_serialize_first_interfaces__msg__ExampleMessage(
  const first_interfaces__msg__ExampleMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
bool cdr_deserialize_first_interfaces__msg__ExampleMessage(
  eprosima::fastcdr::Cdr &,
  first_interfaces__msg__ExampleMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
size_t get_serialized_size_first_interfaces__msg__ExampleMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
size_t max_serialized_size_first_interfaces__msg__ExampleMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
bool cdr_serialize_key_first_interfaces__msg__ExampleMessage(
  const first_interfaces__msg__ExampleMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
size_t get_serialized_size_key_first_interfaces__msg__ExampleMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
size_t max_serialized_size_key_first_interfaces__msg__ExampleMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_interfaces, msg, ExampleMessage)();

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__EXAMPLE_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
