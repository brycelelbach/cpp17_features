template <typename T>
struct eager_vector
{
    eager_vector(std::size_t preallocate = 1024); // Expensive.
    eager_vector(eager_vector const& other);
    // ...
};

// ...

std::tuple<eager_vector<char>, bool> tup = // ...

eager_vector<char> u; // Unnecessary default construction.
bool ufound; 
std::tie(u, ufound) = tup;
