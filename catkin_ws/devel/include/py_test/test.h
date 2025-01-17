// Generated by gencpp from file py_test/test.msg
// DO NOT EDIT!


#ifndef PY_TEST_MESSAGE_TEST_H
#define PY_TEST_MESSAGE_TEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace py_test
{
template <class ContainerAllocator>
struct test_
{
  typedef test_<ContainerAllocator> Type;

  test_()
    : num(0)
    , name()  {
    }
  test_(const ContainerAllocator& _alloc)
    : num(0)
    , name(_alloc)  {
  (void)_alloc;
    }



   typedef int64_t _num_type;
  _num_type num;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;





  typedef boost::shared_ptr< ::py_test::test_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::py_test::test_<ContainerAllocator> const> ConstPtr;

}; // struct test_

typedef ::py_test::test_<std::allocator<void> > test;

typedef boost::shared_ptr< ::py_test::test > testPtr;
typedef boost::shared_ptr< ::py_test::test const> testConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::py_test::test_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::py_test::test_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::py_test::test_<ContainerAllocator1> & lhs, const ::py_test::test_<ContainerAllocator2> & rhs)
{
  return lhs.num == rhs.num &&
    lhs.name == rhs.name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::py_test::test_<ContainerAllocator1> & lhs, const ::py_test::test_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace py_test

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::py_test::test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::py_test::test_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::py_test::test_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::py_test::test_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::py_test::test_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::py_test::test_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::py_test::test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2024f0cf2e6302a28d69fe0f7dfcd317";
  }

  static const char* value(const ::py_test::test_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2024f0cf2e6302a2ULL;
  static const uint64_t static_value2 = 0x8d69fe0f7dfcd317ULL;
};

template<class ContainerAllocator>
struct DataType< ::py_test::test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "py_test/test";
  }

  static const char* value(const ::py_test::test_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::py_test::test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 num\n"
"string name\n"
;
  }

  static const char* value(const ::py_test::test_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::py_test::test_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num);
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct test_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::py_test::test_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::py_test::test_<ContainerAllocator>& v)
  {
    s << indent << "num: ";
    Printer<int64_t>::stream(s, indent + "  ", v.num);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PY_TEST_MESSAGE_TEST_H
