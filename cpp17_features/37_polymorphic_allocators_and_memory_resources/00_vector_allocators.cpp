                                                   // For width
// begin-sample(0)
std::vector<int, std::allocator<int>> a;           


std::vector<int, my_memory_pool<int>> b;


std::vector<int, my_slab_allocator<int, 1024>> c;


std::vector<int, my_slab_allocator<int, 4096>> d;
// end-sample

                                                   // For width
// begin-sample(1)
std::vector<int, std::pmr::allocator<int>> a;      

std::pmr::unsynchronized_pool_resource p;
std::vector<int, std::pmr::allocator<int>> b(&p);

my_slab_allocator<1024> s1k;
std::vector<int, std::pmr::allocator<int>> c(&s1k);

my_slab_allocator<4096> s4k;
std::vector<int, std::pmr::allocator<int>> d(&s4k);
// end-sample

                                                   // For width
// begin-sample(2)
std::pmr::vector<int> a;                           

std::pmr::unsynchronized_pool_resource p;
std::pmr::vector<int> b(&p);

my_slab_allocator<1024> s1k;
std::pmr::vector<int> c(&s1k);

my_slab_allocator<4096> s4k;
std::pmr::vector<int> d(&s4k);
// end-sample

