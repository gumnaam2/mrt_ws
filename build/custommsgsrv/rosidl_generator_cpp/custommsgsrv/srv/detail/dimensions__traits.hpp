// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custommsgsrv:srv/Dimensions.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__TRAITS_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custommsgsrv/srv/detail/dimensions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace custommsgsrv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Dimensions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dimensions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dimensions_Request & msg, bool use_flow_style = false)
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
  const custommsgsrv::srv::Dimensions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custommsgsrv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custommsgsrv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custommsgsrv::srv::Dimensions_Request & msg)
{
  return custommsgsrv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custommsgsrv::srv::Dimensions_Request>()
{
  return "custommsgsrv::srv::Dimensions_Request";
}

template<>
inline const char * name<custommsgsrv::srv::Dimensions_Request>()
{
  return "custommsgsrv/srv/Dimensions_Request";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Dimensions_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<custommsgsrv::srv::Dimensions_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<custommsgsrv::srv::Dimensions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custommsgsrv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Dimensions_Response & msg,
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
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dimensions_Response & msg,
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

inline std::string to_yaml(const Dimensions_Response & msg, bool use_flow_style = false)
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
  const custommsgsrv::srv::Dimensions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custommsgsrv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custommsgsrv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custommsgsrv::srv::Dimensions_Response & msg)
{
  return custommsgsrv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custommsgsrv::srv::Dimensions_Response>()
{
  return "custommsgsrv::srv::Dimensions_Response";
}

template<>
inline const char * name<custommsgsrv::srv::Dimensions_Response>()
{
  return "custommsgsrv/srv/Dimensions_Response";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Dimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custommsgsrv::srv::Dimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custommsgsrv::srv::Dimensions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custommsgsrv::srv::Dimensions>()
{
  return "custommsgsrv::srv::Dimensions";
}

template<>
inline const char * name<custommsgsrv::srv::Dimensions>()
{
  return "custommsgsrv/srv/Dimensions";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Dimensions>
  : std::integral_constant<
    bool,
    has_fixed_size<custommsgsrv::srv::Dimensions_Request>::value &&
    has_fixed_size<custommsgsrv::srv::Dimensions_Response>::value
  >
{
};

template<>
struct has_bounded_size<custommsgsrv::srv::Dimensions>
  : std::integral_constant<
    bool,
    has_bounded_size<custommsgsrv::srv::Dimensions_Request>::value &&
    has_bounded_size<custommsgsrv::srv::Dimensions_Response>::value
  >
{
};

template<>
struct is_service<custommsgsrv::srv::Dimensions>
  : std::true_type
{
};

template<>
struct is_service_request<custommsgsrv::srv::Dimensions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custommsgsrv::srv::Dimensions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__TRAITS_HPP_
