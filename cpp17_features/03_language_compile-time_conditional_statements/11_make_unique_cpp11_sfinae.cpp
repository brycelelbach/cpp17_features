// sample(primary)
template <typename T, typename... Args>
std::enable_if_t<
    std::is_constructible_v<T, Args...>, std::unique_ptr<T>
>
make_unique(Args&&... a)
{
  return std::unique_ptr(new T(std::forward<Args>(a)...));
}

template <typename T, typename... Args>
std::enable_if_t<
  !std::is_constructible_v<T, Args...>, std::unique_ptr<T>
>
make_unique(Args&&... a)
{
  return std::unique_ptr(new T{std::forward<Args>(a)...});
}
// end-sample
