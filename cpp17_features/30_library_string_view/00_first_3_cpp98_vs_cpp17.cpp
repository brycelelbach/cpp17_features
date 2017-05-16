                                                // For width
// begin-sample(left)
std::string first_3(std::string const& s)   
{
  if (s.size() < 3) return s;
  return s.substr(0, 2); // Expensive copy.
                         // May allocate.
}


if (first_3("ABCDEFG") == "ABC")
  // ...
// end-sample

                                                // For width
// begin-sample(right)
std::string_view first_3(std::string_view s)
{
  if (s.size() < 3) return s;
  return s.substr(0, 3); // Cheap copy.
                         // Won't allocate.
}


if (first_3("ABCDEFG") == "ABC")
  // ...
// end-sample
