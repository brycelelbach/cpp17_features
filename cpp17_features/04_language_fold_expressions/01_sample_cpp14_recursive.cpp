                                                     // For width
// sample(primary)
auto sum()                { return 0; }              

template <typename N>
auto sum(N n)             { return t; }

template <typename N0, typename... Ns>
auto sum(N0 n0, Ns... ns) { return n0 + sum(ns...); }
// end-sample

