                                             // For width
// sample(primary)
template <typename Key, typename Value,
          typename F>
void find_and_update(std::map<Key, Value>& m,
                     F f)
{
  if (auto it = map.find(key); it != m.end())
    it->second = f(it->first);

}
// end-sample

