# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spot_schemas_interfaces:srv/DetectObjectColor.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectObjectColor_Request(type):
    """Metaclass of message 'DetectObjectColor_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('spot_schemas_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spot_schemas_interfaces.srv.DetectObjectColor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_object_color__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_object_color__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_object_color__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_object_color__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_object_color__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObjectColor_Request(metaclass=Metaclass_DetectObjectColor_Request):
    """Message class 'DetectObjectColor_Request'."""

    __slots__ = [
        '_target_color',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_color': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_color = kwargs.get('target_color', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_color != other.target_color:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_color(self):
        """Message field 'target_color'."""
        return self._target_color

    @target_color.setter
    def target_color(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_color' field must be of type 'str'"
        self._target_color = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectObjectColor_Response(type):
    """Metaclass of message 'DetectObjectColor_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('spot_schemas_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spot_schemas_interfaces.srv.DetectObjectColor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_object_color__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_object_color__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_object_color__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_object_color__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_object_color__response

            from spot_schemas_interfaces.msg import Object2D
            if Object2D.__class__._TYPE_SUPPORT is None:
                Object2D.__class__.__import_type_support__()

            from spot_schemas_interfaces.msg import Status
            if Status.__class__._TYPE_SUPPORT is None:
                Status.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObjectColor_Response(metaclass=Metaclass_DetectObjectColor_Response):
    """Message class 'DetectObjectColor_Response'."""

    __slots__ = [
        '_detected_object',
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'detected_object': 'spot_schemas_interfaces/Object2D',
        'status': 'spot_schemas_interfaces/Status',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['spot_schemas_interfaces', 'msg'], 'Object2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['spot_schemas_interfaces', 'msg'], 'Status'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from spot_schemas_interfaces.msg import Object2D
        self.detected_object = kwargs.get('detected_object', Object2D())
        from spot_schemas_interfaces.msg import Status
        self.status = kwargs.get('status', Status())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.detected_object != other.detected_object:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detected_object(self):
        """Message field 'detected_object'."""
        return self._detected_object

    @detected_object.setter
    def detected_object(self, value):
        if self._check_fields:
            from spot_schemas_interfaces.msg import Object2D
            assert \
                isinstance(value, Object2D), \
                "The 'detected_object' field must be a sub message of type 'Object2D'"
        self._detected_object = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            from spot_schemas_interfaces.msg import Status
            assert \
                isinstance(value, Status), \
                "The 'status' field must be a sub message of type 'Status'"
        self._status = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectObjectColor_Event(type):
    """Metaclass of message 'DetectObjectColor_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('spot_schemas_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spot_schemas_interfaces.srv.DetectObjectColor_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_object_color__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_object_color__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_object_color__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_object_color__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_object_color__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObjectColor_Event(metaclass=Metaclass_DetectObjectColor_Event):
    """Message class 'DetectObjectColor_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<spot_schemas_interfaces/DetectObjectColor_Request, 1>',
        'response': 'sequence<spot_schemas_interfaces/DetectObjectColor_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['spot_schemas_interfaces', 'srv'], 'DetectObjectColor_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['spot_schemas_interfaces', 'srv'], 'DetectObjectColor_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from spot_schemas_interfaces.srv import DetectObjectColor_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, DetectObjectColor_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'DetectObjectColor_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from spot_schemas_interfaces.srv import DetectObjectColor_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, DetectObjectColor_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'DetectObjectColor_Response'"
        self._response = value


class Metaclass_DetectObjectColor(type):
    """Metaclass of service 'DetectObjectColor'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('spot_schemas_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spot_schemas_interfaces.srv.DetectObjectColor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detect_object_color

            from spot_schemas_interfaces.srv import _detect_object_color
            if _detect_object_color.Metaclass_DetectObjectColor_Request._TYPE_SUPPORT is None:
                _detect_object_color.Metaclass_DetectObjectColor_Request.__import_type_support__()
            if _detect_object_color.Metaclass_DetectObjectColor_Response._TYPE_SUPPORT is None:
                _detect_object_color.Metaclass_DetectObjectColor_Response.__import_type_support__()
            if _detect_object_color.Metaclass_DetectObjectColor_Event._TYPE_SUPPORT is None:
                _detect_object_color.Metaclass_DetectObjectColor_Event.__import_type_support__()


class DetectObjectColor(metaclass=Metaclass_DetectObjectColor):
    from spot_schemas_interfaces.srv._detect_object_color import DetectObjectColor_Request as Request
    from spot_schemas_interfaces.srv._detect_object_color import DetectObjectColor_Response as Response
    from spot_schemas_interfaces.srv._detect_object_color import DetectObjectColor_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
