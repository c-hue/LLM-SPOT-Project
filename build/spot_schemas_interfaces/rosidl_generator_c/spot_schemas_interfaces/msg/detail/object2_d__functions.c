// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_schemas_interfaces:msg/Object2D.idl
// generated code does not contain a copyright notice
#include "spot_schemas_interfaces/msg/detail/object2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

bool
spot_schemas_interfaces__msg__Object2D__init(spot_schemas_interfaces__msg__Object2D * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    spot_schemas_interfaces__msg__Object2D__fini(msg);
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    spot_schemas_interfaces__msg__Object2D__fini(msg);
    return false;
  }
  // x
  // y
  // width
  // height
  // confidence
  return true;
}

void
spot_schemas_interfaces__msg__Object2D__fini(spot_schemas_interfaces__msg__Object2D * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // color
  rosidl_runtime_c__String__fini(&msg->color);
  // x
  // y
  // width
  // height
  // confidence
}

bool
spot_schemas_interfaces__msg__Object2D__are_equal(const spot_schemas_interfaces__msg__Object2D * lhs, const spot_schemas_interfaces__msg__Object2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
spot_schemas_interfaces__msg__Object2D__copy(
  const spot_schemas_interfaces__msg__Object2D * input,
  spot_schemas_interfaces__msg__Object2D * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // confidence
  output->confidence = input->confidence;
  return true;
}

spot_schemas_interfaces__msg__Object2D *
spot_schemas_interfaces__msg__Object2D__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__msg__Object2D * msg = (spot_schemas_interfaces__msg__Object2D *)allocator.allocate(sizeof(spot_schemas_interfaces__msg__Object2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_schemas_interfaces__msg__Object2D));
  bool success = spot_schemas_interfaces__msg__Object2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
spot_schemas_interfaces__msg__Object2D__destroy(spot_schemas_interfaces__msg__Object2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    spot_schemas_interfaces__msg__Object2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
spot_schemas_interfaces__msg__Object2D__Sequence__init(spot_schemas_interfaces__msg__Object2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__msg__Object2D * data = NULL;

  if (size) {
    data = (spot_schemas_interfaces__msg__Object2D *)allocator.zero_allocate(size, sizeof(spot_schemas_interfaces__msg__Object2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_schemas_interfaces__msg__Object2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_schemas_interfaces__msg__Object2D__fini(&data[i - 1]);
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
spot_schemas_interfaces__msg__Object2D__Sequence__fini(spot_schemas_interfaces__msg__Object2D__Sequence * array)
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
      spot_schemas_interfaces__msg__Object2D__fini(&array->data[i]);
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

spot_schemas_interfaces__msg__Object2D__Sequence *
spot_schemas_interfaces__msg__Object2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__msg__Object2D__Sequence * array = (spot_schemas_interfaces__msg__Object2D__Sequence *)allocator.allocate(sizeof(spot_schemas_interfaces__msg__Object2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = spot_schemas_interfaces__msg__Object2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
spot_schemas_interfaces__msg__Object2D__Sequence__destroy(spot_schemas_interfaces__msg__Object2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    spot_schemas_interfaces__msg__Object2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
spot_schemas_interfaces__msg__Object2D__Sequence__are_equal(const spot_schemas_interfaces__msg__Object2D__Sequence * lhs, const spot_schemas_interfaces__msg__Object2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_schemas_interfaces__msg__Object2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_schemas_interfaces__msg__Object2D__Sequence__copy(
  const spot_schemas_interfaces__msg__Object2D__Sequence * input,
  spot_schemas_interfaces__msg__Object2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_schemas_interfaces__msg__Object2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    spot_schemas_interfaces__msg__Object2D * data =
      (spot_schemas_interfaces__msg__Object2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_schemas_interfaces__msg__Object2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          spot_schemas_interfaces__msg__Object2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spot_schemas_interfaces__msg__Object2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
