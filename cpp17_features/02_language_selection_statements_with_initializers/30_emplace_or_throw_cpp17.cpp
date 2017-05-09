// sample(primary)
template <typename Key, typename F>
void emplace_or_throw(std::set<Key>& m, Key&& k, F f)
{
  if (auto [it, s] = m.emplace(std::forward<Key>(k)); !s)
    throw std::runtime_error("insertion failed");
  else
    f(*it);
}
// end-sample

