                                             // For width
// sample(0)
std::map<int, person> m = // ...             


person p = // ...
auto res = m.emplace(42, std::move(p));



person p = // ...
m[42] = std:::move(p);



// end-sample

                                             // For width
// sample(1)
std::map<int, person> m = // ...             


person p = // ...
auto res = m.emplace(42, std::move(p));
// If the insertion failed, was p moved?


person p = // ...
m[42] = std:::move(p);
// Value type must be DefaultConstructible. 
// Did we insert or assign?
// What iterator is the key at?
// end-sample

                                             // For width
// sample(2)
std::map<int, person> m = // ...             


person p = // ...
auto res = m.try_emplace(42, std::move(p));
// If the insertion failed, p wasn't moved.


person p = // ...
auto res = m.insert_or_assign(std:::move(p));
// Returns info as a pair<iterator, bool>.


// end-sample

