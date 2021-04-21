// Generated by gencpp from file pixy_msgs/Servo.msg
// DO NOT EDIT!


#ifndef PIXY_MSGS_MESSAGE_SERVO_H
#define PIXY_MSGS_MESSAGE_SERVO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pixy_msgs
{
template <class ContainerAllocator>
struct Servo_
{
  typedef Servo_<ContainerAllocator> Type;

  Servo_()
    : channel(0)
    , position(0)  {
    }
  Servo_(const ContainerAllocator& _alloc)
    : channel(0)
    , position(0)  {
  (void)_alloc;
    }



   typedef uint8_t _channel_type;
  _channel_type channel;

   typedef uint16_t _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::pixy_msgs::Servo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pixy_msgs::Servo_<ContainerAllocator> const> ConstPtr;

}; // struct Servo_

typedef ::pixy_msgs::Servo_<std::allocator<void> > Servo;

typedef boost::shared_ptr< ::pixy_msgs::Servo > ServoPtr;
typedef boost::shared_ptr< ::pixy_msgs::Servo const> ServoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pixy_msgs::Servo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pixy_msgs::Servo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pixy_msgs::Servo_<ContainerAllocator1> & lhs, const ::pixy_msgs::Servo_<ContainerAllocator2> & rhs)
{
  return lhs.channel == rhs.channel &&
    lhs.position == rhs.position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pixy_msgs::Servo_<ContainerAllocator1> & lhs, const ::pixy_msgs::Servo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pixy_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pixy_msgs::Servo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pixy_msgs::Servo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pixy_msgs::Servo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pixy_msgs::Servo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pixy_msgs::Servo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pixy_msgs::Servo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pixy_msgs::Servo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "37c8ea878d139a8b80638ae8ed0a3ac3";
  }

  static const char* value(const ::pixy_msgs::Servo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x37c8ea878d139a8bULL;
  static const uint64_t static_value2 = 0x80638ae8ed0a3ac3ULL;
};

template<class ContainerAllocator>
struct DataType< ::pixy_msgs::Servo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pixy_msgs/Servo";
  }

  static const char* value(const ::pixy_msgs::Servo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pixy_msgs::Servo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 channel\n"
"uint16 position\n"
"\n"
;
  }

  static const char* value(const ::pixy_msgs::Servo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pixy_msgs::Servo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channel);
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Servo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pixy_msgs::Servo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pixy_msgs::Servo_<ContainerAllocator>& v)
  {
    s << indent << "channel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.channel);
    s << indent << "position: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIXY_MSGS_MESSAGE_SERVO_H
