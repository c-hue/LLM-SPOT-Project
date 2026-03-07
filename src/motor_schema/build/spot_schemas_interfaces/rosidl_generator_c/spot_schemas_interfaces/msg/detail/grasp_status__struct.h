// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spot_schemas_interfaces:msg/GraspStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/grasp_status.h"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__STRUCT_H_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GraspStatus in the package spot_schemas_interfaces.
typedef struct spot_schemas_interfaces__msg__GraspStatus
{
  bool is_grasping;
  rosidl_runtime_c__String object_id;
  double timestamp;
} spot_schemas_interfaces__msg__GraspStatus;

// Struct for a sequence of spot_schemas_interfaces__msg__GraspStatus.
typedef struct spot_schemas_interfaces__msg__GraspStatus__Sequence
{
  spot_schemas_interfaces__msg__GraspStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_schemas_interfaces__msg__GraspStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__STRUCT_H_
