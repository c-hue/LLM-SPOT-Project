// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_schemas_interfaces:msg/Object2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/object2_d.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__TRAITS_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "spot_schemas_interfaces/msg/detail/object2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace spot_schemas_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
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
  const Object2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
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

inline std::string to_yaml(const Object2D & msg, bool use_flow_style = false)
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
  const spot_schemas_interfaces::msg::Object2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  spot_schemas_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spot_schemas_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const spot_schemas_interfaces::msg::Object2D & msg)
{
  return spot_schemas_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<spot_schemas_interfaces::msg::Object2D>()
{
  return "spot_schemas_interfaces::msg::Object2D";
}

template<>
inline const char * name<spot_schemas_interfaces::msg::Object2D>()
{
  return "spot_schemas_interfaces/msg/Object2D";
}

template<>
struct has_fixed_size<spot_schemas_interfaces::msg::Object2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_schemas_interfaces::msg::Object2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_schemas_interfaces::msg::Object2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__TRAITS_HPP_
