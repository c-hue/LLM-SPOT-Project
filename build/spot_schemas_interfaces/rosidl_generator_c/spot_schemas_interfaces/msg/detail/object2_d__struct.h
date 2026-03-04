// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spot_schemas_interfaces:msg/Object2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/object2_d.h"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__STRUCT_H_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'object_id'
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Object2D in the package spot_schemas_interfaces.
typedef struct spot_schemas_interfaces__msg__Object2D
{
  rosidl_runtime_c__String object_id;
  rosidl_runtime_c__String color;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  float confidence;
} spot_schemas_interfaces__msg__Object2D;

// Struct for a sequence of spot_schemas_interfaces__msg__Object2D.
typedef struct spot_schemas_interfaces__msg__Object2D__Sequence
{
  spot_schemas_interfaces__msg__Object2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_schemas_interfaces__msg__Object2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__STRUCT_H_
