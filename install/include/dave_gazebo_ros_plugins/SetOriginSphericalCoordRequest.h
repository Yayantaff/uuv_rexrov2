// Generated by gencpp from file dave_gazebo_ros_plugins/SetOriginSphericalCoordRequest.msg
// DO NOT EDIT!


#ifndef DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_SETORIGINSPHERICALCOORDREQUEST_H
#define DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_SETORIGINSPHERICALCOORDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dave_gazebo_ros_plugins
{
template <class ContainerAllocator>
struct SetOriginSphericalCoordRequest_
{
  typedef SetOriginSphericalCoordRequest_<ContainerAllocator> Type;

  SetOriginSphericalCoordRequest_()
    : latitude_deg(0.0)
    , longitude_deg(0.0)
    , altitude(0.0)  {
    }
  SetOriginSphericalCoordRequest_(const ContainerAllocator& _alloc)
    : latitude_deg(0.0)
    , longitude_deg(0.0)
    , altitude(0.0)  {
  (void)_alloc;
    }



   typedef double _latitude_deg_type;
  _latitude_deg_type latitude_deg;

   typedef double _longitude_deg_type;
  _longitude_deg_type longitude_deg;

   typedef double _altitude_type;
  _altitude_type altitude;





  typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetOriginSphericalCoordRequest_

typedef ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<std::allocator<void> > SetOriginSphericalCoordRequest;

typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest > SetOriginSphericalCoordRequestPtr;
typedef boost::shared_ptr< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest const> SetOriginSphericalCoordRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator1> & lhs, const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator2> & rhs)
{
  return lhs.latitude_deg == rhs.latitude_deg &&
    lhs.longitude_deg == rhs.longitude_deg &&
    lhs.altitude == rhs.altitude;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator1> & lhs, const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dave_gazebo_ros_plugins

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60457d630fe21cc5f8f6bd5d0fc90156";
  }

  static const char* value(const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60457d630fe21cc5ULL;
  static const uint64_t static_value2 = 0xf8f6bd5d0fc90156ULL;
};

template<class ContainerAllocator>
struct DataType< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dave_gazebo_ros_plugins/SetOriginSphericalCoordRequest";
  }

  static const char* value(const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The dave Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"# Latitude [degrees]. Positive is north of equator; negative is south.\n"
"float64 latitude_deg\n"
"# Longitude [degrees]. Positive is east of prime meridian; negative is west.\n"
"float64 longitude_deg\n"
"# Altitude [m]. Positive is above the WGS 84 ellipsoid\n"
"float64 altitude\n"
;
  }

  static const char* value(const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude_deg);
      stream.next(m.longitude_deg);
      stream.next(m.altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetOriginSphericalCoordRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dave_gazebo_ros_plugins::SetOriginSphericalCoordRequest_<ContainerAllocator>& v)
  {
    s << indent << "latitude_deg: ";
    Printer<double>::stream(s, indent + "  ", v.latitude_deg);
    s << indent << "longitude_deg: ";
    Printer<double>::stream(s, indent + "  ", v.longitude_deg);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DAVE_GAZEBO_ROS_PLUGINS_MESSAGE_SETORIGINSPHERICALCOORDREQUEST_H
