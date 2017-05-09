                                         // Text width
// sample(primary) 
template <auto... Dims>                  
struct dimensions;


struct dynamic_extent {};
constexpr dynamic_extent dyn = {};


dimensions<64, dyn, 32> d;
// end-sample

