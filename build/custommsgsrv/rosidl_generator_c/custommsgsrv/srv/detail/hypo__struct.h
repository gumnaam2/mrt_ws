// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custommsgsrv:srv/Hypo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__SRV__DETAIL__HYPO__STRUCT_H_
#define CUSTOMMSGSRV__SRV__DETAIL__HYPO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Hypo in the package custommsgsrv.
typedef struct custommsgsrv__srv__Hypo_Request
{
  double a;
  double b;
} custommsgsrv__srv__Hypo_Request;

// Struct for a sequence of custommsgsrv__srv__Hypo_Request.
typedef struct custommsgsrv__srv__Hypo_Request__Sequence
{
  custommsgsrv__srv__Hypo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__srv__Hypo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Hypo in the package custommsgsrv.
typedef struct custommsgsrv__srv__Hypo_Response
{
  double c;
} custommsgsrv__srv__Hypo_Response;

// Struct for a sequence of custommsgsrv__srv__Hypo_Response.
typedef struct custommsgsrv__srv__Hypo_Response__Sequence
{
  custommsgsrv__srv__Hypo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__srv__Hypo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMMSGSRV__SRV__DETAIL__HYPO__STRUCT_H_
