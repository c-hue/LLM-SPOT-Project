// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:srv/WalkToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/srv/walk_to_pose.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__WALK_TO_POSE__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__WALK_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/srv/detail/walk_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_WalkToPose_Request_target_pose
{
public:
  Init_WalkToPose_Request_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_schemas_interfaces::srv::WalkToPose_Request target_pose(::spot_schemas_interfaces::srv::WalkToPose_Request::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::WalkToPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::WalkToPose_Request>()
{
  return spot_schemas_interfaces::srv::builder::Init_WalkToPose_Request_target_pose();
}

}  // namespace spot_schemas_interfaces


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_WalkToPose_Response_status
{
public:
  Init_WalkToPose_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_schemas_interfaces::srv::WalkToPose_Response status(::spot_schemas_interfaces::srv::WalkToPose_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::WalkToPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::WalkToPose_Response>()
{
  return spot_schemas_interfaces::srv::builder::Init_WalkToPose_Response_status();
}

}  // namespace spot_schemas_interfaces


namespace spot_schemas_interfaces
{

namespace srv
{

namespace builder
{

class Init_WalkToPose_Event_response
{
public:
  explicit Init_WalkToPose_Event_response(::spot_schemas_interfaces::srv::WalkToPose_Event & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::srv::WalkToPose_Event response(::spot_schemas_interfaces::srv::WalkToPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::WalkToPose_Event msg_;
};

class Init_WalkToPose_Event_request
{
public:
  explicit Init_WalkToPose_Event_request(::spot_schemas_interfaces::srv::WalkToPose_Event & msg)
  : msg_(msg)
  {}
  Init_WalkToPose_Event_response request(::spot_schemas_interfaces::srv::WalkToPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_WalkToPose_Event_response(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::WalkToPose_Event msg_;
};

class Init_WalkToPose_Event_info
{
public:
  Init_WalkToPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WalkToPose_Event_request info(::spot_schemas_interfaces::srv::WalkToPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_WalkToPose_Event_request(msg_);
  }

private:
  ::spot_schemas_interfaces::srv::WalkToPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::srv::WalkToPose_Event>()
{
  return spot_schemas_interfaces::srv::builder::Init_WalkToPose_Event_info();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__WALK_TO_POSE__BUILDER_HPP_
