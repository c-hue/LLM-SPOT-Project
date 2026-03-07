// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spot_schemas_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/srv/rotate.h"


#ifndef SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_H_
#define SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Rotate in the package spot_schemas_interfaces.
typedef struct spot_schemas_interfaces__srv__Rotate_Request
{
  float angle_degrees;
} spot_schemas_interfaces__srv__Rotate_Request;

// Struct for a sequence of spot_schemas_interfaces__srv__Rotate_Request.
typedef struct spot_schemas_interfaces__srv__Rotate_Request__Sequence
{
  spot_schemas_interfaces__srv__Rotate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_schemas_interfaces__srv__Rotate_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "spot_schemas_interfaces/msg/detail/status__struct.h"

/// Struct defined in srv/Rotate in the package spot_schemas_interfaces.
typedef struct spot_schemas_interfaces__srv__Rotate_Response
{
  spot_schemas_interfaces__msg__Status status;
} spot_schemas_interfaces__srv__Rotate_Response;

// Struct for a sequence of spot_schemas_interfaces__srv__Rotate_Response.
typedef struct spot_schemas_interfaces__srv__Rotate_Response__Sequence
{
  spot_schemas_interfaces__srv__Rotate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_schemas_interfaces__srv__Rotate_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  spot_schemas_interfaces__srv__Rotate_Event__request__MAX_SIZE = 1
};
// response
enum
{
  spot_schemas_interfaces__srv__Rotate_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Rotate in the package spot_schemas_interfaces.
typedef struct spot_schemas_interfaces__srv__Rotate_Event
{
  service_msgs__msg__ServiceEventInfo info;
  spot_schemas_interfaces__srv__Rotate_Request__Sequence request;
  spot_schemas_interfaces__srv__Rotate_Response__Sequence response;
} spot_schemas_interfaces__srv__Rotate_Event;

// Struct for a sequence of spot_schemas_interfaces__srv__Rotate_Event.
typedef struct spot_schemas_interfaces__srv__Rotate_Event__Sequence
{
  spot_schemas_interfaces__srv__Rotate_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_schemas_interfaces__srv__Rotate_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_H_
