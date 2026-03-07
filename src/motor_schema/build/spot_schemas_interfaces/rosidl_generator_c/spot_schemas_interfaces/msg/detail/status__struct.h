// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spot_schemas_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/status.h"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Status in the package spot_schemas_interfaces.
typedef struct spot_schemas_interfaces__msg__Status
{
  bool success;
  rosidl_runtime_c__String message;
} spot_schemas_interfaces__msg__Status;

// Struct for a sequence of spot_schemas_interfaces__msg__Status.
typedef struct spot_schemas_interfaces__msg__Status__Sequence
{
  spot_schemas_interfaces__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_schemas_interfaces__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_
