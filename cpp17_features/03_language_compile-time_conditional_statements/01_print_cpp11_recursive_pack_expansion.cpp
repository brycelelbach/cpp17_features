// sample(primary)
template <typename T0> 
void print(T0&& t0)
{
  std::cout << std::forward<T0>(t0) << std::endl;
} 

template <typename T0, typename... Ts> 
void print(T0&& t0, Ts&&... ts)
{
  print(std::forward<T0>(t0));
  print(std::forward<Ts>(ts)...);
}
// end-sample
