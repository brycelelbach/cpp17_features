                                        // For width
// sample(left)
std::lock_guard<std::mutex>             
grab_lock(std::mutex& m)
{
  return std::lock_guard<std::mutex>(m);
  // COMPILE ERROR: Copy or move ctor
  // required; lock_guard has neither.
}


std::mutex mtx;

auto guard = grab_lock(mtx);
// end-sample

                                        // For width
// sample(right)
std::lock_guard<std::mutex>             
grab_lock(std::mutex& m)
{
  return std::lock_guard<std::mutex>(m);
}




std::mutex mtx;

auto guard = grab_lock(mtx);
// end-sample
