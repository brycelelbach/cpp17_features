                                             // For width
// sample(primary)
template <typename... Bs>                    
bool all(Bs... bs) { return (... && bs); }

bool a = all(true, true, true, false);
      // ((true && true) && true) && false
// end-sample

