// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:msg/ColorLabel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/color_label.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/msg/detail/color_label__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace msg
{

namespace builder
{

class Init_ColorLabel_color_name
{
public:
  Init_ColorLabel_color_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spot_schemas_interfaces::msg::ColorLabel color_name(::spot_schemas_interfaces::msg::ColorLabel::_color_name_type arg)
  {
    msg_.color_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::ColorLabel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::msg::ColorLabel>()
{
  return spot_schemas_interfaces::msg::builder::Init_ColorLabel_color_name();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__BUILDER_HPP_
