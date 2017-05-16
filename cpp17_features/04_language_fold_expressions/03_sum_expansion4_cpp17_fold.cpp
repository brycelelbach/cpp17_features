                                             // For width
// sample(primary)
template <typename... Ns>                    
auto sum(Ns... ns) { return (ns + ... + 0); }

auto a = sum(3.14, 1e7, -42, 17);
      // 3.14 + (1e7 + (-42 + (17 + 0)))
// end-sample

