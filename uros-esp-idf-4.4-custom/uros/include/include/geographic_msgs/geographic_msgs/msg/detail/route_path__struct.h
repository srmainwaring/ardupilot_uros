// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/RoutePath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'network'
// Member 'segments'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/RoutePath in the package geographic_msgs.
/**
  * Path through a route network.
  *
  * A path is a sequence of RouteSegment edges.  This information is
  * extracted from a RouteNetwork graph.  A RoutePath lists the route
  * segments needed to reach some chosen goal.
 */
typedef struct geographic_msgs__msg__RoutePath
{
  std_msgs__msg__Header header;
  /// Route network containing this path
  unique_identifier_msgs__msg__UUID network;
  /// Sequence of RouteSegment IDs
  unique_identifier_msgs__msg__UUID__Sequence segments;
  /// Key/value properties
  geographic_msgs__msg__KeyValue__Sequence props;
} geographic_msgs__msg__RoutePath;

// Struct for a sequence of geographic_msgs__msg__RoutePath.
typedef struct geographic_msgs__msg__RoutePath__Sequence
{
  geographic_msgs__msg__RoutePath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__RoutePath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__STRUCT_H_
