// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/RouteNetwork.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__STRUCT_H_

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
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'bounds'
#include "geographic_msgs/msg/detail/bounding_box__struct.h"
// Member 'points'
#include "geographic_msgs/msg/detail/way_point__struct.h"
// Member 'segments'
#include "geographic_msgs/msg/detail/route_segment__struct.h"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/RouteNetwork in the package geographic_msgs.
/**
  * Geographic map route network.
  *
  * A directed graph of WayPoint nodes and RouteSegment edges.  This
  * information is extracted from the more-detailed contents of a
  * GeographicMap.  A RouteNetwork contains only the way points and
  * route segments of interest for path planning.
 */
typedef struct geographic_msgs__msg__RouteNetwork
{
  std_msgs__msg__Header header;
  /// This route network identifier
  unique_identifier_msgs__msg__UUID id;
  /// 2D bounding box for network
  geographic_msgs__msg__BoundingBox bounds;
  /// Way points in this network
  geographic_msgs__msg__WayPoint__Sequence points;
  /// Directed edges of this network
  geographic_msgs__msg__RouteSegment__Sequence segments;
  /// Network key/value properties
  geographic_msgs__msg__KeyValue__Sequence props;
} geographic_msgs__msg__RouteNetwork;

// Struct for a sequence of geographic_msgs__msg__RouteNetwork.
typedef struct geographic_msgs__msg__RouteNetwork__Sequence
{
  geographic_msgs__msg__RouteNetwork * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__RouteNetwork__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__STRUCT_H_
