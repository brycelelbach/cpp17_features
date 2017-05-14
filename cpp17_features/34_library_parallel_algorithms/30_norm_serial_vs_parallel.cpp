                                                    // For width
// sample(left)
std::vector<double> x = // ...                      

double norm = 
  std::sqrt(
    (x[0] * x[0]) + (x[1] * x[1]) + /* ... */
  );
















// end-sample 

                                                    // For width
// sample(right)
std::vector<double> x = // ...                      

double norm = 
  std::sqrt(
    std::transform_reduce(
      std::par_unseq,
      
      // Input sequence.
      x.begin(), x.end(),
 
      // Initial reduction value.
      double(0.0),
      
      // Binary reduction op: Addition.
      [] (double xl, double xr) { return xl + xr; },

      // Unary transform op: Squaring.
      [] (double x) { return x * x; }
    )
  );
// end-sample 

