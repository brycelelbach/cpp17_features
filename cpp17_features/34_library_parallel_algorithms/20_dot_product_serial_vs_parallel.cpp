                                               // For width
// sample(left)
std::vector<double> x = // ...                 
std::vector<double> y = // ...

double dot_product =
  (x[0] * y[0]) + (x[1] * y[1]) + // ... 

// end-sample

                                               // For width
// sample(right)
std::vector<double> x = // ...                 
std::vector<double> y = // ...

double dot_product = std::transform_reduce(
  std::par_unseq, x.begin(), x.end(), y.begin()
); 
// end-sample

