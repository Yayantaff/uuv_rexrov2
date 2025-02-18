// Generated by gencpp from file ds_hotel_msgs/PWRdevice.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_PWRDEVICE_H
#define DS_HOTEL_MSGS_MESSAGE_PWRDEVICE_H


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
struct PWRdevice_
{
  typedef PWRdevice_<ContainerAllocator> Type;

  PWRdevice_()
    : name()
    , id(0)
    , cmd(0)
    , is_on(false)  {
    }
  PWRdevice_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , id(0)
    , cmd(0)
    , is_on(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef uint16_t _id_type;
  _id_type id;

   typedef uint16_t _cmd_type;
  _cmd_type cmd;

   typedef uint8_t _is_on_type;
  _is_on_type is_on;





  typedef boost::shared_ptr< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> const> ConstPtr;

}; // struct PWRdevice_

typedef ::ds_hotel_msgs::PWRdevice_<std::allocator<void> > PWRdevice;

typedef boost::shared_ptr< ::ds_hotel_msgs::PWRdevice > PWRdevicePtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::PWRdevice const> PWRdeviceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.id == rhs.id &&
    lhs.cmd == rhs.cmd &&
    lhs.is_on == rhs.is_on;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39fe8b45809d32d79b753d0df9588f7f";
  }

  static const char* value(const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39fe8b45809d32d7ULL;
  static const uint64_t static_value2 = 0x9b753d0df9588f7fULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/PWRdevice";
  }

  static const char* value(const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# does not have headers because it is only used with PWR.msg\n"
"\n"
"string name\n"
"uint16 id\n"
"uint16 cmd\n"
"bool is_on\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.id);
      stream.next(m.cmd);
      stream.next(m.is_on);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PWRdevice_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::PWRdevice_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::PWRdevice_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.id);
    s << indent << "cmd: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "is_on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_on);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_PWRDEVICE_H
