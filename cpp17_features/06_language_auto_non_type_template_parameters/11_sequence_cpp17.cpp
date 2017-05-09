                                                     // Text width
// sample(primary)
template <auto... Elements>                          
struct sequence {};


using idxs = sequence<0, 1, 2>;
using str  = sequence<'h', 'i'>; 
using tup  = sequence<0, 'h', true>;
// end-sample
