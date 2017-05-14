// sample(primary)
std::string text = "Whose woods these are I think I know.\n"
                   "His house is in the village though;\n";
std::string p = "house";
auto it = std::search(text.begin(), text.end(),
                      std::boyer_moore_searcher(p.begin(), p.end()));
// end-sample
