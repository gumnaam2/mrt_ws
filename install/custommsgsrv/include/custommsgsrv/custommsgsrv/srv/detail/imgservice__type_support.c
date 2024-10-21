// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custommsgsrv:srv/Imgservice.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custommsgsrv/srv/detail/imgservice__rosidl_typesupport_introspection_c.h"
#include "custommsgsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custommsgsrv/srv/detail/imgservice__functions.h"
#include "custommsgsrv/srv/detail/imgservice__struct.h"


// Include directives for member types
// Member `img`
#include "sensor_msgs/msg/image.h"
// Member `img`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custommsgsrv__srv__Imgservice_Request__init(message_memory);
}

void custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_fini_function(void * message_memory)
{
  custommsgsrv__srv__Imgservice_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_member_array[1] = {
  {
    "img",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custommsgsrv__srv__Imgservice_Request, img),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_members = {
  "custommsgsrv__srv",  // message namespace
  "Imgservice_Request",  // message name
  1,  // number of fields
  sizeof(custommsgsrv__srv__Imgservice_Request),
  custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_member_array,  // message members
  custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_type_support_handle = {
  0,
  &custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custommsgsrv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, srv, Imgservice_Request)() {
  custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_type_support_handle.typesupport_identifier) {
    custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custommsgsrv__srv__Imgservice_Request__rosidl_typesupport_introspection_c__Imgservice_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custommsgsrv/srv/detail/imgservice__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custommsgsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custommsgsrv/srv/detail/imgservice__functions.h"
// already included above
// #include "custommsgsrv/srv/detail/imgservice__struct.h"


// Include directives for member types
// Member `corners`
#include "geometry_msgs/msg/polygon.h"
// Member `corners`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custommsgsrv__srv__Imgservice_Response__init(message_memory);
}

void custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_fini_function(void * message_memory)
{
  custommsgsrv__srv__Imgservice_Response__fini(message_memory);
}

size_t custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__size_function__Imgservice_Response__corners(
  const void * untyped_member)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return member->size;
}

const void * custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_const_function__Imgservice_Response__corners(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_function__Imgservice_Response__corners(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__fetch_function__Imgservice_Response__corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Polygon * item =
    ((const geometry_msgs__msg__Polygon *)
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_const_function__Imgservice_Response__corners(untyped_member, index));
  geometry_msgs__msg__Polygon * value =
    (geometry_msgs__msg__Polygon *)(untyped_value);
  *value = *item;
}

void custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__assign_function__Imgservice_Response__corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Polygon * item =
    ((geometry_msgs__msg__Polygon *)
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_function__Imgservice_Response__corners(untyped_member, index));
  const geometry_msgs__msg__Polygon * value =
    (const geometry_msgs__msg__Polygon *)(untyped_value);
  *item = *value;
}

bool custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__resize_function__Imgservice_Response__corners(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  geometry_msgs__msg__Polygon__Sequence__fini(member);
  return geometry_msgs__msg__Polygon__Sequence__init(member, size);
}

size_t custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__size_function__Imgservice_Response__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_const_function__Imgservice_Response__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_function__Imgservice_Response__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__fetch_function__Imgservice_Response__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_const_function__Imgservice_Response__ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__assign_function__Imgservice_Response__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_function__Imgservice_Response__ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__resize_function__Imgservice_Response__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_member_array[2] = {
  {
    "corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custommsgsrv__srv__Imgservice_Response, corners),  // bytes offset in struct
    NULL,  // default value
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__size_function__Imgservice_Response__corners,  // size() function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_const_function__Imgservice_Response__corners,  // get_const(index) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_function__Imgservice_Response__corners,  // get(index) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__fetch_function__Imgservice_Response__corners,  // fetch(index, &value) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__assign_function__Imgservice_Response__corners,  // assign(index, value) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__resize_function__Imgservice_Response__corners  // resize(index) function pointer
  },
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custommsgsrv__srv__Imgservice_Response, ids),  // bytes offset in struct
    NULL,  // default value
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__size_function__Imgservice_Response__ids,  // size() function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_const_function__Imgservice_Response__ids,  // get_const(index) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__get_function__Imgservice_Response__ids,  // get(index) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__fetch_function__Imgservice_Response__ids,  // fetch(index, &value) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__assign_function__Imgservice_Response__ids,  // assign(index, value) function pointer
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__resize_function__Imgservice_Response__ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_members = {
  "custommsgsrv__srv",  // message namespace
  "Imgservice_Response",  // message name
  2,  // number of fields
  sizeof(custommsgsrv__srv__Imgservice_Response),
  custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_member_array,  // message members
  custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_type_support_handle = {
  0,
  &custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custommsgsrv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, srv, Imgservice_Response)() {
  custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  if (!custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_type_support_handle.typesupport_identifier) {
    custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custommsgsrv__srv__Imgservice_Response__rosidl_typesupport_introspection_c__Imgservice_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custommsgsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custommsgsrv/srv/detail/imgservice__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_service_members = {
  "custommsgsrv__srv",  // service namespace
  "Imgservice",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_Request_message_type_support_handle,
  NULL  // response message
  // custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_Response_message_type_support_handle
};

static rosidl_service_type_support_t custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_service_type_support_handle = {
  0,
  &custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, srv, Imgservice_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, srv, Imgservice_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custommsgsrv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, srv, Imgservice)() {
  if (!custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_service_type_support_handle.typesupport_identifier) {
    custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, srv, Imgservice_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, srv, Imgservice_Response)()->data;
  }

  return &custommsgsrv__srv__detail__imgservice__rosidl_typesupport_introspection_c__Imgservice_service_type_support_handle;
}
