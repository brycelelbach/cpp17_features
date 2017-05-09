                                         // For width
// sample(primary)
struct device                            
{
  enum state { bad, sleep, ready };
  state status() const;
  void wake();
  void run(); 
};
// end-sample

