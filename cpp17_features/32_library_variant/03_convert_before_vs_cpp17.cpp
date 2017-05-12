                                            // For width
// sample(left)
struct convert_result                       
{
  union data_type
  {
    bool b;
    int i;
    double d;
    std::string s; // Do constructors and
  };               // destructors get run?

  enum kind_type
  {
    BOOL, INT, DOUBLE, STRING
  };

  data_type data;
  kind_type kind;
};

convert_result
convert(std::string_view s);
// end-sample

                                            // For width
// sample(right)



















std::variant<bool, int, double, std::string>
convert(std::string_view s);
// end-sample

