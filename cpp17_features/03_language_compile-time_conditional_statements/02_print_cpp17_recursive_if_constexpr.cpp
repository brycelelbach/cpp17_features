// sample(primary)
template <typename T0, typename... Ts> 
void print(T0&& t0, Ts&&... ts)
{
  std::cout << std::forward<T0>(t0) << "\n";

  if constexpr (sizeof...(ts)) 
    print(std::forward<T0>(ts)...);
}
// end-sample
