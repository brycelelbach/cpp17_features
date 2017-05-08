// sample(primary)
struct person
{
 private:
  std::uint64_t id_;
  std::string   name_;
  std::uint16_t age_;
 public:
  std::uint64_t& get_id();
  std::string&   get_name();
  std::uint16_t& get_age();
};
// end-sample 
