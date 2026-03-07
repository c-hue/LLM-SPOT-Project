// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_schemas_interfaces:msg/GraspStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/msg/grasp_status.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__STRUCT_HPP_
#define SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__spot_schemas_interfaces__msg__GraspStatus __attribute__((deprecated))
#else
# define DEPRECATED__spot_schemas_interfaces__msg__GraspStatus __declspec(deprecated)
#endif

namespace spot_schemas_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspStatus_
{
  using Type = GraspStatus_<ContainerAllocator>;

  explicit GraspStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_grasping = false;
      this->object_id = "";
      this->timestamp = 0.0;
    }
  }

  explicit GraspStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_grasping = false;
      this->object_id = "";
      this->timestamp = 0.0;
    }
  }

  // field types and members
  using _is_grasping_type =
    bool;
  _is_grasping_type is_grasping;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__is_grasping(
    const bool & _arg)
  {
    this->is_grasping = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_schemas_interfaces__msg__GraspStatus
    std::shared_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_schemas_interfaces__msg__GraspStatus
    std::shared_ptr<spot_schemas_interfaces::msg::GraspStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspStatus_ & other) const
  {
    if (this->is_grasping != other.is_grasping) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspStatus_

// alias to use template instance with default allocator
using GraspStatus =
  spot_schemas_interfaces::msg::GraspStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__MSG__DETAIL__GRASP_STATUS__STRUCT_HPP_
