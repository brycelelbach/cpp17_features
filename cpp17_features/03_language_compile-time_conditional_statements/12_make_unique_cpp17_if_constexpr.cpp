// sample(primary)
template <typename T, typename... Args> 
auto make_unique(Args&&... a)
{
  if constexpr (std::is_constructible_v<T, Args...>)
    return std::unique_ptr(new T(std::forward<Args>(a)...));
  else
    return std::unique_ptr(new T{std::forward<Args>(a)...});
}
// end-sample
