// Generated by gencpp from file ds_acomms_msgs/ModemData.msg
// DO NOT EDIT!


#ifndef DS_ACOMMS_MSGS_MESSAGE_MODEMDATA_H
#define DS_ACOMMS_MSGS_MESSAGE_MODEMDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_acomms_msgs
{
template <class ContainerAllocator>
struct ModemData_
{
  typedef ModemData_<ContainerAllocator> Type;

  ModemData_()
    : payload()  {
    }
  ModemData_(const ContainerAllocator& _alloc)
    : payload(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _payload_type;
  _payload_type payload;





  typedef boost::shared_ptr< ::ds_acomms_msgs::ModemData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_acomms_msgs::ModemData_<ContainerAllocator> const> ConstPtr;

}; // struct ModemData_

typedef ::ds_acomms_msgs::ModemData_<std::allocator<void> > ModemData;

typedef boost::shared_ptr< ::ds_acomms_msgs::ModemData > ModemDataPtr;
typedef boost::shared_ptr< ::ds_acomms_msgs::ModemData const> ModemDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_acomms_msgs::ModemData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_acomms_msgs::ModemData_<ContainerAllocator1> & lhs, const ::ds_acomms_msgs::ModemData_<ContainerAllocator2> & rhs)
{
  return lhs.payload == rhs.payload;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_acomms_msgs::ModemData_<ContainerAllocator1> & lhs, const ::ds_acomms_msgs::ModemData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_acomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::ModemData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::ModemData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::ModemData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3889b046210e4d1b0a20f4d15e9a8f7b";
  }

  static const char* value(const ::ds_acomms_msgs::ModemData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3889b046210e4d1bULL;
  static const uint64_t static_value2 = 0x0a20f4d15e9a8f7bULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_acomms_msgs/ModemData";
  }

  static const char* value(const ::ds_acomms_msgs::ModemData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is meant to be a building block for other messages;\n"
"# not used on its own. See AcousticModemData and MicromodemData.\n"
"uint8[] payload\n"
;
  }

  static const char* value(const ::ds_acomms_msgs::ModemData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.payload);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModemData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_acomms_msgs::ModemData_<ContainerAllocator>& v)
  {
    s << indent << "payload[]" << std::endl;
    for (size_t i = 0; i < v.payload.size(); ++i)
    {
      s << indent << "  payload[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.payload[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_ACOMMS_MSGS_MESSAGE_MODEMDATA_H
