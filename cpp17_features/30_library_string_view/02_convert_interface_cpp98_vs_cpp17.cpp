                                                 // For width
// sample(left)
int convert(std::string const& s);               

int convert(char const* s);

int convert(my_string const& s);








// end-sample

                                                 // For width
// sample(right)
int convert(std::string_view s);                 



struct my_string
{
  // ...

  operator std::string_view() const
  {
    return std::string_view(data(), size());
  }
};
// end-sample

