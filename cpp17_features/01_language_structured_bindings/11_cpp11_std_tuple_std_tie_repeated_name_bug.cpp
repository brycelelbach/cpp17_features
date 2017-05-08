#include <tuple>


// sample(primary)
using point3d = std::tuple<double, double, double>;

point3d random_point3d();
// end-sample

point3d random_point3d()
{
  return point3d(1.0e3, -42.0, 3.14);
}

int main()
{

// sample(primary)

// ...

double x, y, z;
point3d rp = std::tie(y, y, z);
                   // ^ UH-OH.

// end-sample

}