// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from spot_schemas_interfaces:msg/ColorLabel.idl
// generated code does not contain a copyright notice

#include "spot_schemas_interfaces/msg/detail/color_label__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__msg__ColorLabel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0xaf, 0xc5, 0x24, 0xe7, 0x32, 0xbd, 0xe1,
      0x02, 0xd5, 0xb2, 0x4d, 0x17, 0x55, 0x73, 0xa7,
      0xf8, 0x00, 0x79, 0x9a, 0x0d, 0x40, 0x31, 0x22,
      0xfa, 0x3d, 0xe0, 0xea, 0x64, 0x39, 0xa2, 0x88,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char spot_schemas_interfaces__msg__ColorLabel__TYPE_NAME[] = "spot_schemas_interfaces/msg/ColorLabel";

// Define type names, field names, and default values
static char spot_schemas_interfaces__msg__ColorLabel__FIELD_NAME__color_name[] = "color_name";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__msg__ColorLabel__FIELDS[] = {
  {
    {spot_schemas_interfaces__msg__ColorLabel__FIELD_NAME__color_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
spot_schemas_interfaces__msg__ColorLabel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__msg__ColorLabel__TYPE_NAME, 38, 38},
      {spot_schemas_interfaces__msg__ColorLabel__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string color_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__msg__ColorLabel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__msg__ColorLabel__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__msg__ColorLabel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__msg__ColorLabel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
