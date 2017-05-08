

                                                   // For width
// sample(primary)
struct point3d { double x, y, z; };                

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

point3d rp = random_point3d();
double  x = rp.x;
double  y = rp.y;
double  z = rp.z;
// end-sample

}