# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pixy_msgs/PixyBlock.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg

class PixyBlock(genpy.Message):
  _md5sum = "65437e5a4b3ebcdfa9a72d34e33d6dad"
  _type = "pixy_msgs/PixyBlock"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# signiture types
uint16 NORMAL_SIGNITURE=0
uint16 COLOR_CODE=1

# the message.  if type==0, then angle should be ignored.
uint16 type
uint16 signature
sensor_msgs/RegionOfInterest roi
float32 angle # in radians

================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify
"""
  # Pseudo-constants
  NORMAL_SIGNITURE = 0
  COLOR_CODE = 1

  __slots__ = ['type','signature','roi','angle']
  _slot_types = ['uint16','uint16','sensor_msgs/RegionOfInterest','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type,signature,roi,angle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PixyBlock, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.type is None:
        self.type = 0
      if self.signature is None:
        self.signature = 0
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
      if self.angle is None:
        self.angle = 0.
    else:
      self.type = 0
      self.signature = 0
      self.roi = sensor_msgs.msg.RegionOfInterest()
      self.angle = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2H4IBf().pack(_x.type, _x.signature, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify, _x.angle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 25
      (_x.type, _x.signature, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify, _x.angle,) = _get_struct_2H4IBf().unpack(str[start:end])
      self.roi.do_rectify = bool(self.roi.do_rectify)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2H4IBf().pack(_x.type, _x.signature, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify, _x.angle))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      _x = self
      start = end
      end += 25
      (_x.type, _x.signature, _x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify, _x.angle,) = _get_struct_2H4IBf().unpack(str[start:end])
      self.roi.do_rectify = bool(self.roi.do_rectify)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2H4IBf = None
def _get_struct_2H4IBf():
    global _struct_2H4IBf
    if _struct_2H4IBf is None:
        _struct_2H4IBf = struct.Struct("<2H4IBf")
    return _struct_2H4IBf