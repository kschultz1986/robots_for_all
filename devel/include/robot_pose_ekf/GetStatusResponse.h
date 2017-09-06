// Generated by gencpp from file robot_pose_ekf/GetStatusResponse.msg
// DO NOT EDIT!


#ifndef ROBOT_POSE_EKF_MESSAGE_GETSTATUSRESPONSE_H
#define ROBOT_POSE_EKF_MESSAGE_GETSTATUSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_pose_ekf
{
template <class ContainerAllocator>
struct GetStatusResponse_
{
  typedef GetStatusResponse_<ContainerAllocator> Type;

  GetStatusResponse_()
    : status()  {
    }
  GetStatusResponse_(const ContainerAllocator& _alloc)
    : status(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;




  typedef boost::shared_ptr< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetStatusResponse_

typedef ::robot_pose_ekf::GetStatusResponse_<std::allocator<void> > GetStatusResponse;

typedef boost::shared_ptr< ::robot_pose_ekf::GetStatusResponse > GetStatusResponsePtr;
typedef boost::shared_ptr< ::robot_pose_ekf::GetStatusResponse const> GetStatusResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_pose_ekf

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4fe5af303955c287688e7347e9b00278";
  }

  static const char* value(const ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4fe5af303955c287ULL;
  static const uint64_t static_value2 = 0x688e7347e9b00278ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_pose_ekf/GetStatusResponse";
  }

  static const char* value(const ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string status\n\
";
  }

  static const char* value(const ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStatusResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_pose_ekf::GetStatusResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_POSE_EKF_MESSAGE_GETSTATUSRESPONSE_H
