// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custommsgsrv:srv/Hypo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__HYPO__TRAITS_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__HYPO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custommsgsrv/srv/detail/hypo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custommsgsrv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Hypo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Hypo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Hypo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custommsgsrv

namespace rosidl_generator_traits
{

[[deprecated("use custommsgsrv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custommsgsrv::srv::Hypo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custommsgsrv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custommsgsrv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custommsgsrv::srv::Hypo_Request & msg)
{
  return custommsgsrv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custommsgsrv::srv::Hypo_Request>()
{
  return "custommsgsrv::srv::Hypo_Request";
}

template<>
inline const char * name<custommsgsrv::srv::Hypo_Request>()
{
  return "custommsgsrv/srv/Hypo_Request";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Hypo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custommsgsrv::srv::Hypo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custommsgsrv::srv::Hypo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custommsgsrv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Hypo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Hypo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Hypo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custommsgsrv

namespace rosidl_generator_traits
{

[[deprecated("use custommsgsrv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custommsgsrv::srv::Hypo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custommsgsrv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custommsgsrv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custommsgsrv::srv::Hypo_Response & msg)
{
  return custommsgsrv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custommsgsrv::srv::Hypo_Response>()
{
  return "custommsgsrv::srv::Hypo_Response";
}

template<>
inline const char * name<custommsgsrv::srv::Hypo_Response>()
{
  return "custommsgsrv/srv/Hypo_Response";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Hypo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custommsgsrv::srv::Hypo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custommsgsrv::srv::Hypo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custommsgsrv::srv::Hypo>()
{
  return "custommsgsrv::srv::Hypo";
}

template<>
inline const char * name<custommsgsrv::srv::Hypo>()
{
  return "custommsgsrv/srv/Hypo";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Hypo>
  : std::integral_constant<
    bool,
    has_fixed_size<custommsgsrv::srv::Hypo_Request>::value &&
    has_fixed_size<custommsgsrv::srv::Hypo_Response>::value
  >
{
};

template<>
struct has_bounded_size<custommsgsrv::srv::Hypo>
  : std::integral_constant<
    bool,
    has_bounded_size<custommsgsrv::srv::Hypo_Request>::value &&
    has_bounded_size<custommsgsrv::srv::Hypo_Response>::value
  >
{
};

template<>
struct is_service<custommsgsrv::srv::Hypo>
  : std::true_type
{
};

template<>
struct is_service_request<custommsgsrv::srv::Hypo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custommsgsrv::srv::Hypo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOMMSGSRV__SRV__DETAIL__HYPO__TRAITS_HPP_
