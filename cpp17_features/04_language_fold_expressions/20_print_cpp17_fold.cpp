                                                     // For width
// sample(primary)
template <typename... Ts>                          
void print(Ts&&... ts)
{
  (std::cout << ... << std::forward<Ts>(ts)) << "\n";
}
// end-sample

NOTE:
Binary left fold.

