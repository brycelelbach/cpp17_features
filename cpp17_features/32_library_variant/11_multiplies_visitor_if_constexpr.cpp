// sample(primary)
template <unsigned N>
std::string repeat(std::string_view s);



std::variant<std::string, int, std::array<int, 2>> v = // ...

std::visit(
  [](auto& t)
  {
    constexpr unsigned N = 10;

    using T = std::decay_t<decltype(t)>;

    if constexpr      (std::is_same_v<T, std::string>)
      t = repeat(t);
    else if constexpr (std::is_same_v<T, int>)
      t = t * N;
    else if constexpr (std::is_same_v<T, std::array<int, 2>>)
      t = {{t[0] * N, t[1] * N}};
    else
      static_assert(false);
  }, v);
// end-sample
