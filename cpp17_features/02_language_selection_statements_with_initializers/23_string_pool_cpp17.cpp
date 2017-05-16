                                                          // For width
// sample(primary)
std::string string_pool::pop(std::size_t new_cap)         
{
  std::string s;



  if (std::lock_guard<std::mutex> l(mtx_); !pool_.empty())
  {
      std::swap(s, pool_.back());
      pool_.pop_back();
  }


  if (s.capacity() < new_cap)
    s.reserve(new_cap);


  return s;
}
// end-sample

