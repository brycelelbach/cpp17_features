                                            // For width
// sample(primary)
struct semaphore;

template <typename T>
auto depend(std::unique_future<T> f)
{ 
  semaphore sem;

  std::optional<T> r;

  f.then(
      [&] (auto&& v)
      {
          r = std::forward<decltype(v)>(v);
          sem.notify();
      }
  );

  sem.wait();

  return std::move(*r);
}
// end-sample

