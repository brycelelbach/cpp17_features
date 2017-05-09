                                           // For width
// sample(primary)
struct action                              
{
  void call() const; 
    
  std::future<void> call_async()
  {
    return std::async([*this] { call(); });
    // COMPILE ERROR: Capturing *this is
    // not supported. 
  }
};
// end-sample

