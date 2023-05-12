// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from exp_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EXP_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define EXP_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include "exp_interfaces/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace exp_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::exp_interfaces::msg::Num num(::exp_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::exp_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::exp_interfaces::msg::Num>()
{
  return exp_interfaces::msg::builder::Init_Num_num();
}

}  // namespace exp_interfaces

#endif  // EXP_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
