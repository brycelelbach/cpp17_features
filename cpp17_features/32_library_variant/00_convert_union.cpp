                                            // For width
// sample(primary)
struct convert_result                       
{
  union data_type
  {

    int i;
    double d;
    std::string s;
  };

  enum kind_type
  {
    INT, DOUBLE, STRING
  };

  data_type data;
  kind_type kind;
};

convert_result
convert(std::string_view s);
// end-sample

