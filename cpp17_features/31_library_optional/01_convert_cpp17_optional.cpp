                                                   // For width
// sample(primary)
std::optional<int> to_int(std::string_view s)     
{
  std::optional<int> oi;
  int i;

  if (std::stringstream stm(s); (stm >> i))
    if (stm.get() == std::char_traits<char>::eof())
      oi = i;

  return oi;
}
// end-sample

