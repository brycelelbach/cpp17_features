                                            // For width
// sample(primary)
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
    INT, DOUBLE, STRING
  }; // Forgot to update this!

  data_type data;
  kind_type kind;
};

convert_result
convert(std::string_view s);
// end-sample

