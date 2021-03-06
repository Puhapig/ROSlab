// Generated by gencpp from file live_demo/my_msg.msg
// DO NOT EDIT!


#ifndef LIVE_DEMO_MESSAGE_MY_MSG_H
#define LIVE_DEMO_MESSAGE_MY_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace live_demo
{
template <class ContainerAllocator>
struct my_msg_
{
  typedef my_msg_<ContainerAllocator> Type;

  my_msg_()
    : my_counter(0)
    , more_data(0.0)  {
    }
  my_msg_(const ContainerAllocator& _alloc)
    : my_counter(0)
    , more_data(0.0)  {
    }



   typedef uint8_t _my_counter_type;
  _my_counter_type my_counter;

   typedef float _more_data_type;
  _more_data_type more_data;




  typedef boost::shared_ptr< ::live_demo::my_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::live_demo::my_msg_<ContainerAllocator> const> ConstPtr;

}; // struct my_msg_

typedef ::live_demo::my_msg_<std::allocator<void> > my_msg;

typedef boost::shared_ptr< ::live_demo::my_msg > my_msgPtr;
typedef boost::shared_ptr< ::live_demo::my_msg const> my_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::live_demo::my_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::live_demo::my_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace live_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'live_demo': ['/home/harvey/workspace/lab01/src/live_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::live_demo::my_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::live_demo::my_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::live_demo::my_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::live_demo::my_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::live_demo::my_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::live_demo::my_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::live_demo::my_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f97a97e4523ecc3ff17fba3f43aeb2fb";
  }

  static const char* value(const ::live_demo::my_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf97a97e4523ecc3fULL;
  static const uint64_t static_value2 = 0xf17fba3f43aeb2fbULL;
};

template<class ContainerAllocator>
struct DataType< ::live_demo::my_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "live_demo/my_msg";
  }

  static const char* value(const ::live_demo::my_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::live_demo::my_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 my_counter\n\
float32 more_data\n\
";
  }

  static const char* value(const ::live_demo::my_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::live_demo::my_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.my_counter);
      stream.next(m.more_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct my_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::live_demo::my_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::live_demo::my_msg_<ContainerAllocator>& v)
  {
    s << indent << "my_counter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.my_counter);
    s << indent << "more_data: ";
    Printer<float>::stream(s, indent + "  ", v.more_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LIVE_DEMO_MESSAGE_MY_MSG_H
