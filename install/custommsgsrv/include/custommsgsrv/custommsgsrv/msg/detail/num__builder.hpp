// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custommsgsrv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__MSG__DETAIL__NUM__BUILDER_HPP_
#define CUSTOMMSGSRV__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custommsgsrv/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custommsgsrv
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custommsgsrv::msg::Num num(::custommsgsrv::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custommsgsrv::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custommsgsrv::msg::Num>()
{
  return custommsgsrv::msg::builder::Init_Num_num();
}

}  // namespace custommsgsrv

#endif  // CUSTOMMSGSRV__MSG__DETAIL__NUM__BUILDER_HPP_
