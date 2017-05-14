                                               // For width
// sample(primary)
std::vector<double> x = // ...                 
std::vector<double> y = // ...

double dot_product = std::transform_reduce(
  x.begin(), x.end(), y.begin()
); 
// end-sample
