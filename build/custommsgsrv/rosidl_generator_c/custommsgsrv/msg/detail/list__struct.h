// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custommsgsrv:msg/List.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__MSG__DETAIL__LIST__STRUCT_H_
#define CUSTOMMSGSRV__MSG__DETAIL__LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/List in the package custommsgsrv.
typedef struct custommsgsrv__msg__List
{
  rosidl_runtime_c__float__Sequence polygon;
} custommsgsrv__msg__List;

// Struct for a sequence of custommsgsrv__msg__List.
typedef struct custommsgsrv__msg__List__Sequence
{
  custommsgsrv__msg__List * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__msg__List__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMMSGSRV__MSG__DETAIL__LIST__STRUCT_H_
