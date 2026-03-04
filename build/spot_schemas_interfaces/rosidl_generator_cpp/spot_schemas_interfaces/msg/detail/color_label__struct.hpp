// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_schemas_interfaces:msg/ColorLabel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/color_label.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__STRUCT_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__spot_schemas_interfaces__msg__ColorLabel __attribute__((deprecated))
#else
# define DEPRECATED__spot_schemas_interfaces__msg__ColorLabel __declspec(deprecated)
#endif

namespace spot_schemas_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorLabel_
{
  using Type = ColorLabel_<ContainerAllocator>;

  explicit ColorLabel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_name = "";
    }
  }

  explicit ColorLabel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_name = "";
    }
  }

  // field types and members
  using _color_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_name_type color_name;

  // setters for named parameter idiom
  Type & set__color_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_schemas_interfaces__msg__ColorLabel
    std::shared_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_schemas_interfaces__msg__ColorLabel
    std::shared_ptr<spot_schemas_interfaces::msg::ColorLabel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorLabel_ & other) const
  {
    if (this->color_name != other.color_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorLabel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorLabel_

// alias to use template instance with default allocator
using ColorLabel =
  spot_schemas_interfaces::msg::ColorLabel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__COLOR_LABEL__STRUCT_HPP_
