// Generated by gencpp from file ds_core_msgs/IoSMcommandResponse.msg
// DO NOT EDIT!


#ifndef DS_CORE_MSGS_MESSAGE_IOSMCOMMANDRESPONSE_H
#define DS_CORE_MSGS_MESSAGE_IOSMCOMMANDRESPONSE_H


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
struct IoSMcommandResponse_
{
  typedef IoSMcommandResponse_<ContainerAllocator> Type;

  IoSMcommandResponse_()
    : retval()  {
    }
  IoSMcommandResponse_(const ContainerAllocator& _alloc)
    : retval(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> _retval_type;
  _retval_type retval;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(FAIL)
  #undef FAIL
#endif

  enum {
    FAIL = 0u,
  };


  typedef boost::shared_ptr< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IoSMcommandResponse_

typedef ::ds_core_msgs::IoSMcommandResponse_<std::allocator<void> > IoSMcommandResponse;

typedef boost::shared_ptr< ::ds_core_msgs::IoSMcommandResponse > IoSMcommandResponsePtr;
typedef boost::shared_ptr< ::ds_core_msgs::IoSMcommandResponse const> IoSMcommandResponseConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator1> & lhs, const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator2> & rhs)
{
  return lhs.retval == rhs.retval;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator1> & lhs, const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6bd26b667c9c00626c9a154928479c6b";
  }

  static const char* value(const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6bd26b667c9c0062ULL;
  static const uint64_t static_value2 = 0x6c9a154928479c6bULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_core_msgs/IoSMcommandResponse";
  }

  static const char* value(const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint64 FAIL=0\n"
"\n"
"# Return codes.  0 for FAILURE, or the ID of the command successfully added / updated / removed\n"
"uint64[] retval\n"
;
  }

  static const char* value(const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.retval);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IoSMcommandResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_core_msgs::IoSMcommandResponse_<ContainerAllocator>& v)
  {
    s << indent << "retval[]" << std::endl;
    for (size_t i = 0; i < v.retval.size(); ++i)
    {
      s << indent << "  retval[" << i << "]: ";
      Printer<uint64_t>::stream(s, indent + "  ", v.retval[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CORE_MSGS_MESSAGE_IOSMCOMMANDRESPONSE_H
