                                                // For width
// sample(primary)
point_3d p = // ...                             
double x, y, z;
std::tie(x, y, z) = p; // COMPILE ERROR.
                       // p isn't a std::tuple.


std::array<double, 3> c = // ...
double x, y, z;
std::tie(x, y, z) = c; // COMPILE ERROR.
                       // c isn't a std::tuple.
// end-sample
