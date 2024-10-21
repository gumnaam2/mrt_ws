// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custommsgsrv:srv/Imgservice.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__BUILDER_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custommsgsrv/srv/detail/imgservice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custommsgsrv
{

namespace srv
{

namespace builder
{

class Init_Imgservice_Request_img
{
public:
  Init_Imgservice_Request_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custommsgsrv::srv::Imgservice_Request img(::custommsgsrv::srv::Imgservice_Request::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::srv::Imgservice_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::srv::Imgservice_Request>()
{
  return custommsgsrv::srv::builder::Init_Imgservice_Request_img();
}

}  // namespace custommsgsrv


namespace custommsgsrv
{

namespace srv
{

namespace builder
{

class Init_Imgservice_Response_ids
{
public:
  explicit Init_Imgservice_Response_ids(::custommsgsrv::srv::Imgservice_Response & msg)
  : msg_(msg)
  {}
  ::custommsgsrv::srv::Imgservice_Response ids(::custommsgsrv::srv::Imgservice_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::srv::Imgservice_Response msg_;
};

class Init_Imgservice_Response_corners
{
public:
  Init_Imgservice_Response_corners()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imgservice_Response_ids corners(::custommsgsrv::srv::Imgservice_Response::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return Init_Imgservice_Response_ids(msg_);
  }

private:
  ::custommsgsrv::srv::Imgservice_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::srv::Imgservice_Response>()
{
  return custommsgsrv::srv::builder::Init_Imgservice_Response_corners();
}

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__BUILDER_HPP_
