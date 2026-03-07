// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spot_schemas_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/status.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spot_schemas_interfaces/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spot_schemas_interfaces
{

namespace msg
{

namespace builder
{

class Init_Status_message
{
public:
  explicit Init_Status_message(::spot_schemas_interfaces::msg::Status & msg)
  : msg_(msg)
  {}
  ::spot_schemas_interfaces::msg::Status message(::spot_schemas_interfaces::msg::Status::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Status msg_;
};

class Init_Status_success
{
public:
  Init_Status_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_message success(::spot_schemas_interfaces::msg::Status::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Status_message(msg_);
  }

private:
  ::spot_schemas_interfaces::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::spot_schemas_interfaces::msg::Status>()
{
  return spot_schemas_interfaces::msg::builder::Init_Status_success();
}

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_
