                                                                              // For width
// sample(primary)
template <unsigned N>                                                         
std::string repeat(std::string_view s);

template <typename... Ts>
struct overloaded : Ts...
{
    using Ts::operator()...;
};

template <typename... Ts>
overloaded(Ts...) -> overloaded<Ts...>;



std::variant<std::string, int, std::array<int, 2>> v = // ...

constexpr unsigned N = 10;

std::visit(
  overloaded{
    [=](std::string& t)        { t = repeat(t); },
    [=](int& t)                { t = t * N; },
    [=](std::array<int, 2>& t) { t = {{t[0] * N, t[1] * N}}; }
  }, v);



// end-sample
