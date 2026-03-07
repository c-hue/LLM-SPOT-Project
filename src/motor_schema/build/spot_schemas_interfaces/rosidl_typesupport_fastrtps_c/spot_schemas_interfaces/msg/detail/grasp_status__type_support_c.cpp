// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from spot_schemas_interfaces:msg/GraspStatus.idl
// generated code does not contain a copyright notice
#include "spot_schemas_interfaces/msg/detail/grasp_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "spot_schemas_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spot_schemas_interfaces/msg/detail/grasp_status__struct.h"
#include "spot_schemas_interfaces/msg/detail/grasp_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // object_id
#include "rosidl_runtime_c/string_functions.h"  // object_id

// forward declare type support functions


using _GraspStatus__ros_msg_type = spot_schemas_interfaces__msg__GraspStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
bool cdr_serialize_spot_schemas_interfaces__msg__GraspStatus(
  const spot_schemas_interfaces__msg__GraspStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: is_grasping
  {
    cdr << (ros_message->is_grasping ? true : false);
  }

  // Field name: object_id
  {
    const rosidl_runtime_c__String * str = &ros_message->object_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
bool cdr_deserialize_spot_schemas_interfaces__msg__GraspStatus(
  eprosima::fastcdr::Cdr & cdr,
  spot_schemas_interfaces__msg__GraspStatus * ros_message)
{
  // Field name: is_grasping
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_grasping = tmp ? true : false;
  }

  // Field name: object_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->object_id.data) {
      rosidl_runtime_c__String__init(&ros_message->object_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->object_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'object_id'\n");
      return false;
    }
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t get_serialized_size_spot_schemas_interfaces__msg__GraspStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraspStatus__ros_msg_type * ros_message = static_cast<const _GraspStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: is_grasping
  {
    size_t item_size = sizeof(ros_message->is_grasping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_id.size + 1);

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t max_serialized_size_spot_schemas_interfaces__msg__GraspStatus(
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

  // Field name: is_grasping
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: object_id
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

  // Field name: timestamp
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
    using DataType = spot_schemas_interfaces__msg__GraspStatus;
    is_plain =
      (
      offsetof(DataType, timestamp) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
bool cdr_serialize_key_spot_schemas_interfaces__msg__GraspStatus(
  const spot_schemas_interfaces__msg__GraspStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: is_grasping
  {
    cdr << (ros_message->is_grasping ? true : false);
  }

  // Field name: object_id
  {
    const rosidl_runtime_c__String * str = &ros_message->object_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t get_serialized_size_key_spot_schemas_interfaces__msg__GraspStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraspStatus__ros_msg_type * ros_message = static_cast<const _GraspStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: is_grasping
  {
    size_t item_size = sizeof(ros_message->is_grasping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_id.size + 1);

  // Field name: timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_schemas_interfaces
size_t max_serialized_size_key_spot_schemas_interfaces__msg__GraspStatus(
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
  // Field name: is_grasping
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: object_id
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

  // Field name: timestamp
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
    using DataType = spot_schemas_interfaces__msg__GraspStatus;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const spot_schemas_interfaces__msg__GraspStatus * ros_message = static_cast<const spot_schemas_interfaces__msg__GraspStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_spot_schemas_interfaces__msg__GraspStatus(ros_message, cdr);
}

static bool _GraspStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  spot_schemas_interfaces__msg__GraspStatus * ros_message = static_cast<spot_schemas_interfaces__msg__GraspStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_spot_schemas_interfaces__msg__GraspStatus(cdr, ros_message);
}

static uint32_t _GraspStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spot_schemas_interfaces__msg__GraspStatus(
      untyped_ros_message, 0));
}

static size_t _GraspStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_spot_schemas_interfaces__msg__GraspStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraspStatus = {
  "spot_schemas_interfaces::msg",
  "GraspStatus",
  _GraspStatus__cdr_serialize,
  _GraspStatus__cdr_deserialize,
  _GraspStatus__get_serialized_size,
  _GraspStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GraspStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraspStatus,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_hash,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_description,
  &spot_schemas_interfaces__msg__GraspStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_schemas_interfaces, msg, GraspStatus)() {
  return &_GraspStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
