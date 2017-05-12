                                                 // For width
// sample(left)
// Return default int on parse error.
int convert(std::string_view s);        

// Throw on parse error.
int convert(std::string_view s);        

// Return false on parse error.
int convert(std::string_view s);        

// Return null on parse error.
std::unique_ptr<int> convert(std::string_view s);


// end-sample

                                                 // For width
// sample(right)
std::optional<int> convert(std::string_view s);  












// end-sample

