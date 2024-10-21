// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custommsgsrv:msg/List.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__MSG__DETAIL__LIST__TRAITS_HPP_
#define CUSTOMMSGSRV__MSG__DETAIL__LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custommsgsrv/msg/detail/list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custommsgsrv
{

namespace msg
{

inline void to_flow_style_yaml(
  const List & msg,
  std::ostream & out)
{
  out << "{";
  // member: polygon
  {
    if (msg.polygon.size() == 0) {
      out << "polygon: []";
    } else {
      out << "polygon: [";
      size_t pending_items = msg.polygon.size();
      for (auto item : msg.polygon) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const List & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygon.size() == 0) {
      out << "polygon: []\n";
    } else {
      out << "polygon:\n";
      for (auto item : msg.polygon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const List & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custommsgsrv

namespace rosidl_generator_traits
{

[[deprecated("use custommsgsrv::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custommsgsrv::msg::List & msg,
  std::ostream & out, size_t indentation = 0)
{
  custommsgsrv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custommsgsrv::msg::to_yaml() instead")]]
inline std::string to_yaml(const custommsgsrv::msg::List & msg)
{
  return custommsgsrv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custommsgsrv::msg::List>()
{
  return "custommsgsrv::msg::List";
}

template<>
inline const char * name<custommsgsrv::msg::List>()
{
  return "custommsgsrv/msg/List";
}

template<>
struct has_fixed_size<custommsgsrv::msg::List>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custommsgsrv::msg::List>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custommsgsrv::msg::List>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOMMSGSRV__MSG__DETAIL__LIST__TRAITS_HPP_
