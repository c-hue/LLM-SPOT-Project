// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from spot_schemas_interfaces:msg/GraspStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "spot_schemas_interfaces/msg/detail/grasp_status__functions.h"
#include "spot_schemas_interfaces/msg/detail/grasp_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace spot_schemas_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GraspStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) spot_schemas_interfaces::msg::GraspStatus(_init);
}

void GraspStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<spot_schemas_interfaces::msg::GraspStatus *>(message_memory);
  typed_message->~GraspStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraspStatus_message_member_array[3] = {
  {
    "is_grasping",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces::msg::GraspStatus, is_grasping),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces::msg::GraspStatus, object_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces::msg::GraspStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraspStatus_message_members = {
  "spot_schemas_interfaces::msg",  // message namespace
  "GraspStatus",  // message name
  3,  // number of fields
  sizeof(spot_schemas_interfaces::msg::GraspStatus),
  false,  // has_any_key_member_
  GraspStatus_message_member_array,  // message members
  GraspStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraspStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraspStatus_message_members,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_hash,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_description,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace spot_schemas_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_schemas_interfaces::msg::GraspStatus>()
{
  return &::spot_schemas_interfaces::msg::rosidl_typesupport_introspection_cpp::GraspStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, spot_schemas_interfaces, msg, GraspStatus)() {
  return &::spot_schemas_interfaces::msg::rosidl_typesupport_introspection_cpp::GraspStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
