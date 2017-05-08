// sample(primary)
template <typename Iterator, typename Dist>
void advance(Iterator& i, Dist n)
{
  typename std::iterator_traits<Iterator>::iterator_category c;
  advance_impl(i, n, c);
}

template <typename Iterator, typename Distance>
void advance(Iterator& i, Dist n, std::random_access_iterator_tag)
{
  i += n;
}

template <typename Iterator, typename Dist>
void advance_impl(Iterator& i, Dist n, std::bidirectional_iterator_tag)
{
  if (n >= 0) while (n--) ++i;
  else        while (n++) --i;
}

template <typename Iterator, typename Dist>
void advance_impl(Iterator& i, Dist n, std::input_iterator_tag)
{
  while (n--) ++i;
}
// end-sample
