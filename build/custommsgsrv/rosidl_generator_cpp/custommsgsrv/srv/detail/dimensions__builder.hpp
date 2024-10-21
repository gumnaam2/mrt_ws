// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custommsgsrv:srv/Dimensions.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__BUILDER_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custommsgsrv/srv/detail/dimensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custommsgsrv
{

namespace srv
{

namespace builder
{

class Init_Dimensions_Request_img
{
public:
  Init_Dimensions_Request_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custommsgsrv::srv::Dimensions_Request img(::custommsgsrv::srv::Dimensions_Request::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::srv::Dimensions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::srv::Dimensions_Request>()
{
  return custommsgsrv::srv::builder::Init_Dimensions_Request_img();
}

}  // namespace custommsgsrv


namespace custommsgsrv
{

namespace srv
{

namespace builder
{

class Init_Dimensions_Response_c
{
public:
  explicit Init_Dimensions_Response_c(::custommsgsrv::srv::Dimensions_Response & msg)
  : msg_(msg)
  {}
  ::custommsgsrv::srv::Dimensions_Response c(::custommsgsrv::srv::Dimensions_Response::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::srv::Dimensions_Response msg_;
};

class Init_Dimensions_Response_b
{
public:
  explicit Init_Dimensions_Response_b(::custommsgsrv::srv::Dimensions_Response & msg)
  : msg_(msg)
  {}
  Init_Dimensions_Response_c b(::custommsgsrv::srv::Dimensions_Response::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Dimensions_Response_c(msg_);
  }

private:
  ::custommsgsrv::srv::Dimensions_Response msg_;
};

class Init_Dimensions_Response_a
{
public:
  Init_Dimensions_Response_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dimensions_Response_b a(::custommsgsrv::srv::Dimensions_Response::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Dimensions_Response_b(msg_);
  }

private:
  ::custommsgsrv::srv::Dimensions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::srv::Dimensions_Response>()
{
  return custommsgsrv::srv::builder::Init_Dimensions_Response_a();
}

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__BUILDER_HPP_
