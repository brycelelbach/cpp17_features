                                         // Text width
// sample(primary) 
template <typename T, auto Extent>
struct span;


struct dynamic_extent {};
inline constexpr dynamic_extent dyn = {};


span<double, 64>  d;
span<int, dyn>    i;
// end-sample

