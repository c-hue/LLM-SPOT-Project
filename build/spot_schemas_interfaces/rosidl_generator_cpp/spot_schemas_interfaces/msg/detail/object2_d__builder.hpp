// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:msg/Object2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/object2_d.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/msg/detail/object2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace msg
{

namespace builder
{

class Init_Object2D_confidence
{
public:
  explicit Init_Object2D_confidence(::spot_schemas_interfaces::msg::Object2D & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::msg::Object2D confidence(::spot_schemas_interfaces::msg::Object2D::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Object2D msg_;
};

class Init_Object2D_height
{
public:
  explicit Init_Object2D_height(::spot_schemas_interfaces::msg::Object2D & msg)
  : msg_(msg)
  {}
  Init_Object2D_confidence height(::spot_schemas_interfaces::msg::Object2D::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Object2D_confidence(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Object2D msg_;
};

class Init_Object2D_width
{
public:
  explicit Init_Object2D_width(::spot_schemas_interfaces::msg::Object2D & msg)
  : msg_(msg)
  {}
  Init_Object2D_height width(::spot_schemas_interfaces::msg::Object2D::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Object2D_height(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Object2D msg_;
};

class Init_Object2D_y
{
public:
  explicit Init_Object2D_y(::spot_schemas_interfaces::msg::Object2D & msg)
  : msg_(msg)
  {}
  Init_Object2D_width y(::spot_schemas_interfaces::msg::Object2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Object2D_width(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Object2D msg_;
};

class Init_Object2D_x
{
public:
  explicit Init_Object2D_x(::spot_schemas_interfaces::msg::Object2D & msg)
  : msg_(msg)
  {}
  Init_Object2D_y x(::spot_schemas_interfaces::msg::Object2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Object2D_y(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Object2D msg_;
};

class Init_Object2D_color
{
public:
  explicit Init_Object2D_color(::spot_schemas_interfaces::msg::Object2D & msg)
  : msg_(msg)
  {}
  Init_Object2D_x color(::spot_schemas_interfaces::msg::Object2D::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Object2D_x(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Object2D msg_;
};

class Init_Object2D_object_id
{
public:
  Init_Object2D_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object2D_color object_id(::spot_schemas_interfaces::msg::Object2D::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_Object2D_color(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Object2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::msg::Object2D>()
{
  return spot_schemas_interfaces::msg::builder::Init_Object2D_object_id();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__BUILDER_HPP_
