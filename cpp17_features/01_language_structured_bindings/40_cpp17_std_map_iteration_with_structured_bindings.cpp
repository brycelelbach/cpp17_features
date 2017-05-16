                                                   // For width
// sample(primary)
template <typename Key, typename Value, typename F>
void update(std::map<Key, Value>& m, F f)
{
  for (auto&& [key, value] : m)
    value = f(key);
}

// end-sample

