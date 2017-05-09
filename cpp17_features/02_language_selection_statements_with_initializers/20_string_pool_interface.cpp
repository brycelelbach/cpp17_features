                                                          // For width
// sample(primary)
struct string_pool                                        
{
  std::string pop(std::size_t new_cap);
  // ... 
 private:
  std::mutex mtx_;
  std::string pool_;
};
// end-sample

