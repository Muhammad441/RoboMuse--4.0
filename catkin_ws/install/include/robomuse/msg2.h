// Generated by gencpp from file robomuse/msg2.msg
// DO NOT EDIT!


#ifndef ROBOMUSE_MESSAGE_MSG2_H
#define ROBOMUSE_MESSAGE_MSG2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robomuse
{
template <class ContainerAllocator>
struct msg2_
{
  typedef msg2_<ContainerAllocator> Type;

  msg2_()
    : x(0)
    , y(0)  {
    }
  msg2_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)  {
  (void)_alloc;
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;




  typedef boost::shared_ptr< ::robomuse::msg2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robomuse::msg2_<ContainerAllocator> const> ConstPtr;

}; // struct msg2_

typedef ::robomuse::msg2_<std::allocator<void> > msg2;

typedef boost::shared_ptr< ::robomuse::msg2 > msg2Ptr;
typedef boost::shared_ptr< ::robomuse::msg2 const> msg2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robomuse::msg2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robomuse::msg2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robomuse

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'robomuse': ['/home/dell/catkin_ws/src/robomuse/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robomuse::msg2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robomuse::msg2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robomuse::msg2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robomuse::msg2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robomuse::msg2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robomuse::msg2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robomuse::msg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd7b43fd41d4c47bf5c703cc7d016709";
  }

  static const char* value(const ::robomuse::msg2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd7b43fd41d4c47bULL;
  static const uint64_t static_value2 = 0xf5c703cc7d016709ULL;
};

template<class ContainerAllocator>
struct DataType< ::robomuse::msg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robomuse/msg2";
  }

  static const char* value(const ::robomuse::msg2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robomuse::msg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 x\n\
int32 y\n\
";
  }

  static const char* value(const ::robomuse::msg2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robomuse::msg2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct msg2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robomuse::msg2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robomuse::msg2_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOMUSE_MESSAGE_MSG2_H