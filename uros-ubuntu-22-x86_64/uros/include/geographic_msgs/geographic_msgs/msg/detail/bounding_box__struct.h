// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'min_pt'
// Member 'max_pt'
#include "geographic_msgs/msg/detail/geo_point__struct.h"

/// Struct defined in msg/BoundingBox in the package geographic_msgs.
/**
  * Geographic map bounding box. 
  *
  * The two GeoPoints denote diagonally opposite corners of the box.
  *
  * If min_pt.latitude is NaN, the bounding box is "global", matching
  * any valid latitude, longitude and altitude.
  *
  * If min_pt.altitude is NaN, the bounding box is two-dimensional and
  * matches any altitude within the specified latitude and longitude
  * range.
 */
typedef struct geographic_msgs__msg__BoundingBox
{
  /// lowest and most Southwestern corner
  geographic_msgs__msg__GeoPoint min_pt;
  /// highest and most Northeastern corner
  geographic_msgs__msg__GeoPoint max_pt;
} geographic_msgs__msg__BoundingBox;

// Struct for a sequence of geographic_msgs__msg__BoundingBox.
typedef struct geographic_msgs__msg__BoundingBox__Sequence
{
  geographic_msgs__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
