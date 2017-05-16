                                   // Text width
// sample(primary) 
template <typename T, T v>         
struct constant
{
  static constexpr T value = v;
};



using i = constant<int, 2048>;
using c = constant<char, 'a'>;
using b = constant<bool, true>;
using f = constant<decltype(F), F>;
// end-sample

