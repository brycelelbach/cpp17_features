                                                  // For width
// sample(left)
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

                                                  // For width
// sample(right)
struct mailbox                                    
{
  // Overwrites prior value.
  template <typename T>
  void store(T&& t)
  {
    std::lock_guard l(mtx_);
    val_ = std::forward<T>(t);
  }

  // Consumes value.
  template <typename T>
  T retrieve()
  {
    std::lock_guard l(mtx_);

    std::any tmp;
    std::swap(tmp, val_);

    if (tmp.has_value())
      // Throws std::bad_any_cast if not T.
      return any_cast<T>(std::move(tmp));
    else
      return T{};
  }
};
// end-sample
