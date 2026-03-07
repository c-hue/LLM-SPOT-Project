// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:msg/ObjectPose3D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/object_pose3_d.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT_POSE3_D__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT_POSE3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/msg/detail/object_pose3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectPose3D_confidence
{
public:
  explicit Init_ObjectPose3D_confidence(::spot_schemas_interfaces::msg::ObjectPose3D & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::msg::ObjectPose3D confidence(::spot_schemas_interfaces::msg::ObjectPose3D::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::ObjectPose3D msg_;
};

class Init_ObjectPose3D_object_id
{
public:
  explicit Init_ObjectPose3D_object_id(::spot_schemas_interfaces::msg::ObjectPose3D & msg)
  : msg_(msg)
  {}
  Init_ObjectPose3D_confidence object_id(::spot_schemas_interfaces::msg::ObjectPose3D::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_ObjectPose3D_confidence(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::ObjectPose3D msg_;
};

class Init_ObjectPose3D_pose
{
public:
  Init_ObjectPose3D_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectPose3D_object_id pose(::spot_schemas_interfaces::msg::ObjectPose3D::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ObjectPose3D_object_id(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::ObjectPose3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::msg::ObjectPose3D>()
{
  return spot_schemas_interfaces::msg::builder::Init_ObjectPose3D_pose();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT_POSE3_D__BUILDER_HPP_
