                                                // For width
// sample(primary)
std::tuple<double, double, double> t = // ...   

double      &x, &y, &z;  // COMPILE ERROR
                         // Uninitialized refs.
std::tie(x, y, z) = t;

// end-sample

