// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custommsgsrv:msg/List.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custommsgsrv/msg/detail/list__rosidl_typesupport_introspection_c.h"
#include "custommsgsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custommsgsrv/msg/detail/list__functions.h"
#include "custommsgsrv/msg/detail/list__struct.h"


// Include directives for member types
// Member `polygon`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custommsgsrv__msg__List__init(message_memory);
}

void custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_fini_function(void * message_memory)
{
  custommsgsrv__msg__List__fini(message_memory);
}

size_t custommsgsrv__msg__List__rosidl_typesupport_introspection_c__size_function__List__polygon(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custommsgsrv__msg__List__rosidl_typesupport_introspection_c__get_const_function__List__polygon(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custommsgsrv__msg__List__rosidl_typesupport_introspection_c__get_function__List__polygon(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custommsgsrv__msg__List__rosidl_typesupport_introspection_c__fetch_function__List__polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__get_const_function__List__polygon(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custommsgsrv__msg__List__rosidl_typesupport_introspection_c__assign_function__List__polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__get_function__List__polygon(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custommsgsrv__msg__List__rosidl_typesupport_introspection_c__resize_function__List__polygon(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_member_array[1] = {
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custommsgsrv__msg__List, polygon),  // bytes offset in struct
    NULL,  // default value
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__size_function__List__polygon,  // size() function pointer
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__get_const_function__List__polygon,  // get_const(index) function pointer
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__get_function__List__polygon,  // get(index) function pointer
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__fetch_function__List__polygon,  // fetch(index, &value) function pointer
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__assign_function__List__polygon,  // assign(index, value) function pointer
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__resize_function__List__polygon  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_members = {
  "custommsgsrv__msg",  // message namespace
  "List",  // message name
  1,  // number of fields
  sizeof(custommsgsrv__msg__List),
  custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_member_array,  // message members
  custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_init_function,  // function to initialize message memory (memory has to be allocated)
  custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_type_support_handle = {
  0,
  &custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custommsgsrv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custommsgsrv, msg, List)() {
  if (!custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_type_support_handle.typesupport_identifier) {
    custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custommsgsrv__msg__List__rosidl_typesupport_introspection_c__List_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
