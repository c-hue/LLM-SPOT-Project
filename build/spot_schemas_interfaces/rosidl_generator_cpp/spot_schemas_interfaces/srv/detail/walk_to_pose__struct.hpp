// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from spot_schemas_interfaces:srv/WalkToPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "spot_schemas_interfaces/srv/walk_to_pose.hpp"


#ifndef SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__WALK_TO_POSE__STRUCT_HPP_
#define SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__WALK_TO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Request __declspec(deprecated)
#endif

namespace spot_schemas_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WalkToPose_Request_
{
  using Type = WalkToPose_Request_<ContainerAllocator>;

  explicit WalkToPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    (void)_init;
  }

  explicit WalkToPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Request
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Request
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkToPose_Request_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkToPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkToPose_Request_

// alias to use template instance with default allocator
using WalkToPose_Request =
  spot_schemas_interfaces::srv::WalkToPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spot_schemas_interfaces


// Include directives for member types
// Member 'status'
#include "spot_schemas_interfaces/msg/detail/status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Response __declspec(deprecated)
#endif

namespace spot_schemas_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WalkToPose_Response_
{
  using Type = WalkToPose_Response_<ContainerAllocator>;

  explicit WalkToPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit WalkToPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    spot_schemas_interfaces::msg::Status_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const spot_schemas_interfaces::msg::Status_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Response
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Response
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkToPose_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkToPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkToPose_Response_

// alias to use template instance with default allocator
using WalkToPose_Response =
  spot_schemas_interfaces::srv::WalkToPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spot_schemas_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Event __attribute__((deprecated))
#else
# define DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Event __declspec(deprecated)
#endif

namespace spot_schemas_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WalkToPose_Event_
{
  using Type = WalkToPose_Event_<ContainerAllocator>;

  explicit WalkToPose_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit WalkToPose_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_schemas_interfaces::srv::WalkToPose_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<spot_schemas_interfaces::srv::WalkToPose_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Event
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__spot_schemas_interfaces__srv__WalkToPose_Event
    std::shared_ptr<spot_schemas_interfaces::srv::WalkToPose_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WalkToPose_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const WalkToPose_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WalkToPose_Event_

// alias to use template instance with default allocator
using WalkToPose_Event =
  spot_schemas_interfaces::srv::WalkToPose_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace spot_schemas_interfaces

namespace spot_schemas_interfaces
{

namespace srv
{

struct WalkToPose
{
  using Request = spot_schemas_interfaces::srv::WalkToPose_Request;
  using Response = spot_schemas_interfaces::srv::WalkToPose_Response;
  using Event = spot_schemas_interfaces::srv::WalkToPose_Event;
};

}  // namespace srv

}  // namespace spot_schemas_interfaces

#endif  // SPOT_SCHEMAS_INTERFACES__SRV__DETAIL__WALK_TO_POSE__STRUCT_HPP_
