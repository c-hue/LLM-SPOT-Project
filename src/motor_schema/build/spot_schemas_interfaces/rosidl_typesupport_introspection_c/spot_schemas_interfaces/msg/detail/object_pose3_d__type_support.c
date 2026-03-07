// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_schemas_interfaces:msg/ObjectPose3D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__rosidl_typesupport_introspection_c.h"
#include "spot_schemas_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__functions.h"
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `object_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_schemas_interfaces__msg__ObjectPose3D__init(message_memory);
}

void spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_fini_function(void * message_memory)
{
  spot_schemas_interfaces__msg__ObjectPose3D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_member_array[3] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces__msg__ObjectPose3D, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces__msg__ObjectPose3D, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces__msg__ObjectPose3D, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_members = {
  "spot_schemas_interfaces__msg",  // message namespace
  "ObjectPose3D",  // message name
  3,  // number of fields
  sizeof(spot_schemas_interfaces__msg__ObjectPose3D),
  false,  // has_any_key_member_
  spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_member_array,  // message members
  spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_init_function,  // function to initialize message memory (memory has to be allocated)
  spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_type_support_handle = {
  0,
  &spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_members,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_hash,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_description,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_schemas_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, msg, ObjectPose3D)() {
  spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_type_support_handle.typesupport_identifier) {
    spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &spot_schemas_interfaces__msg__ObjectPose3D__rosidl_typesupport_introspection_c__ObjectPose3D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
