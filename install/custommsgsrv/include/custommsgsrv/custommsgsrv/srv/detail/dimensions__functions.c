// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custommsgsrv:srv/Dimensions.idl
// generated code does not contain a copyright notice
#include "custommsgsrv/srv/detail/dimensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `img`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
custommsgsrv__srv__Dimensions_Request__init(custommsgsrv__srv__Dimensions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__init(&msg->img)) {
    custommsgsrv__srv__Dimensions_Request__fini(msg);
    return false;
  }
  return true;
}

void
custommsgsrv__srv__Dimensions_Request__fini(custommsgsrv__srv__Dimensions_Request * msg)
{
  if (!msg) {
    return;
  }
  // img
  sensor_msgs__msg__Image__fini(&msg->img);
}

bool
custommsgsrv__srv__Dimensions_Request__are_equal(const custommsgsrv__srv__Dimensions_Request * lhs, const custommsgsrv__srv__Dimensions_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img), &(rhs->img)))
  {
    return false;
  }
  return true;
}

bool
custommsgsrv__srv__Dimensions_Request__copy(
  const custommsgsrv__srv__Dimensions_Request * input,
  custommsgsrv__srv__Dimensions_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__copy(
      &(input->img), &(output->img)))
  {
    return false;
  }
  return true;
}

custommsgsrv__srv__Dimensions_Request *
custommsgsrv__srv__Dimensions_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__srv__Dimensions_Request * msg = (custommsgsrv__srv__Dimensions_Request *)allocator.allocate(sizeof(custommsgsrv__srv__Dimensions_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custommsgsrv__srv__Dimensions_Request));
  bool success = custommsgsrv__srv__Dimensions_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custommsgsrv__srv__Dimensions_Request__destroy(custommsgsrv__srv__Dimensions_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custommsgsrv__srv__Dimensions_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custommsgsrv__srv__Dimensions_Request__Sequence__init(custommsgsrv__srv__Dimensions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__srv__Dimensions_Request * data = NULL;

  if (size) {
    data = (custommsgsrv__srv__Dimensions_Request *)allocator.zero_allocate(size, sizeof(custommsgsrv__srv__Dimensions_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custommsgsrv__srv__Dimensions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custommsgsrv__srv__Dimensions_Request__fini(&data[i - 1]);
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
custommsgsrv__srv__Dimensions_Request__Sequence__fini(custommsgsrv__srv__Dimensions_Request__Sequence * array)
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
      custommsgsrv__srv__Dimensions_Request__fini(&array->data[i]);
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

custommsgsrv__srv__Dimensions_Request__Sequence *
custommsgsrv__srv__Dimensions_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__srv__Dimensions_Request__Sequence * array = (custommsgsrv__srv__Dimensions_Request__Sequence *)allocator.allocate(sizeof(custommsgsrv__srv__Dimensions_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custommsgsrv__srv__Dimensions_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custommsgsrv__srv__Dimensions_Request__Sequence__destroy(custommsgsrv__srv__Dimensions_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custommsgsrv__srv__Dimensions_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custommsgsrv__srv__Dimensions_Request__Sequence__are_equal(const custommsgsrv__srv__Dimensions_Request__Sequence * lhs, const custommsgsrv__srv__Dimensions_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custommsgsrv__srv__Dimensions_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custommsgsrv__srv__Dimensions_Request__Sequence__copy(
  const custommsgsrv__srv__Dimensions_Request__Sequence * input,
  custommsgsrv__srv__Dimensions_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custommsgsrv__srv__Dimensions_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custommsgsrv__srv__Dimensions_Request * data =
      (custommsgsrv__srv__Dimensions_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custommsgsrv__srv__Dimensions_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custommsgsrv__srv__Dimensions_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custommsgsrv__srv__Dimensions_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
custommsgsrv__srv__Dimensions_Response__init(custommsgsrv__srv__Dimensions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
custommsgsrv__srv__Dimensions_Response__fini(custommsgsrv__srv__Dimensions_Response * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
custommsgsrv__srv__Dimensions_Response__are_equal(const custommsgsrv__srv__Dimensions_Response * lhs, const custommsgsrv__srv__Dimensions_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
custommsgsrv__srv__Dimensions_Response__copy(
  const custommsgsrv__srv__Dimensions_Response * input,
  custommsgsrv__srv__Dimensions_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

custommsgsrv__srv__Dimensions_Response *
custommsgsrv__srv__Dimensions_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__srv__Dimensions_Response * msg = (custommsgsrv__srv__Dimensions_Response *)allocator.allocate(sizeof(custommsgsrv__srv__Dimensions_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custommsgsrv__srv__Dimensions_Response));
  bool success = custommsgsrv__srv__Dimensions_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custommsgsrv__srv__Dimensions_Response__destroy(custommsgsrv__srv__Dimensions_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custommsgsrv__srv__Dimensions_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custommsgsrv__srv__Dimensions_Response__Sequence__init(custommsgsrv__srv__Dimensions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__srv__Dimensions_Response * data = NULL;

  if (size) {
    data = (custommsgsrv__srv__Dimensions_Response *)allocator.zero_allocate(size, sizeof(custommsgsrv__srv__Dimensions_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custommsgsrv__srv__Dimensions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custommsgsrv__srv__Dimensions_Response__fini(&data[i - 1]);
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
custommsgsrv__srv__Dimensions_Response__Sequence__fini(custommsgsrv__srv__Dimensions_Response__Sequence * array)
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
      custommsgsrv__srv__Dimensions_Response__fini(&array->data[i]);
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

custommsgsrv__srv__Dimensions_Response__Sequence *
custommsgsrv__srv__Dimensions_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custommsgsrv__srv__Dimensions_Response__Sequence * array = (custommsgsrv__srv__Dimensions_Response__Sequence *)allocator.allocate(sizeof(custommsgsrv__srv__Dimensions_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custommsgsrv__srv__Dimensions_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custommsgsrv__srv__Dimensions_Response__Sequence__destroy(custommsgsrv__srv__Dimensions_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custommsgsrv__srv__Dimensions_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custommsgsrv__srv__Dimensions_Response__Sequence__are_equal(const custommsgsrv__srv__Dimensions_Response__Sequence * lhs, const custommsgsrv__srv__Dimensions_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custommsgsrv__srv__Dimensions_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custommsgsrv__srv__Dimensions_Response__Sequence__copy(
  const custommsgsrv__srv__Dimensions_Response__Sequence * input,
  custommsgsrv__srv__Dimensions_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custommsgsrv__srv__Dimensions_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custommsgsrv__srv__Dimensions_Response * data =
      (custommsgsrv__srv__Dimensions_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custommsgsrv__srv__Dimensions_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custommsgsrv__srv__Dimensions_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custommsgsrv__srv__Dimensions_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
