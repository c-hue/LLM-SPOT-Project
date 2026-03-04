// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spot_schemas_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/srv/rotate.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__TRAITS_HPP_
#define SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "spot_schemas_interfaces/srv/detail/rotate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace spot_schemas_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rotate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle_degrees
  {
    out << "angle_degrees: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_degrees, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rotate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle_degrees
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_degrees: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_degrees, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rotate_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace spot_schemas_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use spot_schemas_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const spot_schemas_interfaces::srv::Rotate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  spot_schemas_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spot_schemas_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const spot_schemas_interfaces::srv::Rotate_Request & msg)
{
  return spot_schemas_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<spot_schemas_interfaces::srv::Rotate_Request>()
{
  return "spot_schemas_interfaces::srv::Rotate_Request";
}

template<>
inline const char * name<spot_schemas_interfaces::srv::Rotate_Request>()
{
  return "spot_schemas_interfaces/srv/Rotate_Request";
}

template<>
struct has_fixed_size<spot_schemas_interfaces::srv::Rotate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<spot_schemas_interfaces::srv::Rotate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<spot_schemas_interfaces::srv::Rotate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "spot_schemas_interfaces/msg/detail/status__traits.hpp"

namespace spot_schemas_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rotate_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rotate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rotate_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace spot_schemas_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use spot_schemas_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const spot_schemas_interfaces::srv::Rotate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  spot_schemas_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spot_schemas_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const spot_schemas_interfaces::srv::Rotate_Response & msg)
{
  return spot_schemas_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<spot_schemas_interfaces::srv::Rotate_Response>()
{
  return "spot_schemas_interfaces::srv::Rotate_Response";
}

template<>
inline const char * name<spot_schemas_interfaces::srv::Rotate_Response>()
{
  return "spot_schemas_interfaces/srv/Rotate_Response";
}

template<>
struct has_fixed_size<spot_schemas_interfaces::srv::Rotate_Response>
  : std::integral_constant<bool, has_fixed_size<spot_schemas_interfaces::msg::Status>::value> {};

template<>
struct has_bounded_size<spot_schemas_interfaces::srv::Rotate_Response>
  : std::integral_constant<bool, has_bounded_size<spot_schemas_interfaces::msg::Status>::value> {};

template<>
struct is_message<spot_schemas_interfaces::srv::Rotate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace spot_schemas_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rotate_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rotate_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rotate_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace spot_schemas_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use spot_schemas_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const spot_schemas_interfaces::srv::Rotate_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  spot_schemas_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spot_schemas_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const spot_schemas_interfaces::srv::Rotate_Event & msg)
{
  return spot_schemas_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<spot_schemas_interfaces::srv::Rotate_Event>()
{
  return "spot_schemas_interfaces::srv::Rotate_Event";
}

template<>
inline const char * name<spot_schemas_interfaces::srv::Rotate_Event>()
{
  return "spot_schemas_interfaces/srv/Rotate_Event";
}

template<>
struct has_fixed_size<spot_schemas_interfaces::srv::Rotate_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spot_schemas_interfaces::srv::Rotate_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<spot_schemas_interfaces::srv::Rotate_Request>::value && has_bounded_size<spot_schemas_interfaces::srv::Rotate_Response>::value> {};

template<>
struct is_message<spot_schemas_interfaces::srv::Rotate_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spot_schemas_interfaces::srv::Rotate>()
{
  return "spot_schemas_interfaces::srv::Rotate";
}

template<>
inline const char * name<spot_schemas_interfaces::srv::Rotate>()
{
  return "spot_schemas_interfaces/srv/Rotate";
}

template<>
struct has_fixed_size<spot_schemas_interfaces::srv::Rotate>
  : std::integral_constant<
    bool,
    has_fixed_size<spot_schemas_interfaces::srv::Rotate_Request>::value &&
    has_fixed_size<spot_schemas_interfaces::srv::Rotate_Response>::value
  >
{
};

template<>
struct has_bounded_size<spot_schemas_interfaces::srv::Rotate>
  : std::integral_constant<
    bool,
    has_bounded_size<spot_schemas_interfaces::srv::Rotate_Request>::value &&
    has_bounded_size<spot_schemas_interfaces::srv::Rotate_Response>::value
  >
{
};

template<>
struct is_service<spot_schemas_interfaces::srv::Rotate>
  : std::true_type
{
};

template<>
struct is_service_request<spot_schemas_interfaces::srv::Rotate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spot_schemas_interfaces::srv::Rotate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__TRAITS_HPP_
