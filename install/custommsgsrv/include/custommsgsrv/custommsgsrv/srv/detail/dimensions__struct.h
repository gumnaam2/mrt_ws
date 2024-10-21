// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custommsgsrv:srv/Dimensions.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__STRUCT_H_
#define CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__STRUCT_H_

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

/// Struct defined in srv/Dimensions in the package custommsgsrv.
typedef struct custommsgsrv__srv__Dimensions_Request
{
  sensor_msgs__msg__Image img;
} custommsgsrv__srv__Dimensions_Request;

// Struct for a sequence of custommsgsrv__srv__Dimensions_Request.
typedef struct custommsgsrv__srv__Dimensions_Request__Sequence
{
  custommsgsrv__srv__Dimensions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__srv__Dimensions_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Dimensions in the package custommsgsrv.
typedef struct custommsgsrv__srv__Dimensions_Response
{
  int64_t a;
  int64_t b;
  int64_t c;
} custommsgsrv__srv__Dimensions_Response;

// Struct for a sequence of custommsgsrv__srv__Dimensions_Response.
typedef struct custommsgsrv__srv__Dimensions_Response__Sequence
{
  custommsgsrv__srv__Dimensions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__srv__Dimensions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMMSGSRV__SRV__DETAIL__DIMENSIONS__STRUCT_H_
