#include <cstdint>

                                                                // For width
// sample(primary)
template <typename T>                                           
struct buffer {
  buffer(T* ptr, std::size_t size);
  buffer(buffer const& other);
  // ...
  T* ptr;
  std::size_t const size;
};
// end-sample

int main()
{

// sample(primary)

// ...

std::tuple<buffer<int>, buffer<int>> AB = // ...
// end-sample

std::tuple<buffer<int>, buffer<int>>(buffer<int>(nullptr, 0), buffer<int>(nullptr, 0));

// sample(primary)

buffer<int> A(std::get<0>(AB));
buffer<int> B(std::get<1>(AB));
// end-sample

// sample(primary)

buffer<int> C(nullptr, 0), D(nullptr, 0);
std::tie(C, D) = AB;                         // COMPILE ERROR.
// end-sample

}
