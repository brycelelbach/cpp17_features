                                       // For width
// sample(left)
std::uint32_t u = // ...               

std::uint16_t  i =
  std::min(std::max(u, 0), UINT16_MAX);
// end-sample

                                       // For width
// sample(right)
std::uint32_t u = // ...               

std::uint16_t i =
  std::clamp(u, 0, UINT32_MAX);
// end-sample

