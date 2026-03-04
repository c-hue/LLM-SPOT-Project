// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:srv/DetectObjectColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/srv/detect_object_color.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__DETECT_OBJECT_COLOR__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__DETECT_OBJECT_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/srv/detail/detect_object_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjectColor_Request_target_color
{
public:
  Init_DetectObjectColor_Request_target_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_schemas_interfaces::srv::DetectObjectColor_Request target_color(::spot_schemas_interfaces::srv::DetectObjectColor_Request::_target_color_type arg)
  {
    msg_.target_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::DetectObjectColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::DetectObjectColor_Request>()
{
  return spot_schemas_interfaces::srv::builder::Init_DetectObjectColor_Request_target_color();
}

}  // namespace spot_schemas_interfaces


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjectColor_Response_status
{
public:
  explicit Init_DetectObjectColor_Response_status(::spot_schemas_interfaces::srv::DetectObjectColor_Response & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::srv::DetectObjectColor_Response status(::spot_schemas_interfaces::srv::DetectObjectColor_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::DetectObjectColor_Response msg_;
};

class Init_DetectObjectColor_Response_detected_object
{
public:
  Init_DetectObjectColor_Response_detected_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjectColor_Response_status detected_object(::spot_schemas_interfaces::srv::DetectObjectColor_Response::_detected_object_type arg)
  {
    msg_.detected_object = std::move(arg);
    return Init_DetectObjectColor_Response_status(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::DetectObjectColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::DetectObjectColor_Response>()
{
  return spot_schemas_interfaces::srv::builder::Init_DetectObjectColor_Response_detected_object();
}

}  // namespace spot_schemas_interfaces


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjectColor_Event_response
{
public:
  explicit Init_DetectObjectColor_Event_response(::spot_schemas_interfaces::srv::DetectObjectColor_Event & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::srv::DetectObjectColor_Event response(::spot_schemas_interfaces::srv::DetectObjectColor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::DetectObjectColor_Event msg_;
};

class Init_DetectObjectColor_Event_request
{
public:
  explicit Init_DetectObjectColor_Event_request(::spot_schemas_interfaces::srv::DetectObjectColor_Event & msg)
  : msg_(msg)
  {}
  Init_DetectObjectColor_Event_response request(::spot_schemas_interfaces::srv::DetectObjectColor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectObjectColor_Event_response(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::DetectObjectColor_Event msg_;
};

class Init_DetectObjectColor_Event_info
{
public:
  Init_DetectObjectColor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjectColor_Event_request info(::spot_schemas_interfaces::srv::DetectObjectColor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectObjectColor_Event_request(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::DetectObjectColor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::DetectObjectColor_Event>()
{
  return spot_schemas_interfaces::srv::builder::Init_DetectObjectColor_Event_info();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__DETECT_OBJECT_COLOR__BUILDER_HPP_
