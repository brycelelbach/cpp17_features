// sample(primary)
template <typename... Xs>
constexpr auto make_storage(Xs... xs)
{
  auto storage = [=](auto f) { return f(xs...); };
  return storage;
}

template <typename... Xs>
struct tuple
{
  explicit constexpr tuple(Xs... xs)
    : storage{make_storage(xs...)} {}
  decltype(make_storage(declval<Xs>()...)) storage;
}

template <size_t N, typename... T>
constexpr decltype(auto) get(tuple<T...>& t)
{
  return t.storage([] (auto&&... xs) { /* ... */ }
}
// end-sample
