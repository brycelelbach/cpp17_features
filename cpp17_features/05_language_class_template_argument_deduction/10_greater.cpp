                                    // For width
// sample(0)
template <typename T = void>        
struct greater;


greater<> l;

std::sort(first, last, greater<>{});
// end-sample

                                    // For width
// sample(1)
template <typename T = void>        
struct greater;


greater l;

std::sort(first, last, greater{});
// end-sample
