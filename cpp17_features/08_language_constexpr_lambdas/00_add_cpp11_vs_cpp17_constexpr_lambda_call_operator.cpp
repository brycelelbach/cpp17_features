                                      // For width
// sample(left)
auto add = [] (int n, int m)          
{
  return n + m;
};

constexpr int i = add(5, 6); 
// COMPILE ERROR: The lambda's
// call operator is not constexpr.
// end-sample

                                      // For width
// sample(right)
auto add = [] (int n, int m) constexpr
{
  return n + m;
};

constexpr int i = add(5, 6);


// end-sample

