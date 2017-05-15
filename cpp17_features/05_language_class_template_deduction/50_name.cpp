// sample(0)
template <typename T>
struct name
{
  constexpr name(T first_, T last_);

  T first;
  T last;
};

name(char const*) -> name<std::string_view>;


name n{"John", "Smith"};    // name<std::string_view>


std::string first = // ...;
std::string last  = // ...;

name n{first, last};        // name<std::string>
// end-sample

