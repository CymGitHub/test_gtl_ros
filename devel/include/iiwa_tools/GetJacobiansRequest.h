// Generated by gencpp from file iiwa_tools/GetJacobiansRequest.msg
// DO NOT EDIT!


#ifndef IIWA_TOOLS_MESSAGE_GETJACOBIANSREQUEST_H
#define IIWA_TOOLS_MESSAGE_GETJACOBIANSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iiwa_tools
{
template <class ContainerAllocator>
struct GetJacobiansRequest_
{
  typedef GetJacobiansRequest_<ContainerAllocator> Type;

  GetJacobiansRequest_()
    : joint_angles()
    , joint_velocities()  {
    }
  GetJacobiansRequest_(const ContainerAllocator& _alloc)
    : joint_angles(_alloc)
    , joint_velocities(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _joint_angles_type;
  _joint_angles_type joint_angles;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _joint_velocities_type;
  _joint_velocities_type joint_velocities;





  typedef boost::shared_ptr< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetJacobiansRequest_

typedef ::iiwa_tools::GetJacobiansRequest_<std::allocator<void> > GetJacobiansRequest;

typedef boost::shared_ptr< ::iiwa_tools::GetJacobiansRequest > GetJacobiansRequestPtr;
typedef boost::shared_ptr< ::iiwa_tools::GetJacobiansRequest const> GetJacobiansRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator1> & lhs, const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator2> & rhs)
{
  return lhs.joint_angles == rhs.joint_angles &&
    lhs.joint_velocities == rhs.joint_velocities;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator1> & lhs, const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_tools

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac8a55797891c85d442a15b1722805ba";
  }

  static const char* value(const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac8a55797891c85dULL;
  static const uint64_t static_value2 = 0x442a15b1722805baULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_tools/GetJacobiansRequest";
  }

  static const char* value(const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] joint_angles\n"
"float64[] joint_velocities\n"
;
  }

  static const char* value(const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_angles);
      stream.next(m.joint_velocities);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJacobiansRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_tools::GetJacobiansRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_angles[]" << std::endl;
    for (size_t i = 0; i < v.joint_angles.size(); ++i)
    {
      s << indent << "  joint_angles[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_angles[i]);
    }
    s << indent << "joint_velocities[]" << std::endl;
    for (size_t i = 0; i < v.joint_velocities.size(); ++i)
    {
      s << indent << "  joint_velocities[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_velocities[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_TOOLS_MESSAGE_GETJACOBIANSREQUEST_H
