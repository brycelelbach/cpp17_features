                                           // For width
// sample(0)
template <typename T, typename... Args>
T* new_aligned_array(std::size_t size,
                     std::size_t alignment)
{
  void* vp = nullptr;
  int r = posix_memalign(&vp, alignment,
                         size * sizeof(T));
  return new (vp) T[] ();
  // T must be DefaultConstructible.
}


struct alignas(128) person                 
{
  // ...
};


person* p = new_aligned_array(
  1024, alignof(person)
);


// end-sample

                                           // For width
// sample(1)












struct alignas(128) person                 
{
  // ...
};


person* p = new person[1024];
// Calls operator new[](
//   sizeof(person),
//   std::align_val_t(alignof(person))
// )
// end-sample

