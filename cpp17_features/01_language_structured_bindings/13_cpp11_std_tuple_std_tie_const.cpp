                                                // For width
// sample(primary)
std::tuple<double, double, double> t = // ...   

double const x,  y,  z;

std::tie(x, y, z) = t; // COMPILE ERROR
                       // Assignment to const.
// end-sample

