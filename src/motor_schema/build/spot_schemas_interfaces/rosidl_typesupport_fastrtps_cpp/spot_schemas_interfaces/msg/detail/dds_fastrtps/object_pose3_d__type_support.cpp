// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spot_schemas_interfaces:msg/ObjectPose3D.idl
// generated code does not contain a copyright notice
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__functions.h"
#include "spot_schemas_interfaces/msg/detail/object_pose3_d__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PoseStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PoseStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::PoseStamped &,
  size_t current_alignment);
size_t
max_serialized_size_PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::PoseStamped &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::PoseStamped &,
  size_t current_alignment);
size_t
max_serialized_size_key_PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace spot_schemas_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
cdr_serialize(
  const spot_schemas_interfaces::msg::ObjectPose3D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pose,
    cdr);

  // Member: object_id
  cdr << ros_message.object_id;

  // Member: confidence
  cdr << ros_message.confidence;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spot_schemas_interfaces::msg::ObjectPose3D & ros_message)
{
  // Member: pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  // Member: object_id
  cdr >> ros_message.object_id;

  // Member: confidence
  cdr >> ros_message.confidence;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
get_serialized_size(
  const spot_schemas_interfaces::msg::ObjectPose3D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);

  // Member: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.object_id.size() + 1);

  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
max_serialized_size_ObjectPose3D(
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

  // Member: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
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
  // Member: confidence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = spot_schemas_interfaces::msg::ObjectPose3D;
    is_plain =
      (
      offsetof(DataType, confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
cdr_serialize_key(
  const spot_schemas_interfaces::msg::ObjectPose3D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.pose,
    cdr);

  // Member: object_id
  cdr << ros_message.object_id;

  // Member: confidence
  cdr << ros_message.confidence;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
get_serialized_size_key(
  const spot_schemas_interfaces::msg::ObjectPose3D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.pose, current_alignment);

  // Member: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.object_id.size() + 1);

  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_schemas_interfaces
max_serialized_size_key_ObjectPose3D(
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

  // Member: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
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

  // Member: confidence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = spot_schemas_interfaces::msg::ObjectPose3D;
    is_plain =
      (
      offsetof(DataType, confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ObjectPose3D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spot_schemas_interfaces::msg::ObjectPose3D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectPose3D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spot_schemas_interfaces::msg::ObjectPose3D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectPose3D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spot_schemas_interfaces::msg::ObjectPose3D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectPose3D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObjectPose3D(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObjectPose3D__callbacks = {
  "spot_schemas_interfaces::msg",
  "ObjectPose3D",
  _ObjectPose3D__cdr_serialize,
  _ObjectPose3D__cdr_deserialize,
  _ObjectPose3D__get_serialized_size,
  _ObjectPose3D__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ObjectPose3D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectPose3D__callbacks,
  get_message_typesupport_handle_function,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_hash,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_description,
  &spot_schemas_interfaces__msg__ObjectPose3D__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace spot_schemas_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spot_schemas_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_schemas_interfaces::msg::ObjectPose3D>()
{
  return &spot_schemas_interfaces::msg::typesupport_fastrtps_cpp::_ObjectPose3D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spot_schemas_interfaces, msg, ObjectPose3D)() {
  return &spot_schemas_interfaces::msg::typesupport_fastrtps_cpp::_ObjectPose3D__handle;
}

#ifdef __cplusplus
}
#endif
