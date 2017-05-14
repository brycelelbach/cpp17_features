#include <type_traits>

namespace A
{

                                          // For width
// sample(0)
template <typename... Ts>                 
struct all_integral;

template <>
struct all_integral<> : std::true_type {};

template <typename T0, typename... Ts>
struct all_integral<T0, Ts...>
  : std::integral_constant<
      bool,
      std::is_integral<T0>::value &&
      all_integral<Ts...>::value
    > {};
// end-sample

template <typename... Ts>
inline bool constexpr all_integral_v
  = all_integral<Ts...>::value; 

}

namespace B
{

                                          // For width
// sample(1)
template <typename... Ts>                 
struct all_integral
  : std::bool_constant<
      (... && std::is_integral_v<Ts>)
    > {};








// end-sample

template <typename... Ts>
inline bool constexpr all_integral_v
  = all_integral<Ts...>::value; 

}

namespace C
{

                                          // For width
// sample(2)
template <typename... Ts>                 
struct all_integral
  : std::conjunction<
      std::is_integral<Ts>...
    > {};








// end-sample

template <typename... Ts>
inline bool constexpr all_integral_v
  = all_integral<Ts...>::value; 

}

#define TEST(ns)                                                     \
  static_assert( ns::all_integral_v<>);                              \
  static_assert( ns::all_integral_v<int>);                           \
  static_assert( ns::all_integral_v<int, int>);                      \
  static_assert( ns::all_integral_v<int, unsigned>);                 \
  static_assert( ns::all_integral_v<int, unsigned, int, unsigned>);  \
  static_assert(!ns::all_integral_v<double>);                        \
  static_assert(!ns::all_integral_v<int, double>);                   \
  static_assert(!ns::all_integral_v<double, int>);                   \
  static_assert(!ns::all_integral_v<int, bool, double, int>);        \
  /**/

TEST(A)
TEST(B)
TEST(C)

