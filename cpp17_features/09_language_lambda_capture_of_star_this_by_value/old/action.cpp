#include <future>
#include <iostream>

struct action
{
  void call() const { std::cout << (std::uintptr_t)this << std::endl; }
    
  std::future<void> call_async() {
    std::cout << (std::uintptr_t)this << std::endl;
    return std::async([*this] { call(); });
  }
};

int main()
{
  action a;
    
  a.call_async().get();
}
