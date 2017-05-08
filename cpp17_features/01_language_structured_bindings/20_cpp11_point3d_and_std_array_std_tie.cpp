// sample(primary)
struct point3d { double x, y, z; };

point3d p3d = // ... 

double i, j, k;
std::tie(i, j, k) = p3d; // COMPILE ERROR.


std::array<int, 3> i3d = // ...

double i, j, k;
std::tie(i, j, k) = i3d; // COMPILE ERROR.
// end-sample
