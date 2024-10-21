// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custommsgsrv:srv/Imgservice.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__STRUCT_H_
#define CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/Imgservice in the package custommsgsrv.
typedef struct custommsgsrv__srv__Imgservice_Request
{
  sensor_msgs__msg__Image img;
} custommsgsrv__srv__Imgservice_Request;

// Struct for a sequence of custommsgsrv__srv__Imgservice_Request.
typedef struct custommsgsrv__srv__Imgservice_Request__Sequence
{
  custommsgsrv__srv__Imgservice_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__srv__Imgservice_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'corners'
#include "geometry_msgs/msg/detail/polygon__struct.h"
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Imgservice in the package custommsgsrv.
typedef struct custommsgsrv__srv__Imgservice_Response
{
  geometry_msgs__msg__Polygon__Sequence corners;
  rosidl_runtime_c__int64__Sequence ids;
} custommsgsrv__srv__Imgservice_Response;

// Struct for a sequence of custommsgsrv__srv__Imgservice_Response.
typedef struct custommsgsrv__srv__Imgservice_Response__Sequence
{
  custommsgsrv__srv__Imgservice_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__srv__Imgservice_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMMSGSRV__SRV__DETAIL__IMGSERVICE__STRUCT_H_
