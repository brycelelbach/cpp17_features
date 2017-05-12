// sample(primary)
template <typename Leaf>
struct binary_tree;

template <typename Leaf>
struct binary_tree_branch
{
  std::shared_ptr<binary_tree<leaf> > left;
  std::shared_ptr<binary_tree<leaf> > right;
};

template <typename Leaf>
struct binary_tree
{
  std::variant<Leaf, binary_tree_branch<leaf> > value;
};
// end-sample

