                                     // For width
// sample(0)
template <typename T>                
std::enable_if_t<
  std::is_integral<T>::value, T
>
sqrt(T t);

template <typename T>                
std::enable_if_t<
  std::is_floating_point<T>::value, T
>
sqrt(T t);
// end-sample

                                     // For width
// sample(1)
template <typename T>                
std::enable_if_t<
  std::is_integral_v<T>, T
>
sqrt(T t);

template <typename T>                
std::enable_if_t<
  std::is_floating_point_v<T>, T
>
sqrt(T t);
// end-sample

