// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from spot_schemas_interfaces:msg/GraspStatus.idl
// generated code does not contain a copyright notice

#include "spot_schemas_interfaces/msg/detail/grasp_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__msg__GraspStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x84, 0x90, 0x9b, 0xda, 0x1a, 0x69, 0xae,
      0x15, 0xa0, 0x13, 0x1b, 0x6f, 0x8d, 0xbf, 0xf0,
      0x50, 0x26, 0x35, 0x45, 0xd4, 0x86, 0x2e, 0xd9,
      0x67, 0x6f, 0x53, 0xbd, 0x1a, 0x84, 0xce, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char spot_schemas_interfaces__msg__GraspStatus__TYPE_NAME[] = "spot_schemas_interfaces/msg/GraspStatus";

// Define type names, field names, and default values
static char spot_schemas_interfaces__msg__GraspStatus__FIELD_NAME__is_grasping[] = "is_grasping";
static char spot_schemas_interfaces__msg__GraspStatus__FIELD_NAME__object_id[] = "object_id";
static char spot_schemas_interfaces__msg__GraspStatus__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__msg__GraspStatus__FIELDS[] = {
  {
    {spot_schemas_interfaces__msg__GraspStatus__FIELD_NAME__is_grasping, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__GraspStatus__FIELD_NAME__object_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__GraspStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
spot_schemas_interfaces__msg__GraspStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__msg__GraspStatus__TYPE_NAME, 39, 39},
      {spot_schemas_interfaces__msg__GraspStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool is_grasping\n"
  "string object_id\n"
  "float64 timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__msg__GraspStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__msg__GraspStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__msg__GraspStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__msg__GraspStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
