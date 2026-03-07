// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from spot_schemas_interfaces:srv/DetectObjectColor.idl
// generated code does not contain a copyright notice

#include "spot_schemas_interfaces/srv/detail/detect_object_color__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__srv__DetectObjectColor__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x49, 0xa4, 0x10, 0x4f, 0xe6, 0x6b, 0xbf,
      0x2a, 0xa9, 0xbe, 0x69, 0xdf, 0xac, 0x77, 0xb0,
      0xf0, 0xf9, 0x29, 0xf6, 0x95, 0xba, 0x77, 0xb8,
      0x69, 0xfb, 0x38, 0x7c, 0x4a, 0xbb, 0xee, 0x34,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__srv__DetectObjectColor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0xa2, 0xff, 0xda, 0xe1, 0xeb, 0x30, 0xde,
      0x98, 0x93, 0x4e, 0x65, 0xcb, 0xe0, 0x55, 0x55,
      0xa5, 0x28, 0x97, 0x2d, 0x10, 0x4b, 0x72, 0x71,
      0xdd, 0x6a, 0xfb, 0xba, 0x16, 0x23, 0xf0, 0xd5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__srv__DetectObjectColor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0xec, 0x97, 0x69, 0x1d, 0x48, 0x58, 0xde,
      0x2b, 0xb1, 0xfa, 0x16, 0x4a, 0x6a, 0xff, 0x32,
      0xc5, 0x7a, 0xf2, 0xcb, 0x50, 0x3f, 0x37, 0x78,
      0x72, 0xce, 0x6f, 0xc2, 0xc9, 0x87, 0x3e, 0x84,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_spot_schemas_interfaces
const rosidl_type_hash_t *
spot_schemas_interfaces__srv__DetectObjectColor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0xce, 0x74, 0xfe, 0x24, 0x36, 0x60, 0xa1,
      0xce, 0x5e, 0xeb, 0x68, 0xae, 0x3a, 0x06, 0x25,
      0xb7, 0xff, 0xcb, 0xf9, 0x3b, 0x8f, 0x68, 0xc9,
      0xe9, 0x96, 0x60, 0xca, 0x98, 0xf3, 0x2f, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "spot_schemas_interfaces/msg/detail/status__functions.h"
#include "spot_schemas_interfaces/msg/detail/object2_d__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t spot_schemas_interfaces__msg__Object2D__EXPECTED_HASH = {1, {
    0xf0, 0x06, 0xcb, 0xee, 0x42, 0x54, 0x2e, 0x56,
    0xab, 0xfe, 0x94, 0xae, 0x3e, 0x81, 0xbb, 0x76,
    0x49, 0x82, 0x9c, 0xe9, 0xab, 0xc4, 0x37, 0x53,
    0x35, 0xad, 0x70, 0x02, 0x84, 0x48, 0xc5, 0x56,
  }};
static const rosidl_type_hash_t spot_schemas_interfaces__msg__Status__EXPECTED_HASH = {1, {
    0x57, 0x7b, 0xf8, 0xd2, 0xed, 0x1f, 0x16, 0x62,
    0xb7, 0x13, 0xcd, 0xe3, 0x40, 0xec, 0x95, 0x2d,
    0x5e, 0x97, 0xb0, 0x1c, 0x9a, 0x01, 0xc8, 0x83,
    0x11, 0x1a, 0x79, 0x25, 0x58, 0x3b, 0x18, 0x8c,
  }};
#endif

static char spot_schemas_interfaces__srv__DetectObjectColor__TYPE_NAME[] = "spot_schemas_interfaces/srv/DetectObjectColor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char spot_schemas_interfaces__msg__Object2D__TYPE_NAME[] = "spot_schemas_interfaces/msg/Object2D";
static char spot_schemas_interfaces__msg__Status__TYPE_NAME[] = "spot_schemas_interfaces/msg/Status";
static char spot_schemas_interfaces__srv__DetectObjectColor_Event__TYPE_NAME[] = "spot_schemas_interfaces/srv/DetectObjectColor_Event";
static char spot_schemas_interfaces__srv__DetectObjectColor_Request__TYPE_NAME[] = "spot_schemas_interfaces/srv/DetectObjectColor_Request";
static char spot_schemas_interfaces__srv__DetectObjectColor_Response__TYPE_NAME[] = "spot_schemas_interfaces/srv/DetectObjectColor_Response";

// Define type names, field names, and default values
static char spot_schemas_interfaces__srv__DetectObjectColor__FIELD_NAME__request_message[] = "request_message";
static char spot_schemas_interfaces__srv__DetectObjectColor__FIELD_NAME__response_message[] = "response_message";
static char spot_schemas_interfaces__srv__DetectObjectColor__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__srv__DetectObjectColor__FIELDS[] = {
  {
    {spot_schemas_interfaces__srv__DetectObjectColor__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {spot_schemas_interfaces__srv__DetectObjectColor_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {spot_schemas_interfaces__srv__DetectObjectColor_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {spot_schemas_interfaces__srv__DetectObjectColor_Event__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription spot_schemas_interfaces__srv__DetectObjectColor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Status__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Event__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
spot_schemas_interfaces__srv__DetectObjectColor__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__srv__DetectObjectColor__TYPE_NAME, 45, 45},
      {spot_schemas_interfaces__srv__DetectObjectColor__FIELDS, 3, 3},
    },
    {spot_schemas_interfaces__srv__DetectObjectColor__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&spot_schemas_interfaces__msg__Object2D__EXPECTED_HASH, spot_schemas_interfaces__msg__Object2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = spot_schemas_interfaces__msg__Object2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&spot_schemas_interfaces__msg__Status__EXPECTED_HASH, spot_schemas_interfaces__msg__Status__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = spot_schemas_interfaces__msg__Status__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = spot_schemas_interfaces__srv__DetectObjectColor_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = spot_schemas_interfaces__srv__DetectObjectColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = spot_schemas_interfaces__srv__DetectObjectColor_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char spot_schemas_interfaces__srv__DetectObjectColor_Request__FIELD_NAME__target_color[] = "target_color";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__srv__DetectObjectColor_Request__FIELDS[] = {
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Request__FIELD_NAME__target_color, 12, 12},
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
spot_schemas_interfaces__srv__DetectObjectColor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__srv__DetectObjectColor_Request__TYPE_NAME, 53, 53},
      {spot_schemas_interfaces__srv__DetectObjectColor_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char spot_schemas_interfaces__srv__DetectObjectColor_Response__FIELD_NAME__detected_object[] = "detected_object";
static char spot_schemas_interfaces__srv__DetectObjectColor_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__srv__DetectObjectColor_Response__FIELDS[] = {
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Response__FIELD_NAME__detected_object, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {spot_schemas_interfaces__msg__Object2D__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {spot_schemas_interfaces__msg__Status__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription spot_schemas_interfaces__srv__DetectObjectColor_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {spot_schemas_interfaces__msg__Object2D__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Status__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
spot_schemas_interfaces__srv__DetectObjectColor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__srv__DetectObjectColor_Response__TYPE_NAME, 54, 54},
      {spot_schemas_interfaces__srv__DetectObjectColor_Response__FIELDS, 2, 2},
    },
    {spot_schemas_interfaces__srv__DetectObjectColor_Response__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&spot_schemas_interfaces__msg__Object2D__EXPECTED_HASH, spot_schemas_interfaces__msg__Object2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = spot_schemas_interfaces__msg__Object2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&spot_schemas_interfaces__msg__Status__EXPECTED_HASH, spot_schemas_interfaces__msg__Status__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = spot_schemas_interfaces__msg__Status__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELD_NAME__info[] = "info";
static char spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELD_NAME__request[] = "request";
static char spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELDS[] = {
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {spot_schemas_interfaces__srv__DetectObjectColor_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {spot_schemas_interfaces__srv__DetectObjectColor_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription spot_schemas_interfaces__srv__DetectObjectColor_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Object2D__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__msg__Status__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {spot_schemas_interfaces__srv__DetectObjectColor_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
spot_schemas_interfaces__srv__DetectObjectColor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {spot_schemas_interfaces__srv__DetectObjectColor_Event__TYPE_NAME, 51, 51},
      {spot_schemas_interfaces__srv__DetectObjectColor_Event__FIELDS, 3, 3},
    },
    {spot_schemas_interfaces__srv__DetectObjectColor_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&spot_schemas_interfaces__msg__Object2D__EXPECTED_HASH, spot_schemas_interfaces__msg__Object2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = spot_schemas_interfaces__msg__Object2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&spot_schemas_interfaces__msg__Status__EXPECTED_HASH, spot_schemas_interfaces__msg__Status__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = spot_schemas_interfaces__msg__Status__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = spot_schemas_interfaces__srv__DetectObjectColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = spot_schemas_interfaces__srv__DetectObjectColor_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#request\n"
  "string target_color\n"
  "---\n"
  "#response\n"
  "spot_schemas_interfaces/Object2D detected_object\n"
  "spot_schemas_interfaces/Status status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__srv__DetectObjectColor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__srv__DetectObjectColor__TYPE_NAME, 45, 45},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__srv__DetectObjectColor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__srv__DetectObjectColor_Request__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__srv__DetectObjectColor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__srv__DetectObjectColor_Response__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
spot_schemas_interfaces__srv__DetectObjectColor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {spot_schemas_interfaces__srv__DetectObjectColor_Event__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__srv__DetectObjectColor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__srv__DetectObjectColor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *spot_schemas_interfaces__msg__Object2D__get_individual_type_description_source(NULL);
    sources[4] = *spot_schemas_interfaces__msg__Status__get_individual_type_description_source(NULL);
    sources[5] = *spot_schemas_interfaces__srv__DetectObjectColor_Event__get_individual_type_description_source(NULL);
    sources[6] = *spot_schemas_interfaces__srv__DetectObjectColor_Request__get_individual_type_description_source(NULL);
    sources[7] = *spot_schemas_interfaces__srv__DetectObjectColor_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__srv__DetectObjectColor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__srv__DetectObjectColor_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__srv__DetectObjectColor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__srv__DetectObjectColor_Response__get_individual_type_description_source(NULL),
    sources[1] = *spot_schemas_interfaces__msg__Object2D__get_individual_type_description_source(NULL);
    sources[2] = *spot_schemas_interfaces__msg__Status__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
spot_schemas_interfaces__srv__DetectObjectColor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *spot_schemas_interfaces__srv__DetectObjectColor_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *spot_schemas_interfaces__msg__Object2D__get_individual_type_description_source(NULL);
    sources[4] = *spot_schemas_interfaces__msg__Status__get_individual_type_description_source(NULL);
    sources[5] = *spot_schemas_interfaces__srv__DetectObjectColor_Request__get_individual_type_description_source(NULL);
    sources[6] = *spot_schemas_interfaces__srv__DetectObjectColor_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
