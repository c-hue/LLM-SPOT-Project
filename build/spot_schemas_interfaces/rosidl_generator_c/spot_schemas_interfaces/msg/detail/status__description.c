// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from spot_schemas_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#include "spot_schemas_interfaces/msg/detail/status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__msg__Status__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x7b, 0xf8, 0xd2, 0xed, 0x1f, 0x16, 0x62,
      0xb7, 0x13, 0xcd, 0xe3, 0x40, 0xec, 0x95, 0x2d,
      0x5e, 0x97, 0xb0, 0x1c, 0x9a, 0x01, 0xc8, 0x83,
      0x11, 0x1a, 0x79, 0x25, 0x58, 0x3b, 0x18, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char spot_schemas_interfaces__msg__Status__TYPE_NAME[] = "spot_schemas_interfaces/msg/Status";

// Define type names, field names, and default values
static char spot_schemas_interfaces__msg__Status__FIELD_NAME__success[] = "success";
static char spot_schemas_interfaces__msg__Status__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__msg__Status__FIELDS[] = {
  {
    {spot_schemas_interfaces__msg__Status__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Status__FIELD_NAME__message, 7, 7},
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
spot_schemas_interfaces__msg__Status__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__msg__Status__TYPE_NAME, 34, 34},
      {spot_schemas_interfaces__msg__Status__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool success\n"
  "string message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__msg__Status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__msg__Status__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__msg__Status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__msg__Status__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
