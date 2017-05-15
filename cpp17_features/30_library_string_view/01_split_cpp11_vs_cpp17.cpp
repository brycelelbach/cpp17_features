#include <regex>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string_view>

namespace left
{

                                             // For width
// sample(left)
std::vector<std::string>                     
split(std::string const& s,
      std::regex const& r)
{
  using iterator = std::regex_token_iterator<
      std::string::const_iterator
  >;

  std::vector<std::string> v;

  std::transform(
    iterator(s.begin(), s.end(), r, -1),
    iterator(),
    std::back_inserter(v),
    [] (auto m)
    {
      return std::string(m.first, m.second);
    }
  );

  return v;
}
// end-sample

}

namespace right
{

                                             // For width
// sample(right)
std::vector<std::string_view>                
split(std::string_view s,
      std::regex const& r)
{
  using iterator = std::regex_token_iterator<
      std::string_view::const_iterator
  >;

  std::vector<std::string_view> v;

  std::transform(
    iterator(s.begin(), s.end(), r, -1),
    iterator(),
    std::back_inserter(v),
    [] (auto m)
    {
      return std::string_view(m.first,
                              m.length());
    }
  );

  return v;
}
// end-sample

}

int main()
{
  {
    std::regex const r(" +");
          
    for (auto s : left::split("a b c", r))
      std::cout << s << std::endl;
  }

  {
    std::regex const r(" +");
          
    for (auto s : right::split("a b c", r))
      std::cout << s << std::endl;
  }
}

