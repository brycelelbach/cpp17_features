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
  }



  // Consumes value.
  template <typename T>
  T retrieve()
  {
    std::lock_guard l(mtx_);

    void* rp = nullptr;
    std::swap(rp, ptr_);

    std::unique_ptr up(reinterpret_cast<T>(ptr_));


    if (up) return std::move(up.get());
    else    return T{};
  }
};
// end-sample
