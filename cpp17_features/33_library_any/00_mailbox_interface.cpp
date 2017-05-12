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
};
// end-sample
