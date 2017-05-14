// sample(0)
template <typename Key, typename Value>
void move_and_rekey(std::map<Key, Value>& src,
                    Key const& srckey,
                    std::map<Key, Value>& dest
                    Key const& destkey)
{
  auto node = src.extract(srckey);
  node.key() = destkey;
  dest.insert(std::move(node));
}
// end-sample
