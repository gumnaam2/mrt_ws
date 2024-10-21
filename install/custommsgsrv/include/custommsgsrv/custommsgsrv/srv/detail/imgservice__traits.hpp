// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custommsgsrv:srv/Imgservice.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__TRAITS_HPP_
#define CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custommsgsrv/srv/detail/imgservice__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace custommsgsrv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Imgservice_Request & msg,
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
  const Imgservice_Request & msg,
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

inline std::string to_yaml(const Imgservice_Request & msg, bool use_flow_style = false)
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
  const custommsgsrv::srv::Imgservice_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custommsgsrv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custommsgsrv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custommsgsrv::srv::Imgservice_Request & msg)
{
  return custommsgsrv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custommsgsrv::srv::Imgservice_Request>()
{
  return "custommsgsrv::srv::Imgservice_Request";
}

template<>
inline const char * name<custommsgsrv::srv::Imgservice_Request>()
{
  return "custommsgsrv/srv/Imgservice_Request";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Imgservice_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<custommsgsrv::srv::Imgservice_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<custommsgsrv::srv::Imgservice_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'corners'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace custommsgsrv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Imgservice_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: corners
  {
    if (msg.corners.size() == 0) {
      out << "corners: []";
    } else {
      out << "corners: [";
      size_t pending_items = msg.corners.size();
      for (auto item : msg.corners) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
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
  const Imgservice_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
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

inline std::string to_yaml(const Imgservice_Response & msg, bool use_flow_style = false)
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
  const custommsgsrv::srv::Imgservice_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custommsgsrv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custommsgsrv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custommsgsrv::srv::Imgservice_Response & msg)
{
  return custommsgsrv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custommsgsrv::srv::Imgservice_Response>()
{
  return "custommsgsrv::srv::Imgservice_Response";
}

template<>
inline const char * name<custommsgsrv::srv::Imgservice_Response>()
{
  return "custommsgsrv/srv/Imgservice_Response";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Imgservice_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custommsgsrv::srv::Imgservice_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custommsgsrv::srv::Imgservice_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custommsgsrv::srv::Imgservice>()
{
  return "custommsgsrv::srv::Imgservice";
}

template<>
inline const char * name<custommsgsrv::srv::Imgservice>()
{
  return "custommsgsrv/srv/Imgservice";
}

template<>
struct has_fixed_size<custommsgsrv::srv::Imgservice>
  : std::integral_constant<
    bool,
    has_fixed_size<custommsgsrv::srv::Imgservice_Request>::value &&
    has_fixed_size<custommsgsrv::srv::Imgservice_Response>::value
  >
{
};

template<>
struct has_bounded_size<custommsgsrv::srv::Imgservice>
  : std::integral_constant<
    bool,
    has_bounded_size<custommsgsrv::srv::Imgservice_Request>::value &&
    has_bounded_size<custommsgsrv::srv::Imgservice_Response>::value
  >
{
};

template<>
struct is_service<custommsgsrv::srv::Imgservice>
  : std::true_type
{
};

template<>
struct is_service_request<custommsgsrv::srv::Imgservice_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custommsgsrv::srv::Imgservice_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__TRAITS_HPP_
