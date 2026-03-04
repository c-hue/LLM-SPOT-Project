// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from spot_schemas_interfaces:msg/ObjectPose3D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__functions.h"
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__struct.hpp"
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

void ObjectPose3D_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) spot_schemas_interfaces::msg::ObjectPose3D(_init);
}

void ObjectPose3D_fini_function(void * message_memory)
{
  auto typed_message = static_cast<spot_schemas_interfaces::msg::ObjectPose3D *>(message_memory);
  typed_message->~ObjectPose3D();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectPose3D_message_member_array[3] = {
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces::msg::ObjectPose3D, pose),  // bytes offset in struct
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
    offsetof(spot_schemas_interfaces::msg::ObjectPose3D, object_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_schemas_interfaces::msg::ObjectPose3D, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectPose3D_message_members = {
  "spot_schemas_interfaces::msg",  // message namespace
  "ObjectPose3D",  // message name
  3,  // number of fields
  sizeof(spot_schemas_interfaces::msg::ObjectPose3D),
  false,  // has_any_key_member_
  ObjectPose3D_message_member_array,  // message members
  ObjectPose3D_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectPose3D_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectPose3D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectPose3D_message_members,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_hash,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_description,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace spot_schemas_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_schemas_interfaces::msg::ObjectPose3D>()
{
  return &::spot_schemas_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectPose3D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, spot_schemas_interfaces, msg, ObjectPose3D)() {
  return &::spot_schemas_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectPose3D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
