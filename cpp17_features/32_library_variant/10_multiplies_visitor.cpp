// sample(primary)
template <unsigned N>
std::string repeat(std::string_view s)
{
    std::string tmp;
    for (unsigned i = 0; i != N; ++i)
      tmp += s;
    return tmp;
}

template <unsigned N>
struct multiplier_visitor
{
  void operator()(std::string& t) const        { t = repeat(t); }
  void operator()(int& t) const                { t = t * N; }
  void operator()(std::array<int, 2>& t) const { t = {{t[0] * N, t[1] * N}}; }
};



std::variant<std::string, int, std::array<int, 2>> v;
// Default state is the first type, e.g. std::string.

v = 21;
std::visit(multiplier_visitor<2>{}, v); // v == 42. 

v = "Ha";
std::visit(multiplier_visitor<3>{}, v); // v == "HaHaHa".
// end-sample
