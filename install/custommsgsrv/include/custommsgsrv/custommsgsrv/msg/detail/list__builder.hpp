// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custommsgsrv:msg/List.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__MSG__DETAIL__LIST__BUILDER_HPP_
#define CUSTOMMSGSRV__MSG__DETAIL__LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custommsgsrv/msg/detail/list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custommsgsrv
{

namespace msg
{

namespace builder
{

class Init_List_polygon
{
public:
  Init_List_polygon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custommsgsrv::msg::List polygon(::custommsgsrv::msg::List::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::msg::List msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::msg::List>()
{
  return custommsgsrv::msg::builder::Init_List_polygon();
}

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__MSG__DETAIL__LIST__BUILDER_HPP_
