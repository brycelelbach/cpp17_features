                                                     // Text width
// sample(primary)
template <typename T, T... Elements>                 
struct sequence {};


using idxs = sequence<int, 0, 1, 2>;
using str  = sequence<char, 'h', 'i'>;

// end-sample
