// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spot_schemas_interfaces:msg/GraspStatus.idl
// generated code does not contain a copyright notice
#include "spot_schemas_interfaces/msg/detail/grasp_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spot_schemas_interfaces/msg/detail/grasp_status__functions.h"
#include "spot_schemas_interfaces/msg/detail/grasp_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace spot_schemas_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
cdr_serialize(
  const spot_schemas_interfaces::msg::GraspStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_grasping
  cdr << (ros_message.is_grasping ? true : false);

  // Member: object_id
  cdr << ros_message.object_id;

  // Member: timestamp
  cdr << ros_message.timestamp;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spot_schemas_interfaces::msg::GraspStatus & ros_message)
{
  // Member: is_grasping
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_grasping = tmp ? true : false;
  }

  // Member: object_id
  cdr >> ros_message.object_id;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
get_serialized_size(
  const spot_schemas_interfaces::msg::GraspStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_grasping
  {
    size_t item_size = sizeof(ros_message.is_grasping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.object_id.size() + 1);

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
max_serialized_size_GraspStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: is_grasping
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: object_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = spot_schemas_interfaces::msg::GraspStatus;
    is_plain =
      (
      offsetof(DataType, timestamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
cdr_serialize_key(
  const spot_schemas_interfaces::msg::GraspStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_grasping
  cdr << (ros_message.is_grasping ? true : false);

  // Member: object_id
  cdr << ros_message.object_id;

  // Member: timestamp
  cdr << ros_message.timestamp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
get_serialized_size_key(
  const spot_schemas_interfaces::msg::GraspStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_grasping
  {
    size_t item_size = sizeof(ros_message.is_grasping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.object_id.size() + 1);

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
max_serialized_size_key_GraspStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: is_grasping
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: object_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = spot_schemas_interfaces::msg::GraspStatus;
    is_plain =
      (
      offsetof(DataType, timestamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _GraspStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spot_schemas_interfaces::msg::GraspStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GraspStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spot_schemas_interfaces::msg::GraspStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GraspStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spot_schemas_interfaces::msg::GraspStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GraspStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GraspStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GraspStatus__callbacks = {
  "spot_schemas_interfaces::msg",
  "GraspStatus",
  _GraspStatus__cdr_serialize,
  _GraspStatus__cdr_deserialize,
  _GraspStatus__get_serialized_size,
  _GraspStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GraspStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GraspStatus__callbacks,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_hash,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_description,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace spot_schemas_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spot_schemas_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_schemas_interfaces::msg::GraspStatus>()
{
  return &spot_schemas_interfaces::msg::typesupport_fastrtps_cpp::_GraspStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spot_schemas_interfaces, msg, GraspStatus)() {
  return &spot_schemas_interfaces::msg::typesupport_fastrtps_cpp::_GraspStatus__handle;
}

#ifdef __cplusplus
}
#endif
