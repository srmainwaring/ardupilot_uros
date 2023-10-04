// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:msg/GeographicMap.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/geographic_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `bounds`
#include "geographic_msgs/msg/detail/bounding_box__functions.h"
// Member `points`
#include "geographic_msgs/msg/detail/way_point__functions.h"
// Member `features`
#include "geographic_msgs/msg/detail/map_feature__functions.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__functions.h"

bool
geographic_msgs__msg__GeographicMap__init(geographic_msgs__msg__GeographicMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geographic_msgs__msg__GeographicMap__fini(msg);
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->id)) {
    geographic_msgs__msg__GeographicMap__fini(msg);
    return false;
  }
  // bounds
  if (!geographic_msgs__msg__BoundingBox__init(&msg->bounds)) {
    geographic_msgs__msg__GeographicMap__fini(msg);
    return false;
  }
  // points
  if (!geographic_msgs__msg__WayPoint__Sequence__init(&msg->points, 0)) {
    geographic_msgs__msg__GeographicMap__fini(msg);
    return false;
  }
  // features
  if (!geographic_msgs__msg__MapFeature__Sequence__init(&msg->features, 0)) {
    geographic_msgs__msg__GeographicMap__fini(msg);
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__init(&msg->props, 0)) {
    geographic_msgs__msg__GeographicMap__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__msg__GeographicMap__fini(geographic_msgs__msg__GeographicMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  unique_identifier_msgs__msg__UUID__fini(&msg->id);
  // bounds
  geographic_msgs__msg__BoundingBox__fini(&msg->bounds);
  // points
  geographic_msgs__msg__WayPoint__Sequence__fini(&msg->points);
  // features
  geographic_msgs__msg__MapFeature__Sequence__fini(&msg->features);
  // props
  geographic_msgs__msg__KeyValue__Sequence__fini(&msg->props);
}

bool
geographic_msgs__msg__GeographicMap__are_equal(const geographic_msgs__msg__GeographicMap * lhs, const geographic_msgs__msg__GeographicMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // bounds
  if (!geographic_msgs__msg__BoundingBox__are_equal(
      &(lhs->bounds), &(rhs->bounds)))
  {
    return false;
  }
  // points
  if (!geographic_msgs__msg__WayPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // features
  if (!geographic_msgs__msg__MapFeature__Sequence__are_equal(
      &(lhs->features), &(rhs->features)))
  {
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->props), &(rhs->props)))
  {
    return false;
  }
  return true;
}

bool
geographic_msgs__msg__GeographicMap__copy(
  const geographic_msgs__msg__GeographicMap * input,
  geographic_msgs__msg__GeographicMap * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // bounds
  if (!geographic_msgs__msg__BoundingBox__copy(
      &(input->bounds), &(output->bounds)))
  {
    return false;
  }
  // points
  if (!geographic_msgs__msg__WayPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // features
  if (!geographic_msgs__msg__MapFeature__Sequence__copy(
      &(input->features), &(output->features)))
  {
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__copy(
      &(input->props), &(output->props)))
  {
    return false;
  }
  return true;
}

geographic_msgs__msg__GeographicMap *
geographic_msgs__msg__GeographicMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeographicMap * msg = (geographic_msgs__msg__GeographicMap *)allocator.allocate(sizeof(geographic_msgs__msg__GeographicMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__msg__GeographicMap));
  bool success = geographic_msgs__msg__GeographicMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__msg__GeographicMap__destroy(geographic_msgs__msg__GeographicMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geographic_msgs__msg__GeographicMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geographic_msgs__msg__GeographicMap__Sequence__init(geographic_msgs__msg__GeographicMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeographicMap * data = NULL;

  if (size) {
    data = (geographic_msgs__msg__GeographicMap *)allocator.zero_allocate(size, sizeof(geographic_msgs__msg__GeographicMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__msg__GeographicMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__msg__GeographicMap__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
geographic_msgs__msg__GeographicMap__Sequence__fini(geographic_msgs__msg__GeographicMap__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geographic_msgs__msg__GeographicMap__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

geographic_msgs__msg__GeographicMap__Sequence *
geographic_msgs__msg__GeographicMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeographicMap__Sequence * array = (geographic_msgs__msg__GeographicMap__Sequence *)allocator.allocate(sizeof(geographic_msgs__msg__GeographicMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__msg__GeographicMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geographic_msgs__msg__GeographicMap__Sequence__destroy(geographic_msgs__msg__GeographicMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geographic_msgs__msg__GeographicMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geographic_msgs__msg__GeographicMap__Sequence__are_equal(const geographic_msgs__msg__GeographicMap__Sequence * lhs, const geographic_msgs__msg__GeographicMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geographic_msgs__msg__GeographicMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geographic_msgs__msg__GeographicMap__Sequence__copy(
  const geographic_msgs__msg__GeographicMap__Sequence * input,
  geographic_msgs__msg__GeographicMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geographic_msgs__msg__GeographicMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    geographic_msgs__msg__GeographicMap * data =
      (geographic_msgs__msg__GeographicMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geographic_msgs__msg__GeographicMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          geographic_msgs__msg__GeographicMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!geographic_msgs__msg__GeographicMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
