// Generated by gencpp from file ds_hotel_msgs/PowerCmdRequest.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_POWERCMDREQUEST_H
#define DS_HOTEL_MSGS_MESSAGE_POWERCMDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct PowerCmdRequest_
{
  typedef PowerCmdRequest_<ContainerAllocator> Type;

  PowerCmdRequest_()
    : command(0)  {
    }
  PowerCmdRequest_(const ContainerAllocator& _alloc)
    : command(0)  {
  (void)_alloc;
    }



   typedef uint8_t _command_type;
  _command_type command;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(POWER_CMD_OFF)
  #undef POWER_CMD_OFF
#endif
#if defined(_WIN32) && defined(POWER_CMD_ON)
  #undef POWER_CMD_ON
#endif

  enum {
    POWER_CMD_OFF = 1u,
    POWER_CMD_ON = 2u,
  };


  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PowerCmdRequest_

typedef ::ds_hotel_msgs::PowerCmdRequest_<std::allocator<void> > PowerCmdRequest;

typedef boost::shared_ptr< ::ds_hotel_msgs::PowerCmdRequest > PowerCmdRequestPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::PowerCmdRequest const> PowerCmdRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4939596ed8918189c1262641aae8e79d";
  }

  static const char* value(const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4939596ed8918189ULL;
  static const uint64_t static_value2 = 0xc1262641aae8e79dULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/PowerCmdRequest";
  }

  static const char* value(const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 POWER_CMD_OFF=1\n"
"uint8 POWER_CMD_ON=2\n"
"\n"
"uint8 command\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::PowerCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_POWERCMDREQUEST_H
