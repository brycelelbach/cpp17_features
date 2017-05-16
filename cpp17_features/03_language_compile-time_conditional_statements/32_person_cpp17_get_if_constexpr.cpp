                            // For width
// sample(primary)
template <std::size_t I>    
auto& get(person& p)
{
  if constexpr      (I == 0)
    return p.get_id();
  else if constexpr (I == 1)
    return p.get_name();
  else if constexpr (I == 2)
    return p.get_age();
}










// end-sample

