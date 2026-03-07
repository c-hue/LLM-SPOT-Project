// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_schemas_interfaces:srv/WalkToPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_schemas_interfaces/srv/detail/walk_to_pose__rosidl_typesupport_introspection_c.h"
#include "spot_schemas_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_schemas_interfaces/srv/detail/walk_to_pose__functions.h"
#include "spot_schemas_interfaces/srv/detail/walk_to_pose__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_schemas_interfaces__srv__WalkToPose_Request__init(message_memory);
}

void spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_fini_function(void * message_memory)
{
  spot_schemas_interfaces__srv__WalkToPose_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_member_array[1] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces__srv__WalkToPose_Request, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_members = {
  "spot_schemas_interfaces__srv",  // message namespace
  "WalkToPose_Request",  // message name
  1,  // number of fields
  sizeof(spot_schemas_interfaces__srv__WalkToPose_Request),
  false,  // has_any_key_member_
  spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_member_array,  // message members
  spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_type_support_handle = {
  0,
  &spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_members,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__srv__WalkToPose_Request__get_type_hash,
  &spot_schemas_interfaces__srv__WalkToPose_Request__get_type_description,
  &spot_schemas_interfaces__srv__WalkToPose_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_schemas_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Request)() {
  spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_type_support_handle.typesupport_identifier) {
    spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_schemas_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__functions.h"
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__struct.h"


// Include directives for member types
// Member `status`
#include "spot_schemas_interfaces/msg/status.h"
// Member `status`
#include "spot_schemas_interfaces/msg/detail/status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_schemas_interfaces__srv__WalkToPose_Response__init(message_memory);
}

void spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_fini_function(void * message_memory)
{
  spot_schemas_interfaces__srv__WalkToPose_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces__srv__WalkToPose_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_members = {
  "spot_schemas_interfaces__srv",  // message namespace
  "WalkToPose_Response",  // message name
  1,  // number of fields
  sizeof(spot_schemas_interfaces__srv__WalkToPose_Response),
  false,  // has_any_key_member_
  spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_member_array,  // message members
  spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_type_support_handle = {
  0,
  &spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_members,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__srv__WalkToPose_Response__get_type_hash,
  &spot_schemas_interfaces__srv__WalkToPose_Response__get_type_description,
  &spot_schemas_interfaces__srv__WalkToPose_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_schemas_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Response)() {
  spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, msg, Status)();
  if (!spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_type_support_handle.typesupport_identifier) {
    spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_schemas_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__functions.h"
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "spot_schemas_interfaces/srv/walk_to_pose.h"
// Member `request`
// Member `response`
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_schemas_interfaces__srv__WalkToPose_Event__init(message_memory);
}

void spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_fini_function(void * message_memory)
{
  spot_schemas_interfaces__srv__WalkToPose_Event__fini(message_memory);
}

size_t spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__size_function__WalkToPose_Event__request(
  const void * untyped_member)
{
  const spot_schemas_interfaces__srv__WalkToPose_Request__Sequence * member =
    (const spot_schemas_interfaces__srv__WalkToPose_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_const_function__WalkToPose_Event__request(
  const void * untyped_member, size_t index)
{
  const spot_schemas_interfaces__srv__WalkToPose_Request__Sequence * member =
    (const spot_schemas_interfaces__srv__WalkToPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_function__WalkToPose_Event__request(
  void * untyped_member, size_t index)
{
  spot_schemas_interfaces__srv__WalkToPose_Request__Sequence * member =
    (spot_schemas_interfaces__srv__WalkToPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__fetch_function__WalkToPose_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const spot_schemas_interfaces__srv__WalkToPose_Request * item =
    ((const spot_schemas_interfaces__srv__WalkToPose_Request *)
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_const_function__WalkToPose_Event__request(untyped_member, index));
  spot_schemas_interfaces__srv__WalkToPose_Request * value =
    (spot_schemas_interfaces__srv__WalkToPose_Request *)(untyped_value);
  *value = *item;
}

void spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__assign_function__WalkToPose_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  spot_schemas_interfaces__srv__WalkToPose_Request * item =
    ((spot_schemas_interfaces__srv__WalkToPose_Request *)
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_function__WalkToPose_Event__request(untyped_member, index));
  const spot_schemas_interfaces__srv__WalkToPose_Request * value =
    (const spot_schemas_interfaces__srv__WalkToPose_Request *)(untyped_value);
  *item = *value;
}

bool spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__resize_function__WalkToPose_Event__request(
  void * untyped_member, size_t size)
{
  spot_schemas_interfaces__srv__WalkToPose_Request__Sequence * member =
    (spot_schemas_interfaces__srv__WalkToPose_Request__Sequence *)(untyped_member);
  spot_schemas_interfaces__srv__WalkToPose_Request__Sequence__fini(member);
  return spot_schemas_interfaces__srv__WalkToPose_Request__Sequence__init(member, size);
}

size_t spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__size_function__WalkToPose_Event__response(
  const void * untyped_member)
{
  const spot_schemas_interfaces__srv__WalkToPose_Response__Sequence * member =
    (const spot_schemas_interfaces__srv__WalkToPose_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_const_function__WalkToPose_Event__response(
  const void * untyped_member, size_t index)
{
  const spot_schemas_interfaces__srv__WalkToPose_Response__Sequence * member =
    (const spot_schemas_interfaces__srv__WalkToPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_function__WalkToPose_Event__response(
  void * untyped_member, size_t index)
{
  spot_schemas_interfaces__srv__WalkToPose_Response__Sequence * member =
    (spot_schemas_interfaces__srv__WalkToPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__fetch_function__WalkToPose_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const spot_schemas_interfaces__srv__WalkToPose_Response * item =
    ((const spot_schemas_interfaces__srv__WalkToPose_Response *)
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_const_function__WalkToPose_Event__response(untyped_member, index));
  spot_schemas_interfaces__srv__WalkToPose_Response * value =
    (spot_schemas_interfaces__srv__WalkToPose_Response *)(untyped_value);
  *value = *item;
}

void spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__assign_function__WalkToPose_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  spot_schemas_interfaces__srv__WalkToPose_Response * item =
    ((spot_schemas_interfaces__srv__WalkToPose_Response *)
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_function__WalkToPose_Event__response(untyped_member, index));
  const spot_schemas_interfaces__srv__WalkToPose_Response * value =
    (const spot_schemas_interfaces__srv__WalkToPose_Response *)(untyped_value);
  *item = *value;
}

bool spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__resize_function__WalkToPose_Event__response(
  void * untyped_member, size_t size)
{
  spot_schemas_interfaces__srv__WalkToPose_Response__Sequence * member =
    (spot_schemas_interfaces__srv__WalkToPose_Response__Sequence *)(untyped_member);
  spot_schemas_interfaces__srv__WalkToPose_Response__Sequence__fini(member);
  return spot_schemas_interfaces__srv__WalkToPose_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces__srv__WalkToPose_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(spot_schemas_interfaces__srv__WalkToPose_Event, request),  // bytes offset in struct
    NULL,  // default value
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__size_function__WalkToPose_Event__request,  // size() function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_const_function__WalkToPose_Event__request,  // get_const(index) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_function__WalkToPose_Event__request,  // get(index) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__fetch_function__WalkToPose_Event__request,  // fetch(index, &value) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__assign_function__WalkToPose_Event__request,  // assign(index, value) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__resize_function__WalkToPose_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(spot_schemas_interfaces__srv__WalkToPose_Event, response),  // bytes offset in struct
    NULL,  // default value
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__size_function__WalkToPose_Event__response,  // size() function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_const_function__WalkToPose_Event__response,  // get_const(index) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__get_function__WalkToPose_Event__response,  // get(index) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__fetch_function__WalkToPose_Event__response,  // fetch(index, &value) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__assign_function__WalkToPose_Event__response,  // assign(index, value) function pointer
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__resize_function__WalkToPose_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_members = {
  "spot_schemas_interfaces__srv",  // message namespace
  "WalkToPose_Event",  // message name
  3,  // number of fields
  sizeof(spot_schemas_interfaces__srv__WalkToPose_Event),
  false,  // has_any_key_member_
  spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_member_array,  // message members
  spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_type_support_handle = {
  0,
  &spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_members,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__srv__WalkToPose_Event__get_type_hash,
  &spot_schemas_interfaces__srv__WalkToPose_Event__get_type_description,
  &spot_schemas_interfaces__srv__WalkToPose_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_schemas_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Event)() {
  spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Request)();
  spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Response)();
  if (!spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_type_support_handle.typesupport_identifier) {
    spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "spot_schemas_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "spot_schemas_interfaces/srv/detail/walk_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_service_members = {
  "spot_schemas_interfaces__srv",  // service namespace
  "WalkToPose",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_Request_message_type_support_handle,
  NULL,  // response message
  // spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_Response_message_type_support_handle
  NULL  // event_message
  // spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_Response_message_type_support_handle
};


static rosidl_service_type_support_t spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_service_type_support_handle = {
  0,
  &spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_service_members,
  get_service_typesupport_handle_function,
  &spot_schemas_interfaces__srv__WalkToPose_Request__rosidl_typesupport_introspection_c__WalkToPose_Request_message_type_support_handle,
  &spot_schemas_interfaces__srv__WalkToPose_Response__rosidl_typesupport_introspection_c__WalkToPose_Response_message_type_support_handle,
  &spot_schemas_interfaces__srv__WalkToPose_Event__rosidl_typesupport_introspection_c__WalkToPose_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    spot_schemas_interfaces,
    srv,
    WalkToPose
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    spot_schemas_interfaces,
    srv,
    WalkToPose
  ),
  &spot_schemas_interfaces__srv__WalkToPose__get_type_hash,
  &spot_schemas_interfaces__srv__WalkToPose__get_type_description,
  &spot_schemas_interfaces__srv__WalkToPose__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_schemas_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose)(void) {
  if (!spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_service_type_support_handle.typesupport_identifier) {
    spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_schemas_interfaces, srv, WalkToPose_Event)()->data;
  }

  return &spot_schemas_interfaces__srv__detail__walk_to_pose__rosidl_typesupport_introspection_c__WalkToPose_service_type_support_handle;
}
