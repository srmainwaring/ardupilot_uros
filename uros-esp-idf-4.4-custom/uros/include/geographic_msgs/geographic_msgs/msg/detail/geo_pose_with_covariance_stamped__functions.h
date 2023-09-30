// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from geographic_msgs:msg/GeoPoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE_STAMPED__FUNCTIONS_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "geographic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geographic_msgs/msg/detail/geo_pose_with_covariance_stamped__struct.h"

/// Initialize msg/GeoPoseWithCovarianceStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped
 * )) before or use
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__GeoPoseWithCovarianceStamped__init(geographic_msgs__msg__GeoPoseWithCovarianceStamped * msg);

/// Finalize msg/GeoPoseWithCovarianceStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__GeoPoseWithCovarianceStamped__fini(geographic_msgs__msg__GeoPoseWithCovarianceStamped * msg);

/// Create msg/GeoPoseWithCovarianceStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__msg__GeoPoseWithCovarianceStamped *
geographic_msgs__msg__GeoPoseWithCovarianceStamped__create();

/// Destroy msg/GeoPoseWithCovarianceStamped message.
/**
 * It calls
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__GeoPoseWithCovarianceStamped__destroy(geographic_msgs__msg__GeoPoseWithCovarianceStamped * msg);

/// Check for msg/GeoPoseWithCovarianceStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__GeoPoseWithCovarianceStamped__are_equal(const geographic_msgs__msg__GeoPoseWithCovarianceStamped * lhs, const geographic_msgs__msg__GeoPoseWithCovarianceStamped * rhs);

/// Copy a msg/GeoPoseWithCovarianceStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__GeoPoseWithCovarianceStamped__copy(
  const geographic_msgs__msg__GeoPoseWithCovarianceStamped * input,
  geographic_msgs__msg__GeoPoseWithCovarianceStamped * output);

/// Initialize array of msg/GeoPoseWithCovarianceStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__init(geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence * array, size_t size);

/// Finalize array of msg/GeoPoseWithCovarianceStamped messages.
/**
 * It calls
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__fini(geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence * array);

/// Create array of msg/GeoPoseWithCovarianceStamped messages.
/**
 * It allocates the memory for the array and calls
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence *
geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__create(size_t size);

/// Destroy array of msg/GeoPoseWithCovarianceStamped messages.
/**
 * It calls
 * geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__destroy(geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence * array);

/// Check for msg/GeoPoseWithCovarianceStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__are_equal(const geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence * lhs, const geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence * rhs);

/// Copy an array of msg/GeoPoseWithCovarianceStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence__copy(
  const geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence * input,
  geographic_msgs__msg__GeoPoseWithCovarianceStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE_STAMPED__FUNCTIONS_H_
