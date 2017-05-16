<div class="slide-title">Preprocessor Predicate for Header Testing</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
13_language_preprocessor_predicate_for_header_testing
/
00_string_view_cpp17.cpp
#primary
'></code></pre>

NOTES:
C++17 adds a new preprocessor predicate, `__has_include`, which can be used to
test if a header includes.

This can be useful when searching for "optional dependencies". 

TRANSITION: Speaking of `std::string_view`.

