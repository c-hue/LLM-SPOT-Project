// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_schemas_interfaces:srv/DetectObjectColor.idl
// generated code does not contain a copyright notice
#include "spot_schemas_interfaces/srv/detail/detect_object_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_color`
#include "rosidl_runtime_c/string_functions.h"

bool
spot_schemas_interfaces__srv__DetectObjectColor_Request__init(spot_schemas_interfaces__srv__DetectObjectColor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_color
  if (!rosidl_runtime_c__String__init(&msg->target_color)) {
    spot_schemas_interfaces__srv__DetectObjectColor_Request__fini(msg);
    return false;
  }
  return true;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Request__fini(spot_schemas_interfaces__srv__DetectObjectColor_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_color
  rosidl_runtime_c__String__fini(&msg->target_color);
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Request__are_equal(const spot_schemas_interfaces__srv__DetectObjectColor_Request * lhs, const spot_schemas_interfaces__srv__DetectObjectColor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_color), &(rhs->target_color)))
  {
    return false;
  }
  return true;
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Request__copy(
  const spot_schemas_interfaces__srv__DetectObjectColor_Request * input,
  spot_schemas_interfaces__srv__DetectObjectColor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_color
  if (!rosidl_runtime_c__String__copy(
      &(input->target_color), &(output->target_color)))
  {
    return false;
  }
  return true;
}

spot_schemas_interfaces__srv__DetectObjectColor_Request *
spot_schemas_interfaces__srv__DetectObjectColor_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Request * msg = (spot_schemas_interfaces__srv__DetectObjectColor_Request *)allocator.allocate(sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Request));
  bool success = spot_schemas_interfaces__srv__DetectObjectColor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Request__destroy(spot_schemas_interfaces__srv__DetectObjectColor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    spot_schemas_interfaces__srv__DetectObjectColor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__init(spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Request * data = NULL;

  if (size) {
    data = (spot_schemas_interfaces__srv__DetectObjectColor_Request *)allocator.zero_allocate(size, sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_schemas_interfaces__srv__DetectObjectColor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_schemas_interfaces__srv__DetectObjectColor_Request__fini(&data[i - 1]);
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
spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__fini(spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * array)
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
      spot_schemas_interfaces__srv__DetectObjectColor_Request__fini(&array->data[i]);
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

spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence *
spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * array = (spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence *)allocator.allocate(sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__destroy(spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__are_equal(const spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * lhs, const spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_schemas_interfaces__srv__DetectObjectColor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__copy(
  const spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * input,
  spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    spot_schemas_interfaces__srv__DetectObjectColor_Request * data =
      (spot_schemas_interfaces__srv__DetectObjectColor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_schemas_interfaces__srv__DetectObjectColor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          spot_schemas_interfaces__srv__DetectObjectColor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spot_schemas_interfaces__srv__DetectObjectColor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `detected_object`
#include "spot_schemas_interfaces/msg/detail/object2_d__functions.h"
// Member `status`
#include "spot_schemas_interfaces/msg/detail/status__functions.h"

bool
spot_schemas_interfaces__srv__DetectObjectColor_Response__init(spot_schemas_interfaces__srv__DetectObjectColor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // detected_object
  if (!spot_schemas_interfaces__msg__Object2D__init(&msg->detected_object)) {
    spot_schemas_interfaces__srv__DetectObjectColor_Response__fini(msg);
    return false;
  }
  // status
  if (!spot_schemas_interfaces__msg__Status__init(&msg->status)) {
    spot_schemas_interfaces__srv__DetectObjectColor_Response__fini(msg);
    return false;
  }
  return true;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Response__fini(spot_schemas_interfaces__srv__DetectObjectColor_Response * msg)
{
  if (!msg) {
    return;
  }
  // detected_object
  spot_schemas_interfaces__msg__Object2D__fini(&msg->detected_object);
  // status
  spot_schemas_interfaces__msg__Status__fini(&msg->status);
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Response__are_equal(const spot_schemas_interfaces__srv__DetectObjectColor_Response * lhs, const spot_schemas_interfaces__srv__DetectObjectColor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detected_object
  if (!spot_schemas_interfaces__msg__Object2D__are_equal(
      &(lhs->detected_object), &(rhs->detected_object)))
  {
    return false;
  }
  // status
  if (!spot_schemas_interfaces__msg__Status__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Response__copy(
  const spot_schemas_interfaces__srv__DetectObjectColor_Response * input,
  spot_schemas_interfaces__srv__DetectObjectColor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // detected_object
  if (!spot_schemas_interfaces__msg__Object2D__copy(
      &(input->detected_object), &(output->detected_object)))
  {
    return false;
  }
  // status
  if (!spot_schemas_interfaces__msg__Status__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

spot_schemas_interfaces__srv__DetectObjectColor_Response *
spot_schemas_interfaces__srv__DetectObjectColor_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Response * msg = (spot_schemas_interfaces__srv__DetectObjectColor_Response *)allocator.allocate(sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Response));
  bool success = spot_schemas_interfaces__srv__DetectObjectColor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Response__destroy(spot_schemas_interfaces__srv__DetectObjectColor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    spot_schemas_interfaces__srv__DetectObjectColor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__init(spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Response * data = NULL;

  if (size) {
    data = (spot_schemas_interfaces__srv__DetectObjectColor_Response *)allocator.zero_allocate(size, sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_schemas_interfaces__srv__DetectObjectColor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_schemas_interfaces__srv__DetectObjectColor_Response__fini(&data[i - 1]);
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
spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__fini(spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * array)
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
      spot_schemas_interfaces__srv__DetectObjectColor_Response__fini(&array->data[i]);
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

spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence *
spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * array = (spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence *)allocator.allocate(sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__destroy(spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__are_equal(const spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * lhs, const spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_schemas_interfaces__srv__DetectObjectColor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__copy(
  const spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * input,
  spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    spot_schemas_interfaces__srv__DetectObjectColor_Response * data =
      (spot_schemas_interfaces__srv__DetectObjectColor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_schemas_interfaces__srv__DetectObjectColor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          spot_schemas_interfaces__srv__DetectObjectColor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spot_schemas_interfaces__srv__DetectObjectColor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "spot_schemas_interfaces/srv/detail/detect_object_color__functions.h"

bool
spot_schemas_interfaces__srv__DetectObjectColor_Event__init(spot_schemas_interfaces__srv__DetectObjectColor_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(msg);
    return false;
  }
  // request
  if (!spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__init(&msg->request, 0)) {
    spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(msg);
    return false;
  }
  // response
  if (!spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__init(&msg->response, 0)) {
    spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(msg);
    return false;
  }
  return true;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(spot_schemas_interfaces__srv__DetectObjectColor_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__fini(&msg->request);
  // response
  spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__fini(&msg->response);
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Event__are_equal(const spot_schemas_interfaces__srv__DetectObjectColor_Event * lhs, const spot_schemas_interfaces__srv__DetectObjectColor_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Event__copy(
  const spot_schemas_interfaces__srv__DetectObjectColor_Event * input,
  spot_schemas_interfaces__srv__DetectObjectColor_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!spot_schemas_interfaces__srv__DetectObjectColor_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!spot_schemas_interfaces__srv__DetectObjectColor_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

spot_schemas_interfaces__srv__DetectObjectColor_Event *
spot_schemas_interfaces__srv__DetectObjectColor_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Event * msg = (spot_schemas_interfaces__srv__DetectObjectColor_Event *)allocator.allocate(sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Event));
  bool success = spot_schemas_interfaces__srv__DetectObjectColor_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Event__destroy(spot_schemas_interfaces__srv__DetectObjectColor_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__init(spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Event * data = NULL;

  if (size) {
    data = (spot_schemas_interfaces__srv__DetectObjectColor_Event *)allocator.zero_allocate(size, sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_schemas_interfaces__srv__DetectObjectColor_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(&data[i - 1]);
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
spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__fini(spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * array)
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
      spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(&array->data[i]);
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

spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence *
spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * array = (spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence *)allocator.allocate(sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__destroy(spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__are_equal(const spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * lhs, const spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_schemas_interfaces__srv__DetectObjectColor_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence__copy(
  const spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * input,
  spot_schemas_interfaces__srv__DetectObjectColor_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_schemas_interfaces__srv__DetectObjectColor_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    spot_schemas_interfaces__srv__DetectObjectColor_Event * data =
      (spot_schemas_interfaces__srv__DetectObjectColor_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_schemas_interfaces__srv__DetectObjectColor_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          spot_schemas_interfaces__srv__DetectObjectColor_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spot_schemas_interfaces__srv__DetectObjectColor_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
