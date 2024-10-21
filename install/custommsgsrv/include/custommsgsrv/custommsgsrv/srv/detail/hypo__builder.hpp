// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custommsgsrv:srv/Hypo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__HYPO__BUILDER_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__HYPO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custommsgsrv/srv/detail/hypo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custommsgsrv
{

namespace srv
{

namespace builder
{

class Init_Hypo_Request_b
{
public:
  explicit Init_Hypo_Request_b(::custommsgsrv::srv::Hypo_Request & msg)
  : msg_(msg)
  {}
  ::custommsgsrv::srv::Hypo_Request b(::custommsgsrv::srv::Hypo_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::srv::Hypo_Request msg_;
};

class Init_Hypo_Request_a
{
public:
  Init_Hypo_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hypo_Request_b a(::custommsgsrv::srv::Hypo_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Hypo_Request_b(msg_);
  }

private:
  ::custommsgsrv::srv::Hypo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::srv::Hypo_Request>()
{
  return custommsgsrv::srv::builder::Init_Hypo_Request_a();
}

}  // namespace custommsgsrv


namespace custommsgsrv
{

namespace srv
{

namespace builder
{

class Init_Hypo_Response_c
{
public:
  Init_Hypo_Response_c()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custommsgsrv::srv::Hypo_Response c(::custommsgsrv::srv::Hypo_Response::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::srv::Hypo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::srv::Hypo_Response>()
{
  return custommsgsrv::srv::builder::Init_Hypo_Response_c();
}

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__SRV__DETAIL__HYPO__BUILDER_HPP_
