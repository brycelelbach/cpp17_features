                            // For width
// sample(primary)
template <std::size_t I>    
auto& get(person& p);

template <>
auto& get<0>(person& p)
{
  return p.get_id();
}

template <>
auto& get<1>(person& p)
{
  return p.get_name();
}

template <>
auto& get<2>(person& p)
{
  return p.get_age();
}
// end-sample

