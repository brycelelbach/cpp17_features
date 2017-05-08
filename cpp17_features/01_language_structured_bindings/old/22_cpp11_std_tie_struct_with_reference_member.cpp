#include <cstdint>

                                                                // For width
// sample(primary)
template <typename T, std::size_t size>                         
struct buffer_ref {
  buffer_ref(T (&ref)[size]);
  buffer_ref(buffer_ref const& other);
  // ...
  T (&ref)[size];

};
// end-sample

int main()
{

// sample(primary)

// ...

std::tuple<buffer_ref<int, 64>, buffer_ref<int, 64>> AB = // ...
// end-sample

int a[64];
int b[64];
std::tuple<buffer_ref<int, 64>, buffer_ref<int, 64>>(buffer_ref<int>(a), buffer_ref<int>(b));

// sample(primary)

buffer_ref<int, 64> A(std::get<0>(AB));
buffer_ref<int, 64> B(std::get<1>(AB));
// end-sample

// sample(primary)

buffer_ref<int, 64> C, D;                    // COMPILE ERROR.
std::tie(C, D) = AB;                         // COMPILE ERROR.
// end-sample

}
