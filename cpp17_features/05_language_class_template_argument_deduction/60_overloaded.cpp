// sample(0)
template <typename... Ts>
struct overloaded : Ts...
{
    using Ts::operator()...;
};

template <typename... Ts>
overloaded(Ts...) -> overloaded<Ts...>;


auto print = overloaded{
  [](unsigned u)          { std::cout << u << "u"; },
  [](float f)             { std::cout << f << "f"; },
  [](std::string_view sv) { std::cout << std::quoted(sv); }
};
// end-sample
