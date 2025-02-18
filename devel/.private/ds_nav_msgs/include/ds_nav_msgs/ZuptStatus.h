// Generated by gencpp from file ds_nav_msgs/ZuptStatus.msg
// DO NOT EDIT!


#ifndef DS_NAV_MSGS_MESSAGE_ZUPTSTATUS_H
#define DS_NAV_MSGS_MESSAGE_ZUPTSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_nav_msgs
{
template <class ContainerAllocator>
struct ZuptStatus_
{
  typedef ZuptStatus_<ContainerAllocator> Type;

  ZuptStatus_()
    : status(0)  {
    }
  ZuptStatus_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(STATIC_10)
  #undef STATIC_10
#endif
#if defined(_WIN32) && defined(STATIC_01)
  #undef STATIC_01
#endif
#if defined(_WIN32) && defined(AUTOSTATIC_001)
  #undef AUTOSTATIC_001
#endif
#if defined(_WIN32) && defined(AUTOSTATIC_BENCH_001)
  #undef AUTOSTATIC_BENCH_001
#endif
#if defined(_WIN32) && defined(FIXED_POSITION)
  #undef FIXED_POSITION
#endif

  enum {
    NONE = 0u,
    STATIC_10 = 1u,
    STATIC_01 = 2u,
    AUTOSTATIC_001 = 3u,
    AUTOSTATIC_BENCH_001 = 4u,
    FIXED_POSITION = 6u,
  };


  typedef boost::shared_ptr< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ZuptStatus_

typedef ::ds_nav_msgs::ZuptStatus_<std::allocator<void> > ZuptStatus;

typedef boost::shared_ptr< ::ds_nav_msgs::ZuptStatus > ZuptStatusPtr;
typedef boost::shared_ptr< ::ds_nav_msgs::ZuptStatus const> ZuptStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator1> & lhs, const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "03baa874d6dd59e154454c678a4b8f6f";
  }

  static const char* value(const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x03baa874d6dd59e1ULL;
  static const uint64_t static_value2 = 0x54454c678a4b8f6fULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nav_msgs/ZuptStatus";
  }

  static const char* value(const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 NONE = 0\n"
"uint8 STATIC_10 = 1\n"
"uint8 STATIC_01 = 2\n"
"uint8 AUTOSTATIC_001 = 3\n"
"uint8 AUTOSTATIC_BENCH_001 = 4\n"
"uint8 FIXED_POSITION = 6\n"
"\n"
"\n"
"uint8 status \n"
;
  }

  static const char* value(const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ZuptStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nav_msgs::ZuptStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nav_msgs::ZuptStatus_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NAV_MSGS_MESSAGE_ZUPTSTATUS_H
