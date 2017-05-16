                                                // Text width
// sample(left)
// In header (.hpp):                            


extern std::atomic<bool> ready;


// In source file (.cpp):
std::atomic<bool> ready = false;
// end-sample

                                                // Text width
// sample(right)
                                                


inline std::atomic<bool> ready = false;




// end-sample

