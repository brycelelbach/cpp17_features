// sample(primary)
template <typename Iterator, typename Dist>
void advance(Iterator& i, Dist n)
{
  typename std::iterator_traits<Iterator>::iterator_category c;

  if constexpr (std::is_same_v<c, std::random_access_iterator_tag>)
    i += n;

  else if constexpr (std::is_same_v<c, std::bidirectional_iterator_tag>)
  {
    if (n >= 0) while (n--) ++i;
    else        while (n++) --i;
  }

  else // std::input_iterator_tag
    while (n--) ++i;
}
// end-sample
