// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from custommsgsrv:srv/Hypo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custommsgsrv/srv/detail/hypo__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custommsgsrv
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Hypo_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Hypo_Request_type_support_ids_t;

static const _Hypo_Request_type_support_ids_t _Hypo_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Hypo_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Hypo_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Hypo_Request_type_support_symbol_names_t _Hypo_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custommsgsrv, srv, Hypo_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custommsgsrv, srv, Hypo_Request)),
  }
};

typedef struct _Hypo_Request_type_support_data_t
{
  void * data[2];
} _Hypo_Request_type_support_data_t;

static _Hypo_Request_type_support_data_t _Hypo_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Hypo_Request_message_typesupport_map = {
  2,
  "custommsgsrv",
  &_Hypo_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Hypo_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Hypo_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Hypo_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Hypo_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace custommsgsrv

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custommsgsrv::srv::Hypo_Request>()
{
  return &::custommsgsrv::srv::rosidl_typesupport_cpp::Hypo_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custommsgsrv, srv, Hypo_Request)() {
  return get_message_type_support_handle<custommsgsrv::srv::Hypo_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custommsgsrv/srv/detail/hypo__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custommsgsrv
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Hypo_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Hypo_Response_type_support_ids_t;

static const _Hypo_Response_type_support_ids_t _Hypo_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Hypo_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Hypo_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Hypo_Response_type_support_symbol_names_t _Hypo_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custommsgsrv, srv, Hypo_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custommsgsrv, srv, Hypo_Response)),
  }
};

typedef struct _Hypo_Response_type_support_data_t
{
  void * data[2];
} _Hypo_Response_type_support_data_t;

static _Hypo_Response_type_support_data_t _Hypo_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Hypo_Response_message_typesupport_map = {
  2,
  "custommsgsrv",
  &_Hypo_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Hypo_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Hypo_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Hypo_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Hypo_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace custommsgsrv

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custommsgsrv::srv::Hypo_Response>()
{
  return &::custommsgsrv::srv::rosidl_typesupport_cpp::Hypo_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custommsgsrv, srv, Hypo_Response)() {
  return get_message_type_support_handle<custommsgsrv::srv::Hypo_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custommsgsrv/srv/detail/hypo__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custommsgsrv
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Hypo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Hypo_type_support_ids_t;

static const _Hypo_type_support_ids_t _Hypo_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Hypo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Hypo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Hypo_type_support_symbol_names_t _Hypo_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custommsgsrv, srv, Hypo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custommsgsrv, srv, Hypo)),
  }
};

typedef struct _Hypo_type_support_data_t
{
  void * data[2];
} _Hypo_type_support_data_t;

static _Hypo_type_support_data_t _Hypo_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Hypo_service_typesupport_map = {
  2,
  "custommsgsrv",
  &_Hypo_service_typesupport_ids.typesupport_identifier[0],
  &_Hypo_service_typesupport_symbol_names.symbol_name[0],
  &_Hypo_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Hypo_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Hypo_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace custommsgsrv

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<custommsgsrv::srv::Hypo>()
{
  return &::custommsgsrv::srv::rosidl_typesupport_cpp::Hypo_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
