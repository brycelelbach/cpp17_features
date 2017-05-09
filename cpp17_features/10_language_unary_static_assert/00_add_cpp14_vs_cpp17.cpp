                                     // For width
// sample(left)
template <typename T>                
auto add(T x, T y)
{
  static_assert(is_addable_v<T>, "");
  return x + y;
}
// end-sample

                                     // For width
// sample(right)
template <typename T>                
auto add(T x, T y)
{
  static_assert(is_addable_v<T>);
  return x + y;
}
// end-sample

