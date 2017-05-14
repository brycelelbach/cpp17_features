// sample(primary)
std::string generate_random_string(std::size_t size)
{
  std::string_view constexpr alphabet = "abcdefghijklmnopqrstuvwxyz";
  std::string tmp;
  std::sample(
    alphabet.begin(), alphabet.end(),
    std::back_inserter(tmp),
    size, std::mt19937(std::random_device{}())
  );
  return tmp;
}
// end-sample
