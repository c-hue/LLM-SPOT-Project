// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_schemas_interfaces:msg/ObjectPose3D.idl
// generated code does not contain a copyright notice
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `object_id`
#include "rosidl_runtime_c/string_functions.h"

bool
spot_schemas_interfaces__msg__ObjectPose3D__init(spot_schemas_interfaces__msg__ObjectPose3D * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    spot_schemas_interfaces__msg__ObjectPose3D__fini(msg);
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    spot_schemas_interfaces__msg__ObjectPose3D__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
spot_schemas_interfaces__msg__ObjectPose3D__fini(spot_schemas_interfaces__msg__ObjectPose3D * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // confidence
}

bool
spot_schemas_interfaces__msg__ObjectPose3D__are_equal(const spot_schemas_interfaces__msg__ObjectPose3D * lhs, const spot_schemas_interfaces__msg__ObjectPose3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
spot_schemas_interfaces__msg__ObjectPose3D__copy(
  const spot_schemas_interfaces__msg__ObjectPose3D * input,
  spot_schemas_interfaces__msg__ObjectPose3D * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

spot_schemas_interfaces__msg__ObjectPose3D *
spot_schemas_interfaces__msg__ObjectPose3D__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__msg__ObjectPose3D * msg = (spot_schemas_interfaces__msg__ObjectPose3D *)allocator.allocate(sizeof(spot_schemas_interfaces__msg__ObjectPose3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_schemas_interfaces__msg__ObjectPose3D));
  bool success = spot_schemas_interfaces__msg__ObjectPose3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
spot_schemas_interfaces__msg__ObjectPose3D__destroy(spot_schemas_interfaces__msg__ObjectPose3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    spot_schemas_interfaces__msg__ObjectPose3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
spot_schemas_interfaces__msg__ObjectPose3D__Sequence__init(spot_schemas_interfaces__msg__ObjectPose3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__msg__ObjectPose3D * data = NULL;

  if (size) {
    data = (spot_schemas_interfaces__msg__ObjectPose3D *)allocator.zero_allocate(size, sizeof(spot_schemas_interfaces__msg__ObjectPose3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_schemas_interfaces__msg__ObjectPose3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_schemas_interfaces__msg__ObjectPose3D__fini(&data[i - 1]);
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
spot_schemas_interfaces__msg__ObjectPose3D__Sequence__fini(spot_schemas_interfaces__msg__ObjectPose3D__Sequence * array)
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
      spot_schemas_interfaces__msg__ObjectPose3D__fini(&array->data[i]);
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

spot_schemas_interfaces__msg__ObjectPose3D__Sequence *
spot_schemas_interfaces__msg__ObjectPose3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__msg__ObjectPose3D__Sequence * array = (spot_schemas_interfaces__msg__ObjectPose3D__Sequence *)allocator.allocate(sizeof(spot_schemas_interfaces__msg__ObjectPose3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = spot_schemas_interfaces__msg__ObjectPose3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
spot_schemas_interfaces__msg__ObjectPose3D__Sequence__destroy(spot_schemas_interfaces__msg__ObjectPose3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    spot_schemas_interfaces__msg__ObjectPose3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
spot_schemas_interfaces__msg__ObjectPose3D__Sequence__are_equal(const spot_schemas_interfaces__msg__ObjectPose3D__Sequence * lhs, const spot_schemas_interfaces__msg__ObjectPose3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_schemas_interfaces__msg__ObjectPose3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_schemas_interfaces__msg__ObjectPose3D__Sequence__copy(
  const spot_schemas_interfaces__msg__ObjectPose3D__Sequence * input,
  spot_schemas_interfaces__msg__ObjectPose3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_schemas_interfaces__msg__ObjectPose3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    spot_schemas_interfaces__msg__ObjectPose3D * data =
      (spot_schemas_interfaces__msg__ObjectPose3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_schemas_interfaces__msg__ObjectPose3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          spot_schemas_interfaces__msg__ObjectPose3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spot_schemas_interfaces__msg__ObjectPose3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
