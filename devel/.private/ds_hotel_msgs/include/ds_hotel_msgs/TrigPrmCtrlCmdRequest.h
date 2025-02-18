// Generated by gencpp from file ds_hotel_msgs/TrigPrmCtrlCmdRequest.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_TRIGPRMCTRLCMDREQUEST_H
#define DS_HOTEL_MSGS_MESSAGE_TRIGPRMCTRLCMDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ds_hotel_msgs/TriggerChannelConfig.h>
#include <ds_core_msgs/KeyString.h>

namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct TrigPrmCtrlCmdRequest_
{
  typedef TrigPrmCtrlCmdRequest_<ContainerAllocator> Type;

  TrigPrmCtrlCmdRequest_()
    : command(0)
    , channels_to_change()
    , global_params_to_change()
    , apply(false)  {
    }
  TrigPrmCtrlCmdRequest_(const ContainerAllocator& _alloc)
    : command(0)
    , channels_to_change(_alloc)
    , global_params_to_change(_alloc)
    , apply(false)  {
  (void)_alloc;
    }



   typedef uint8_t _command_type;
  _command_type command;

   typedef std::vector< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >> _channels_to_change_type;
  _channels_to_change_type channels_to_change;

   typedef std::vector< ::ds_core_msgs::KeyString_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::ds_core_msgs::KeyString_<ContainerAllocator> >> _global_params_to_change_type;
  _global_params_to_change_type global_params_to_change;

   typedef uint8_t _apply_type;
  _apply_type apply;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CHECK_PARAMS)
  #undef CHECK_PARAMS
#endif
#if defined(_WIN32) && defined(ENABLE_BOARD)
  #undef ENABLE_BOARD
#endif
#if defined(_WIN32) && defined(DISABLE_BOARD)
  #undef DISABLE_BOARD
#endif
#if defined(_WIN32) && defined(CONFIGURE_BOARD)
  #undef CONFIGURE_BOARD
#endif

  enum {
    CHECK_PARAMS = 1u,
    ENABLE_BOARD = 2u,
    DISABLE_BOARD = 3u,
    CONFIGURE_BOARD = 4u,
  };


  typedef boost::shared_ptr< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TrigPrmCtrlCmdRequest_

typedef ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<std::allocator<void> > TrigPrmCtrlCmdRequest;

typedef boost::shared_ptr< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest > TrigPrmCtrlCmdRequestPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest const> TrigPrmCtrlCmdRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command &&
    lhs.channels_to_change == rhs.channels_to_change &&
    lhs.global_params_to_change == rhs.global_params_to_change &&
    lhs.apply == rhs.apply;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b66a0652742780c5136a1b821cd55dc5";
  }

  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb66a0652742780c5ULL;
  static const uint64_t static_value2 = 0x136a1b821cd55dc5ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/TrigPrmCtrlCmdRequest";
  }

  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 CHECK_PARAMS = 1\n"
"uint8 ENABLE_BOARD = 2\n"
"uint8 DISABLE_BOARD = 3\n"
"uint8 CONFIGURE_BOARD = 4\n"
"\n"
"# command will be one of the constants listed above\n"
"uint8 command \n"
"\n"
"# An array of objects representing desired changes to trigger board channels, for example: \n"
"# TriggerChannelConfig myconfig = { \n"
"#- name: 'Channel 0'\n"
"#  specified_params:\n"
"#  - key: 'period'\n"
"#    value: '500'\n"
"#  - key: 'enabled'\n"
"#    value: 'false'\n"
"#- name: 'Channel 5'\n"
"#  specified_params:\n"
"#  - key: 'delays'\n"
"#    value: '[250,500]'}\n"
"TriggerChannelConfig[] channels_to_change\n"
"\n"
"# An array of KeyString pairs representing desired changes to global parameters on the trigger board\n"
"# For example:\n"
"#ds_core_msgs/KeyString myconfig = {\n"
"#- key: 'sync'\n"
"#  value: 'false'\n"
"#- key: 'baudrate'\n"
"#  value: '9600'}\n"
"ds_core_msgs/KeyString[] global_params_to_change\n"
"\n"
"# A flag indicating whether the service caller wants to:\n"
"# a) Just compare board parameters to the parameter server\n"
"# or \n"
"# b) Compare board parameters to the parameter server and update the board to reflect the param server.\n"
"bool apply\n"
"\n"
"================================================================================\n"
"MSG: ds_hotel_msgs/TriggerChannelConfig\n"
"string name\n"
"ds_core_msgs/KeyString[] specified_params\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/KeyString\n"
"string key\n"
"string value\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.channels_to_change);
      stream.next(m.global_params_to_change);
      stream.next(m.apply);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrigPrmCtrlCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command);
    s << indent << "channels_to_change[]" << std::endl;
    for (size_t i = 0; i < v.channels_to_change.size(); ++i)
    {
      s << indent << "  channels_to_change[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >::stream(s, indent + "    ", v.channels_to_change[i]);
    }
    s << indent << "global_params_to_change[]" << std::endl;
    for (size_t i = 0; i < v.global_params_to_change.size(); ++i)
    {
      s << indent << "  global_params_to_change[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_core_msgs::KeyString_<ContainerAllocator> >::stream(s, indent + "    ", v.global_params_to_change[i]);
    }
    s << indent << "apply: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.apply);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_TRIGPRMCTRLCMDREQUEST_H
