// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custommsgsrv:srv/Hypo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__HYPO__STRUCT_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__HYPO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custommsgsrv__srv__Hypo_Request __attribute__((deprecated))
#else
# define DEPRECATED__custommsgsrv__srv__Hypo_Request __declspec(deprecated)
#endif

namespace custommsgsrv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Hypo_Request_
{
  using Type = Hypo_Request_<ContainerAllocator>;

  explicit Hypo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  explicit Hypo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custommsgsrv::srv::Hypo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custommsgsrv::srv::Hypo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Hypo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Hypo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custommsgsrv__srv__Hypo_Request
    std::shared_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custommsgsrv__srv__Hypo_Request
    std::shared_ptr<custommsgsrv::srv::Hypo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hypo_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hypo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hypo_Request_

// alias to use template instance with default allocator
using Hypo_Request =
  custommsgsrv::srv::Hypo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custommsgsrv


#ifndef _WIN32
# define DEPRECATED__custommsgsrv__srv__Hypo_Response __attribute__((deprecated))
#else
# define DEPRECATED__custommsgsrv__srv__Hypo_Response __declspec(deprecated)
#endif

namespace custommsgsrv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Hypo_Response_
{
  using Type = Hypo_Response_<ContainerAllocator>;

  explicit Hypo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c = 0.0;
    }
  }

  explicit Hypo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c = 0.0;
    }
  }

  // field types and members
  using _c_type =
    double;
  _c_type c;

  // setters for named parameter idiom
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custommsgsrv::srv::Hypo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custommsgsrv::srv::Hypo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Hypo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custommsgsrv::srv::Hypo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custommsgsrv__srv__Hypo_Response
    std::shared_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custommsgsrv__srv__Hypo_Response
    std::shared_ptr<custommsgsrv::srv::Hypo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hypo_Response_ & other) const
  {
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hypo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hypo_Response_

// alias to use template instance with default allocator
using Hypo_Response =
  custommsgsrv::srv::Hypo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custommsgsrv

namespace custommsgsrv
{

namespace srv
{

struct Hypo
{
  using Request = custommsgsrv::srv::Hypo_Request;
  using Response = custommsgsrv::srv::Hypo_Response;
};

}  // namespace srv

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__SRV__DETAIL__HYPO__STRUCT_HPP_
