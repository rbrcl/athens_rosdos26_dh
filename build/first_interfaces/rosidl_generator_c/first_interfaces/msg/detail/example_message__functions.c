// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from first_interfaces:msg/ExampleMessage.idl
// generated code does not contain a copyright notice
#include "first_interfaces/msg/detail/example_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `my_float_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `my_string`
#include "rosidl_runtime_c/string_functions.h"

bool
first_interfaces__msg__ExampleMessage__init(first_interfaces__msg__ExampleMessage * msg)
{
  if (!msg) {
    return false;
  }
  // my_float
  // my_float_array
  if (!rosidl_runtime_c__float__Sequence__init(&msg->my_float_array, 0)) {
    first_interfaces__msg__ExampleMessage__fini(msg);
    return false;
  }
  // my_string
  if (!rosidl_runtime_c__String__init(&msg->my_string)) {
    first_interfaces__msg__ExampleMessage__fini(msg);
    return false;
  }
  return true;
}

void
first_interfaces__msg__ExampleMessage__fini(first_interfaces__msg__ExampleMessage * msg)
{
  if (!msg) {
    return;
  }
  // my_float
  // my_float_array
  rosidl_runtime_c__float__Sequence__fini(&msg->my_float_array);
  // my_string
  rosidl_runtime_c__String__fini(&msg->my_string);
}

bool
first_interfaces__msg__ExampleMessage__are_equal(const first_interfaces__msg__ExampleMessage * lhs, const first_interfaces__msg__ExampleMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // my_float
  if (lhs->my_float != rhs->my_float) {
    return false;
  }
  // my_float_array
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->my_float_array), &(rhs->my_float_array)))
  {
    return false;
  }
  // my_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->my_string), &(rhs->my_string)))
  {
    return false;
  }
  return true;
}

bool
first_interfaces__msg__ExampleMessage__copy(
  const first_interfaces__msg__ExampleMessage * input,
  first_interfaces__msg__ExampleMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // my_float
  output->my_float = input->my_float;
  // my_float_array
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->my_float_array), &(output->my_float_array)))
  {
    return false;
  }
  // my_string
  if (!rosidl_runtime_c__String__copy(
      &(input->my_string), &(output->my_string)))
  {
    return false;
  }
  return true;
}

first_interfaces__msg__ExampleMessage *
first_interfaces__msg__ExampleMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_interfaces__msg__ExampleMessage * msg = (first_interfaces__msg__ExampleMessage *)allocator.allocate(sizeof(first_interfaces__msg__ExampleMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_interfaces__msg__ExampleMessage));
  bool success = first_interfaces__msg__ExampleMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_interfaces__msg__ExampleMessage__destroy(first_interfaces__msg__ExampleMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_interfaces__msg__ExampleMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_interfaces__msg__ExampleMessage__Sequence__init(first_interfaces__msg__ExampleMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_interfaces__msg__ExampleMessage * data = NULL;

  if (size) {
    data = (first_interfaces__msg__ExampleMessage *)allocator.zero_allocate(size, sizeof(first_interfaces__msg__ExampleMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_interfaces__msg__ExampleMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_interfaces__msg__ExampleMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
first_interfaces__msg__ExampleMessage__Sequence__fini(first_interfaces__msg__ExampleMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      first_interfaces__msg__ExampleMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

first_interfaces__msg__ExampleMessage__Sequence *
first_interfaces__msg__ExampleMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_interfaces__msg__ExampleMessage__Sequence * array = (first_interfaces__msg__ExampleMessage__Sequence *)allocator.allocate(sizeof(first_interfaces__msg__ExampleMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_interfaces__msg__ExampleMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_interfaces__msg__ExampleMessage__Sequence__destroy(first_interfaces__msg__ExampleMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_interfaces__msg__ExampleMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_interfaces__msg__ExampleMessage__Sequence__are_equal(const first_interfaces__msg__ExampleMessage__Sequence * lhs, const first_interfaces__msg__ExampleMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_interfaces__msg__ExampleMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_interfaces__msg__ExampleMessage__Sequence__copy(
  const first_interfaces__msg__ExampleMessage__Sequence * input,
  first_interfaces__msg__ExampleMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_interfaces__msg__ExampleMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_interfaces__msg__ExampleMessage * data =
      (first_interfaces__msg__ExampleMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_interfaces__msg__ExampleMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_interfaces__msg__ExampleMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_interfaces__msg__ExampleMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
