// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custommsgsrv:srv/Imgservice.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__STRUCT_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custommsgsrv__srv__Imgservice_Request __attribute__((deprecated))
#else
# define DEPRECATED__custommsgsrv__srv__Imgservice_Request __declspec(deprecated)
#endif

namespace custommsgsrv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Imgservice_Request_
{
  using Type = Imgservice_Request_<ContainerAllocator>;

  explicit Imgservice_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    (void)_init;
  }

  explicit Imgservice_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custommsgsrv::srv::Imgservice_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custommsgsrv::srv::Imgservice_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Imgservice_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Imgservice_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custommsgsrv__srv__Imgservice_Request
    std::shared_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custommsgsrv__srv__Imgservice_Request
    std::shared_ptr<custommsgsrv::srv::Imgservice_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imgservice_Request_ & other) const
  {
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imgservice_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imgservice_Request_

// alias to use template instance with default allocator
using Imgservice_Request =
  custommsgsrv::srv::Imgservice_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custommsgsrv


// Include directives for member types
// Member 'corners'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custommsgsrv__srv__Imgservice_Response __attribute__((deprecated))
#else
# define DEPRECATED__custommsgsrv__srv__Imgservice_Response __declspec(deprecated)
#endif

namespace custommsgsrv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Imgservice_Response_
{
  using Type = Imgservice_Response_<ContainerAllocator>;

  explicit Imgservice_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Imgservice_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _corners_type =
    std::vector<geometry_msgs::msg::Polygon_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Polygon_<ContainerAllocator>>>;
  _corners_type corners;
  using _ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _ids_type ids;

  // setters for named parameter idiom
  Type & set__corners(
    const std::vector<geometry_msgs::msg::Polygon_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Polygon_<ContainerAllocator>>> & _arg)
  {
    this->corners = _arg;
    return *this;
  }
  Type & set__ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custommsgsrv::srv::Imgservice_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custommsgsrv::srv::Imgservice_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Imgservice_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Imgservice_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custommsgsrv__srv__Imgservice_Response
    std::shared_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custommsgsrv__srv__Imgservice_Response
    std::shared_ptr<custommsgsrv::srv::Imgservice_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imgservice_Response_ & other) const
  {
    if (this->corners != other.corners) {
      return false;
    }
    if (this->ids != other.ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imgservice_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imgservice_Response_

// alias to use template instance with default allocator
using Imgservice_Response =
  custommsgsrv::srv::Imgservice_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custommsgsrv

namespace custommsgsrv
{

namespace srv
{

struct Imgservice
{
  using Request = custommsgsrv::srv::Imgservice_Request;
  using Response = custommsgsrv::srv::Imgservice_Response;
};

}  // namespace srv

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__STRUCT_HPP_
