// Generated by gencpp from file ds_core_msgs/Countdown.msg
// DO NOT EDIT!


#ifndef DS_CORE_MSGS_MESSAGE_COUNTDOWN_H
#define DS_CORE_MSGS_MESSAGE_COUNTDOWN_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_core_msgs
{
template <class ContainerAllocator>
struct Countdown_
{
  typedef Countdown_<ContainerAllocator> Type;

  Countdown_()
    : nodename()
    , countdown(0)  {
    }
  Countdown_(const ContainerAllocator& _alloc)
    : nodename(_alloc)
    , countdown(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _nodename_type;
  _nodename_type nodename;

   typedef int32_t _countdown_type;
  _countdown_type countdown;





  typedef boost::shared_ptr< ::ds_core_msgs::Countdown_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_core_msgs::Countdown_<ContainerAllocator> const> ConstPtr;

}; // struct Countdown_

typedef ::ds_core_msgs::Countdown_<std::allocator<void> > Countdown;

typedef boost::shared_ptr< ::ds_core_msgs::Countdown > CountdownPtr;
typedef boost::shared_ptr< ::ds_core_msgs::Countdown const> CountdownConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_core_msgs::Countdown_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_core_msgs::Countdown_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_core_msgs::Countdown_<ContainerAllocator1> & lhs, const ::ds_core_msgs::Countdown_<ContainerAllocator2> & rhs)
{
  return lhs.nodename == rhs.nodename &&
    lhs.countdown == rhs.countdown;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_core_msgs::Countdown_<ContainerAllocator1> & lhs, const ::ds_core_msgs::Countdown_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::Countdown_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::Countdown_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::Countdown_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::Countdown_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::Countdown_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::Countdown_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_core_msgs::Countdown_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a71eb6714250248372ccb33e9860608c";
  }

  static const char* value(const ::ds_core_msgs::Countdown_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa71eb67142502483ULL;
  static const uint64_t static_value2 = 0x72ccb33e9860608cULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_core_msgs::Countdown_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_core_msgs/Countdown";
  }

  static const char* value(const ::ds_core_msgs::Countdown_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_core_msgs::Countdown_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A type with a ttl countdown for a given node\n"
"\n"
"string nodename\n"
"int32 countdown\n"
;
  }

  static const char* value(const ::ds_core_msgs::Countdown_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_core_msgs::Countdown_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nodename);
      stream.next(m.countdown);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Countdown_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_core_msgs::Countdown_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_core_msgs::Countdown_<ContainerAllocator>& v)
  {
    s << indent << "nodename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.nodename);
    s << indent << "countdown: ";
    Printer<int32_t>::stream(s, indent + "  ", v.countdown);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CORE_MSGS_MESSAGE_COUNTDOWN_H
