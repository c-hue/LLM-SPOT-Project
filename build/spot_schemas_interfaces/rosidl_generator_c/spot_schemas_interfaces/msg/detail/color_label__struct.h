// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spot_schemas_interfaces:msg/ColorLabel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/color_label.h"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__STRUCT_H_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'color_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ColorLabel in the package spot_schemas_interfaces.
typedef struct spot_schemas_interfaces__msg__ColorLabel
{
  rosidl_runtime_c__String color_name;
} spot_schemas_interfaces__msg__ColorLabel;

// Struct for a sequence of spot_schemas_interfaces__msg__ColorLabel.
typedef struct spot_schemas_interfaces__msg__ColorLabel__Sequence
{
  spot_schemas_interfaces__msg__ColorLabel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_schemas_interfaces__msg__ColorLabel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__STRUCT_H_
