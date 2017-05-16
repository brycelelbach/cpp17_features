                                                  // For width
// sample(primary)
struct mailbox                                    
{
  // Overwrites prior value.
  template <typename T>
  void store(T&& t);

  // Consumes value.
  template <typename T>
  T retrieve();

 private:
  std::mutex mtx_;
  void* ptr_;
};
// end-sample
