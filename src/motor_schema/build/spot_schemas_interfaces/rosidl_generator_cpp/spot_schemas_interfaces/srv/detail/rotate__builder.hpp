// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/srv/rotate.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/srv/detail/rotate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rotate_Request_angle_degrees
{
public:
  Init_Rotate_Request_angle_degrees()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_schemas_interfaces::srv::Rotate_Request angle_degrees(::spot_schemas_interfaces::srv::Rotate_Request::_angle_degrees_type arg)
  {
    msg_.angle_degrees = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::Rotate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::Rotate_Request>()
{
  return spot_schemas_interfaces::srv::builder::Init_Rotate_Request_angle_degrees();
}

}  // namespace spot_schemas_interfaces


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rotate_Response_status
{
public:
  Init_Rotate_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_schemas_interfaces::srv::Rotate_Response status(::spot_schemas_interfaces::srv::Rotate_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::Rotate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::Rotate_Response>()
{
  return spot_schemas_interfaces::srv::builder::Init_Rotate_Response_status();
}

}  // namespace spot_schemas_interfaces


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rotate_Event_response
{
public:
  explicit Init_Rotate_Event_response(::spot_schemas_interfaces::srv::Rotate_Event & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::srv::Rotate_Event response(::spot_schemas_interfaces::srv::Rotate_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::Rotate_Event msg_;
};

class Init_Rotate_Event_request
{
public:
  explicit Init_Rotate_Event_request(::spot_schemas_interfaces::srv::Rotate_Event & msg)
  : msg_(msg)
  {}
  Init_Rotate_Event_response request(::spot_schemas_interfaces::srv::Rotate_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Rotate_Event_response(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::Rotate_Event msg_;
};

class Init_Rotate_Event_info
{
public:
  Init_Rotate_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rotate_Event_request info(::spot_schemas_interfaces::srv::Rotate_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Rotate_Event_request(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::Rotate_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::Rotate_Event>()
{
  return spot_schemas_interfaces::srv::builder::Init_Rotate_Event_info();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__ROTATE__BUILDER_HPP_
