// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:srv/GetParameterTypes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/srv/detail/get_parameter_types__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/srv/detail/get_parameter_types__functions.h"
#include "rcl_interfaces/srv/detail/get_parameter_types__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__srv__GetParameterTypes_Request__init(message_memory);
}

void rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_fini_function(void * message_memory)
{
  rcl_interfaces__srv__GetParameterTypes_Request__fini(message_memory);
}

size_t rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__size_function__GetParameterTypes_Request__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__get_const_function__GetParameterTypes_Request__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__get_function__GetParameterTypes_Request__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__fetch_function__GetParameterTypes_Request__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__get_const_function__GetParameterTypes_Request__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__assign_function__GetParameterTypes_Request__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__get_function__GetParameterTypes_Request__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__resize_function__GetParameterTypes_Request__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_member_array[1] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__GetParameterTypes_Request, names),  // bytes offset in struct
    NULL,  // default value
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__size_function__GetParameterTypes_Request__names,  // size() function pointer
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__get_const_function__GetParameterTypes_Request__names,  // get_const(index) function pointer
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__get_function__GetParameterTypes_Request__names,  // get(index) function pointer
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__fetch_function__GetParameterTypes_Request__names,  // fetch(index, &value) function pointer
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__assign_function__GetParameterTypes_Request__names,  // assign(index, value) function pointer
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__resize_function__GetParameterTypes_Request__names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "GetParameterTypes_Request",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__GetParameterTypes_Request),
  rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_member_array,  // message members
  rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_type_support_handle = {
  0,
  &rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Request)() {
  if (!rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rcl_interfaces__srv__GetParameterTypes_Request__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rcl_interfaces/srv/detail/get_parameter_types__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameter_types__functions.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameter_types__struct.h"


// Include directives for member types
// Member `types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rcl_interfaces__srv__GetParameterTypes_Response__init(message_memory);
}

void rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_fini_function(void * message_memory)
{
  rcl_interfaces__srv__GetParameterTypes_Response__fini(message_memory);
}

size_t rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__size_function__GetParameterTypes_Response__types(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameterTypes_Response__types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__get_function__GetParameterTypes_Response__types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameterTypes_Response__types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameterTypes_Response__types(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__assign_function__GetParameterTypes_Response__types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__get_function__GetParameterTypes_Response__types(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__resize_function__GetParameterTypes_Response__types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_member_array[1] = {
  {
    "types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__GetParameterTypes_Response, types),  // bytes offset in struct
    NULL,  // default value
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__size_function__GetParameterTypes_Response__types,  // size() function pointer
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__get_const_function__GetParameterTypes_Response__types,  // get_const(index) function pointer
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__get_function__GetParameterTypes_Response__types,  // get(index) function pointer
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__fetch_function__GetParameterTypes_Response__types,  // fetch(index, &value) function pointer
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__assign_function__GetParameterTypes_Response__types,  // assign(index, value) function pointer
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__resize_function__GetParameterTypes_Response__types  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "GetParameterTypes_Response",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__GetParameterTypes_Response),
  rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_member_array,  // message members
  rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_type_support_handle = {
  0,
  &rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Response)() {
  if (!rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rcl_interfaces__srv__GetParameterTypes_Response__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameter_types__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_service_members = {
  "rcl_interfaces__srv",  // service namespace
  "GetParameterTypes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_Request_message_type_support_handle,
  NULL  // response message
  // rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_Response_message_type_support_handle
};

static rosidl_service_type_support_t rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle = {
  0,
  &rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes)() {
  if (!rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetParameterTypes_Response)()->data;
  }

  return &rcl_interfaces__srv__detail__get_parameter_types__rosidl_typesupport_introspection_c__GetParameterTypes_service_type_support_handle;
}