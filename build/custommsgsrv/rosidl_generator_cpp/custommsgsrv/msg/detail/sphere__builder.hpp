// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custommsgsrv:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define CUSTOMMSGSRV__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custommsgsrv/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custommsgsrv
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::custommsgsrv::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::custommsgsrv::msg::Sphere radius(::custommsgsrv::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::custommsgsrv::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::custommsgsrv::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::msg::Sphere>()
{
  return custommsgsrv::msg::builder::Init_Sphere_center();
}

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__MSG__DETAIL__SPHERE__BUILDER_HPP_
