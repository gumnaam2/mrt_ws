// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custommsgsrv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMMSGSRV__MSG__DETAIL__NUM__STRUCT_H_
#define CUSTOMMSGSRV__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package custommsgsrv.
typedef struct custommsgsrv__msg__Num
{
  int64_t num;
} custommsgsrv__msg__Num;

// Struct for a sequence of custommsgsrv__msg__Num.
typedef struct custommsgsrv__msg__Num__Sequence
{
  custommsgsrv__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custommsgsrv__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMMSGSRV__MSG__DETAIL__NUM__STRUCT_H_
