# generated from rosidl_generator_py/resource/_idl.py.em
# with input from first_interfaces:msg/ExampleMessage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'my_float_array'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExampleMessage(type):
    """Metaclass of message 'ExampleMessage'."""

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
            module = import_type_support('first_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'first_interfaces.msg.ExampleMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__example_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__example_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__example_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__example_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__example_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExampleMessage(metaclass=Metaclass_ExampleMessage):
    """Message class 'ExampleMessage'."""

    __slots__ = [
        '_my_float',
        '_my_float_array',
        '_my_string',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'my_float': 'float',
        'my_float_array': 'sequence<float>',
        'my_string': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        self.my_float = kwargs.get('my_float', float())
        self.my_float_array = array.array('f', kwargs.get('my_float_array', []))
        self.my_string = kwargs.get('my_string', str())

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
        if self.my_float != other.my_float:
            return False
        if self.my_float_array != other.my_float_array:
            return False
        if self.my_string != other.my_string:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def my_float(self):
        """Message field 'my_float'."""
        return self._my_float

    @my_float.setter
    def my_float(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'my_float' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'my_float' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._my_float = value

    @builtins.property
    def my_float_array(self):
        """Message field 'my_float_array'."""
        return self._my_float_array

    @my_float_array.setter
    def my_float_array(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'my_float_array' array.array() must have the type code of 'f'"
                self._my_float_array = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'my_float_array' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._my_float_array = array.array('f', value)

    @builtins.property
    def my_string(self):
        """Message field 'my_string'."""
        return self._my_string

    @my_string.setter
    def my_string(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'my_string' field must be of type 'str'"
        self._my_string = value
