                                                  // For width
// sample(primary)
struct mailbox                                    
{
  // Overwrites prior value.
  template <typename T>
  void store(T&& t)
  {
    std::lock_guard l(mtx_);

    ptr_ = new T(std::forward<T>(t));
    // What do we do if ptr_ isn't null? We don't
    // have its type so we can't delete it.
  }

  // Consumes value.
  template <typename T>
  T retrieve()
  {
    std::lock_guard l(mtx_);

    void* rp = nullptr;
    std::swap(rp, ptr_);

    std::unique_ptr up(reinterpret_cast<T>(ptr_));
    // No type checks performed. Potential danger!

    if (up) return std::move(up.get());
    else    return T{};
  }
};
// end-sample
