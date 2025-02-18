// Generated by gencpp from file ds_core_msgs/KeyBool.msg
// DO NOT EDIT!


#ifndef DS_CORE_MSGS_MESSAGE_KEYBOOL_H
#define DS_CORE_MSGS_MESSAGE_KEYBOOL_H


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
struct KeyBool_
{
  typedef KeyBool_<ContainerAllocator> Type;

  KeyBool_()
    : key()
    , value(false)  {
    }
  KeyBool_(const ContainerAllocator& _alloc)
    : key(_alloc)
    , value(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _key_type;
  _key_type key;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::ds_core_msgs::KeyBool_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_core_msgs::KeyBool_<ContainerAllocator> const> ConstPtr;

}; // struct KeyBool_

typedef ::ds_core_msgs::KeyBool_<std::allocator<void> > KeyBool;

typedef boost::shared_ptr< ::ds_core_msgs::KeyBool > KeyBoolPtr;
typedef boost::shared_ptr< ::ds_core_msgs::KeyBool const> KeyBoolConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_core_msgs::KeyBool_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_core_msgs::KeyBool_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_core_msgs::KeyBool_<ContainerAllocator1> & lhs, const ::ds_core_msgs::KeyBool_<ContainerAllocator2> & rhs)
{
  return lhs.key == rhs.key &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_core_msgs::KeyBool_<ContainerAllocator1> & lhs, const ::ds_core_msgs::KeyBool_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::KeyBool_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::KeyBool_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::KeyBool_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4687d6999a553be692d35fbb1253c5d8";
  }

  static const char* value(const ::ds_core_msgs::KeyBool_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4687d6999a553be6ULL;
  static const uint64_t static_value2 = 0x92d35fbb1253c5d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_core_msgs/KeyBool";
  }

  static const char* value(const ::ds_core_msgs::KeyBool_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string key\n"
"bool value\n"
;
  }

  static const char* value(const ::ds_core_msgs::KeyBool_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KeyBool_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_core_msgs::KeyBool_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_core_msgs::KeyBool_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.key);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CORE_MSGS_MESSAGE_KEYBOOL_H
