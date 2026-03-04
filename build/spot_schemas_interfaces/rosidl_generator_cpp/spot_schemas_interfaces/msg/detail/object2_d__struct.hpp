// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_schemas_interfaces:msg/Object2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/object2_d.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__STRUCT_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__spot_schemas_interfaces__msg__Object2D __attribute__((deprecated))
#else
# define DEPRECATED__spot_schemas_interfaces__msg__Object2D __declspec(deprecated)
#endif

namespace spot_schemas_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object2D_
{
  using Type = Object2D_<ContainerAllocator>;

  explicit Object2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->color = "";
      this->x = 0l;
      this->y = 0l;
      this->width = 0l;
      this->height = 0l;
      this->confidence = 0.0f;
    }
  }

  explicit Object2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc),
    color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->color = "";
      this->x = 0l;
      this->y = 0l;
      this->width = 0l;
      this->height = 0l;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_schemas_interfaces::msg::Object2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_schemas_interfaces::msg::Object2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::msg::Object2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::msg::Object2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_schemas_interfaces__msg__Object2D
    std::shared_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_schemas_interfaces__msg__Object2D
    std::shared_ptr<spot_schemas_interfaces::msg::Object2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object2D_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object2D_

// alias to use template instance with default allocator
using Object2D =
  spot_schemas_interfaces::msg::Object2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__OBJECT2_D__STRUCT_HPP_
