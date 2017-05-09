                                         // Text width
// sample(left)
// In header (.hpp):                     
struct system
{
  extern std::atomic<bool> ready;
};

// In source file (.cpp):
std::atomic<bool> system::ready = false;
// end-sample

                                         // Text width
// sample(right)

struct system
{
  inline std::atomic<bool> ready = false;
};



// end-sample

