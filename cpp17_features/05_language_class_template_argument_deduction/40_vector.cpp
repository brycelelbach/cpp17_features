// sample(0)
namespace std
{

template <typename It>
vector(It b, It e) -> vector<typename std::iterator_traits<It>::value_type>;

}


std::vector f8({0, 1, 1, 2, 3, 5, 8, 13}); // Uses automatic deduction.

auto it = f8.begin();

std::vector f4(it, it + 4);                // Uses deduction guide.
// end-sample

