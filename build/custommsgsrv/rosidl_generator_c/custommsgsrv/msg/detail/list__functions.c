// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custommsgsrv:msg/List.idl
// generated code does not contain a copyright notice
#include "custommsgsrv/msg/detail/list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `polygon`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custommsgsrv__msg__List__init(custommsgsrv__msg__List * msg)
{
  if (!msg) {
    return false;
  }
  // polygon
  if (!rosidl_runtime_c__float__Sequence__init(&msg->polygon, 0)) {
    custommsgsrv__msg__List__fini(msg);
    return false;
  }
  return true;
}

void
custommsgsrv__msg__List__fini(custommsgsrv__msg__List * msg)
{
  if (!msg) {
    return;
  }
  // polygon
  rosidl_runtime_c__float__Sequence__fini(&msg->polygon);
}

bool
custommsgsrv__msg__List__are_equal(const custommsgsrv__msg__List * lhs, const custommsgsrv__msg__List * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // polygon
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  return true;
}

bool
custommsgsrv__msg__List__copy(
  const custommsgsrv__msg__List * input,
  custommsgsrv__msg__List * output)
{
  if (!input || !output) {
    return false;
  }
  // polygon
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  return true;
}

custommsgsrv__msg__List *
custommsgsrv__msg__List__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__msg__List * msg = (custommsgsrv__msg__List *)allocator.allocate(sizeof(custommsgsrv__msg__List), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custommsgsrv__msg__List));
  bool success = custommsgsrv__msg__List__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custommsgsrv__msg__List__destroy(custommsgsrv__msg__List * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custommsgsrv__msg__List__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custommsgsrv__msg__List__Sequence__init(custommsgsrv__msg__List__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__msg__List * data = NULL;

  if (size) {
    data = (custommsgsrv__msg__List *)allocator.zero_allocate(size, sizeof(custommsgsrv__msg__List), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custommsgsrv__msg__List__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custommsgsrv__msg__List__fini(&data[i - 1]);
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
custommsgsrv__msg__List__Sequence__fini(custommsgsrv__msg__List__Sequence * array)
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
      custommsgsrv__msg__List__fini(&array->data[i]);
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

custommsgsrv__msg__List__Sequence *
custommsgsrv__msg__List__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__msg__List__Sequence * array = (custommsgsrv__msg__List__Sequence *)allocator.allocate(sizeof(custommsgsrv__msg__List__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custommsgsrv__msg__List__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custommsgsrv__msg__List__Sequence__destroy(custommsgsrv__msg__List__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custommsgsrv__msg__List__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custommsgsrv__msg__List__Sequence__are_equal(const custommsgsrv__msg__List__Sequence * lhs, const custommsgsrv__msg__List__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custommsgsrv__msg__List__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custommsgsrv__msg__List__Sequence__copy(
  const custommsgsrv__msg__List__Sequence * input,
  custommsgsrv__msg__List__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custommsgsrv__msg__List);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custommsgsrv__msg__List * data =
      (custommsgsrv__msg__List *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custommsgsrv__msg__List__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custommsgsrv__msg__List__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custommsgsrv__msg__List__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
