                                                 // For width
// sample(left)
int to_int(std::string const& s);               

int to_int(char const* s);

int to_int(my_string const& s);








// end-sample

                                                 // For width
// sample(right)
int to_int(std::string_view s);                 



struct my_string
{
  // ...

  operator std::string_view() const
  {
    return std::string_view(data(), size());
  }
};
// end-sample

