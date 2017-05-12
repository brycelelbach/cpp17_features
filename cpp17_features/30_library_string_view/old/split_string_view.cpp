#include <regex>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string_view>

std::vector<std::string_view>
split(std::string_view s, std::regex const& r)
{
  using iterator = std::regex_token_iterator<
      std::string_view::const_iterator
  >;
  std::vector<std::string_view> v;
  std::transform(
    iterator(s.begin(), s.end(), r, -1),
    iterator(),
    std::back_inserter(v),
    [] (auto m) { return std::string_view(m.first, m.length()); }
  );
  return v;
}

int main()
{

std::regex const r(" +");
    
for (auto s : split("a b c", r))
  std::cout << s << std::endl;

}
