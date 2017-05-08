// sample(primary)
point3d p3d = // ...
auto& [i, j, k] = p3d;

point3d p3d = // ...
auto&& [i, j, k] = std::move(p3d);
// end-sample