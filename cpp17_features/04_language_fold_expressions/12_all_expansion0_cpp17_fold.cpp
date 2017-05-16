                                             // For width
// sample(primary)
template <typename... Bs>                    
bool all(Bs... bs) { return (... && bs); }

bool a = all();
      // ???
// end-sample

