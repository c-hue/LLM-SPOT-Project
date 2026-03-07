// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from spot_schemas_interfaces:msg/Object2D.idl
// generated code does not contain a copyright notice

#include "spot_schemas_interfaces/msg/detail/object2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__msg__Object2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x06, 0xcb, 0xee, 0x42, 0x54, 0x2e, 0x56,
      0xab, 0xfe, 0x94, 0xae, 0x3e, 0x81, 0xbb, 0x76,
      0x49, 0x82, 0x9c, 0xe9, 0xab, 0xc4, 0x37, 0x53,
      0x35, 0xad, 0x70, 0x02, 0x84, 0x48, 0xc5, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char spot_schemas_interfaces__msg__Object2D__TYPE_NAME[] = "spot_schemas_interfaces/msg/Object2D";

// Define type names, field names, and default values
static char spot_schemas_interfaces__msg__Object2D__FIELD_NAME__object_id[] = "object_id";
static char spot_schemas_interfaces__msg__Object2D__FIELD_NAME__color[] = "color";
static char spot_schemas_interfaces__msg__Object2D__FIELD_NAME__x[] = "x";
static char spot_schemas_interfaces__msg__Object2D__FIELD_NAME__y[] = "y";
static char spot_schemas_interfaces__msg__Object2D__FIELD_NAME__width[] = "width";
static char spot_schemas_interfaces__msg__Object2D__FIELD_NAME__height[] = "height";
static char spot_schemas_interfaces__msg__Object2D__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__msg__Object2D__FIELDS[] = {
  {
    {spot_schemas_interfaces__msg__Object2D__FIELD_NAME__object_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
spot_schemas_interfaces__msg__Object2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__msg__Object2D__TYPE_NAME, 36, 36},
      {spot_schemas_interfaces__msg__Object2D__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string object_id\n"
  "string color\n"
  "int32 x\n"
  "int32 y\n"
  "int32 width\n"
  "int32 height\n"
  "float32 confidence";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__msg__Object2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__msg__Object2D__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__msg__Object2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__msg__Object2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
