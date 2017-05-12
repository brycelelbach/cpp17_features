// sample(primary)
struct person
{
  std::string first_name_;
  std::string middle_name_;
  std::string last_name_;


  bool is_middle_name_known() const
  {
    return !middle_name_.empty();
  }

  // Throws if the middle name is unknown. 
  std::string_view get_middle_name() const
  {
    if (!is_middle_name_known())
      throw /* ... */
    return middle_name_;
  }
};
// end-sample

