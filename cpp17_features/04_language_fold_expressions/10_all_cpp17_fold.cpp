                                             // For width
// sample(primary)
template <typename... Bs>                    
bool all(Bs... bs) { return (... && bs); }
// end-sample

