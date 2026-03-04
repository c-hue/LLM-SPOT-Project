// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_schemas_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/status.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__TRAITS_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "spot_schemas_interfaces/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace spot_schemas_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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
  const spot_schemas_interfaces::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  spot_schemas_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spot_schemas_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const spot_schemas_interfaces::msg::Status & msg)
{
  return spot_schemas_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<spot_schemas_interfaces::msg::Status>()
{
  return "spot_schemas_interfaces::msg::Status";
}

template<>
inline const char * name<spot_schemas_interfaces::msg::Status>()
{
  return "spot_schemas_interfaces/msg/Status";
}

template<>
struct has_fixed_size<spot_schemas_interfaces::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_schemas_interfaces::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spot_schemas_interfaces::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__TRAITS_HPP_
