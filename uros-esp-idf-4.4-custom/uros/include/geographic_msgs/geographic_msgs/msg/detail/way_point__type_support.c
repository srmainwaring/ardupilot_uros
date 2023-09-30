// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/WayPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/way_point__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/way_point__functions.h"
#include "geographic_msgs/msg/detail/way_point__struct.h"


// Include directives for member types
// Member `id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geographic_msgs/msg/geo_point.h"
// Member `position`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"
// Member `props`
#include "geographic_msgs/msg/key_value.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__WayPoint__init(message_memory);
}

void geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_fini_function(void * message_memory)
{
  geographic_msgs__msg__WayPoint__fini(message_memory);
}

size_t geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__size_function__WayPoint__props(
  const void * untyped_member)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__get_const_function__WayPoint__props(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__get_function__WayPoint__props(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__fetch_function__WayPoint__props(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geographic_msgs__msg__KeyValue * item =
    ((const geographic_msgs__msg__KeyValue *)
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__get_const_function__WayPoint__props(untyped_member, index));
  geographic_msgs__msg__KeyValue * value =
    (geographic_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__assign_function__WayPoint__props(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geographic_msgs__msg__KeyValue * item =
    ((geographic_msgs__msg__KeyValue *)
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__get_function__WayPoint__props(untyped_member, index));
  const geographic_msgs__msg__KeyValue * value =
    (const geographic_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__resize_function__WayPoint__props(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  geographic_msgs__msg__KeyValue__Sequence__fini(member);
  return geographic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__WayPoint, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__WayPoint, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "props",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__WayPoint, props),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__size_function__WayPoint__props,  // size() function pointer
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__get_const_function__WayPoint__props,  // get_const(index) function pointer
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__get_function__WayPoint__props,  // get(index) function pointer
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__fetch_function__WayPoint__props,  // fetch(index, &value) function pointer
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__assign_function__WayPoint__props,  // assign(index, value) function pointer
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__resize_function__WayPoint__props  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_members = {
  "geographic_msgs__msg",  // message namespace
  "WayPoint",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__msg__WayPoint),
  geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array,  // message members
  geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle = {
  0,
  &geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, WayPoint)() {
  geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, KeyValue)();
  if (!geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__msg__WayPoint__rosidl_typesupport_introspection_c__WayPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
