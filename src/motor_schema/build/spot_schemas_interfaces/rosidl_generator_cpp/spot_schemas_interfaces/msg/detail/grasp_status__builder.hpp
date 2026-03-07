// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:msg/GraspStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/grasp_status.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/msg/detail/grasp_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace msg
{

namespace builder
{

class Init_GraspStatus_timestamp
{
public:
  explicit Init_GraspStatus_timestamp(::spot_schemas_interfaces::msg::GraspStatus & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::msg::GraspStatus timestamp(::spot_schemas_interfaces::msg::GraspStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::GraspStatus msg_;
};

class Init_GraspStatus_object_id
{
public:
  explicit Init_GraspStatus_object_id(::spot_schemas_interfaces::msg::GraspStatus & msg)
  : msg_(msg)
  {}
  Init_GraspStatus_timestamp object_id(::spot_schemas_interfaces::msg::GraspStatus::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_GraspStatus_timestamp(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::GraspStatus msg_;
};

class Init_GraspStatus_is_grasping
{
public:
  Init_GraspStatus_is_grasping()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspStatus_object_id is_grasping(::spot_schemas_interfaces::msg::GraspStatus::_is_grasping_type arg)
  {
    msg_.is_grasping = std::move(arg);
    return Init_GraspStatus_object_id(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::GraspStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::msg::GraspStatus>()
{
  return spot_schemas_interfaces::msg::builder::Init_GraspStatus_is_grasping();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__BUILDER_HPP_
