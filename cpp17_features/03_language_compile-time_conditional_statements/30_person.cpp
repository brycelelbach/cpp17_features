// sample(primary)
struct person
{
  std::uint64_t& get_id();
  std::string&   get_name();
  std::uint16_t& get_age();
 private:
  std::uint64_t id_;
  std::string   name_;
  std::uint16_t age_;
};

template <std::size_t I>
auto& get(person& p);
// end-sample 
