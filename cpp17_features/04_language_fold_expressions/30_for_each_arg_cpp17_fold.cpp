                                                     // For width
// sample(primary)
template <typename F, typename... Args>              
void for_each_arg(F f, Args&&... args)
{
  (f(std::forward<Args>(args)), ...);
}
// end-sample

NOTE:
Unary right fold.
