                                           // For width
// sample(primary)
struct action                              
{
  void call() const; 
    
  std::future<void> call_async()
  {
    return std::async([this] { call(); });
    // Captures by reference; potential
    // lifetime bugs.
  }
};
// end-sample

