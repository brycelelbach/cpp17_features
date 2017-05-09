// sample(primary)
template <typename Key, typename Value, typename F>
void find_and_update(std::map<Key, Value>& m, F f)
{
  auto it = map.find(key);
  if (it != m.end())
    it->second = f(it->first);
}
// end-sample

