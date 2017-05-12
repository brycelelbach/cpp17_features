// sample(left)
struct person
{
  std::string first_name_;
  std::string middle_name_;
  std::string last_name_;
  bool middle_name_known_;

  bool is_middle_name_known() const
  {
    return middle_name_known_; 
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

// sample(right)
struct person
{
  std::string first_name_;
  std::optional<std::string> middle_name_;
  std::string last_name_;


  bool is_middle_name_known() const
  {
    return middle_name_; 
  }

  // Throws if the middle name is unknown. 
  std::string_view get_middle_name() const
  {
    if (!is_middle_name_known())
      throw /* ... */
    return *middle_name_;
  }
};
// end-sample

