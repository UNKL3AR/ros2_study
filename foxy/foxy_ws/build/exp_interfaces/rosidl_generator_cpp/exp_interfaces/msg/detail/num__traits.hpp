// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from exp_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EXP_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_
#define EXP_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_

#include "exp_interfaces/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<exp_interfaces::msg::Num>()
{
  return "exp_interfaces::msg::Num";
}

template<>
inline const char * name<exp_interfaces::msg::Num>()
{
  return "exp_interfaces/msg/Num";
}

template<>
struct has_fixed_size<exp_interfaces::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<exp_interfaces::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<exp_interfaces::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXP_INTERFACES__MSG__DETAIL__NUM__TRAITS_HPP_
