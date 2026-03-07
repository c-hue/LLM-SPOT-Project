// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from spot_schemas_interfaces:msg/ColorLabel.idl
// generated code does not contain a copyright notice
#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "spot_schemas_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spot_schemas_interfaces/msg/detail/color_label__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
bool cdr_serialize_spot_schemas_interfaces__msg__ColorLabel(
  const spot_schemas_interfaces__msg__ColorLabel * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
bool cdr_deserialize_spot_schemas_interfaces__msg__ColorLabel(
  eprosima::fastcdr::Cdr &,
  spot_schemas_interfaces__msg__ColorLabel * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t get_serialized_size_spot_schemas_interfaces__msg__ColorLabel(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t max_serialized_size_spot_schemas_interfaces__msg__ColorLabel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
bool cdr_serialize_key_spot_schemas_interfaces__msg__ColorLabel(
  const spot_schemas_interfaces__msg__ColorLabel * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t get_serialized_size_key_spot_schemas_interfaces__msg__ColorLabel(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t max_serialized_size_key_spot_schemas_interfaces__msg__ColorLabel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_schemas_interfaces, msg, ColorLabel)();

#ifdef __cplusplus
}
#endif

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
