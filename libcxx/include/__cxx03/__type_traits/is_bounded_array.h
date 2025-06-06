//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___CXX03___TYPE_TRAITS_IS_BOUNDED_ARRAY_H
#define _LIBCPP___CXX03___TYPE_TRAITS_IS_BOUNDED_ARRAY_H

#include <__cxx03/__config>
#include <__cxx03/__type_traits/integral_constant.h>
#include <__cxx03/cstddef>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class>
struct _LIBCPP_TEMPLATE_VIS __libcpp_is_bounded_array : false_type {};
template <class _Tp, size_t _Np>
struct _LIBCPP_TEMPLATE_VIS __libcpp_is_bounded_array<_Tp[_Np]> : true_type {};

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___CXX03___TYPE_TRAITS_IS_BOUNDED_ARRAY_H
