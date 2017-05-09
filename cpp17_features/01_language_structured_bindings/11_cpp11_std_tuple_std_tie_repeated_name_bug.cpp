                                                // For width
// sample(primary)
std::tuple<double, double, double> t = // ...   

double       x,  y,  z;

std::tie(y, y, z) = t;
      // ^ UH-OH: No warning for repeated names.
// end-sample

