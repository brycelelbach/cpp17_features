                                                          // For width
// sample(primary)
std::string string_pool::pop(std::size_t new_cap)         
{
  std::string s;


  std::lock_guard<std::mutex> l(mtx_);
  if (!pool_.empty())
  {
      std::swap(s, pool_.back());
      pool_.pop_back();
  }


  if (s.capacity() < new_cap)
    s.reserve(new_cap); // Unnecessary contention.
                        // mtx_ still locked.

  return s;
}
// end-sample

