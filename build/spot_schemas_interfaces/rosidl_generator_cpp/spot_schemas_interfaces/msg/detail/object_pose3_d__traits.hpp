// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_schemas_interfaces:msg/ObjectPose3D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/object_pose3_d.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT_POSE3_D__TRAITS_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT_POSE3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "spot_schemas_interfaces/msg/detail/object_pose3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace spot_schemas_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectPose3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectPose3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectPose3D & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace spot_schemas_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use spot_schemas_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const spot_schemas_interfaces::msg::ObjectPose3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  spot_schemas_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spot_schemas_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const spot_schemas_interfaces::msg::ObjectPose3D & msg)
{
  return spot_schemas_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<spot_schemas_interfaces::msg::ObjectPose3D>()
{
  return "spot_schemas_interfaces::msg::ObjectPose3D";
}

template<>
inline const char * name<spot_schemas_interfaces::msg::ObjectPose3D>()
{
  return "spot_schemas_interfaces/msg/ObjectPose3D";
}

template<>
struct has_fixed_size<spot_schemas_interfaces::msg::ObjectPose3D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_schemas_interfaces::msg::ObjectPose3D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_schemas_interfaces::msg::ObjectPose3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT_POSE3_D__TRAITS_HPP_
