                                                     // Text width
// sample(primary) 
template <auto  v>                                   
struct constant
{
  static constexpr auto  value = v;
};


using i = constant<2048>;
using c = constant<'a'>;
using b = constant<true>;
using f = constant<F>;
// end-sample

