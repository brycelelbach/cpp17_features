                                                     // Text width
// sample(primary) 
template <auto* p>                                   
struct constant_ptr
{
  static constexpr auto* value = p;
};


int N;
using N_ptr = constant_ptr<&N>;


// end-sample
