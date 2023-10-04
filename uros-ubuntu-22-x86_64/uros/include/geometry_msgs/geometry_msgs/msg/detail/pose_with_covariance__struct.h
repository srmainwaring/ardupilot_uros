// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseWithCovariance in the package geometry_msgs.
/**
  * This represents a pose in free space with uncertainty.
 */
typedef struct geometry_msgs__msg__PoseWithCovariance
{
  geometry_msgs__msg__Pose pose;
  /// Row-major representation of the 6x6 covariance matrix
  /// The orientation parameters use a fixed-axis representation.
  /// In order, the parameters are:
  /// (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
  double covariance[36];
} geometry_msgs__msg__PoseWithCovariance;

// Struct for a sequence of geometry_msgs__msg__PoseWithCovariance.
typedef struct geometry_msgs__msg__PoseWithCovariance__Sequence
{
  geometry_msgs__msg__PoseWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_H_
