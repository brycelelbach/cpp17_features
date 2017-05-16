                                      // For width
// sample(primary)
template <typename... Ns>             
auto sum(Ns... ns)
{
  return (ns + ... + 0);
}
// end-sample
