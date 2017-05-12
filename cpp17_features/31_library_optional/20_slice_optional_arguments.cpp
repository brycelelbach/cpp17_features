// sample(primary)
auto slice(std::string_view str,
           std::optional<int> start,
           std::optional<int> end)
{
  auto s = start.value_or(0);
  auto e = end.value_or(str.size());
  return std.substr(s, e - s);
}
// end-sample

