                                           // For width
// sample(left)
std::vector<T> x = // ...                  

#pragma omp parallel for simd
for (std::size_t i = 0; i < x.size(); ++i)
  process(x[i]);
// end-sample

                                           // For width
// sample(right)
std::vector<T> x = // ...                  

std::for_each(std::par_unseq,
              x.begin(), x.end(), process);
// end-sample

