<div class="slide-title">`inline` Variables</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
07_language_inline_variables
/
00_dimensions_cpp17.cpp
#primary
'></code></pre>

NOTES:
C++17 introduces `inline` variables! This is great because it simplifies writing
header-only libraries.

Here, I can mark my tag type `inline` so that my library can be used in multiple
translation units.

---

<div class="slide-title">`inline` Variables</div>

* Variables can now be `inline` just like functions.
* They may be defined in more than one translation unit as long as the definitions are identical.
* The definition must be present in a translation unit that accesses an `inline` variable.
* An `inline` variable with external linkage (e.g. not `static`):
  * Must be declared `inline` in every translation unit.
  * Has the same address in every translation unit. 
* A `static constexpr` member variable is implicitly `inline`.

NOTES:

{READ SLIDE FROM 2ND BULLET}

---

<div class="slide-title">`inline` Variables</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
07_language_inline_variables
/
10_global_atomic_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Before C++17, we would have to declare an `extern` global variable like this in
a header, and initialize it in the `.cpp` file.

---

<div class="slide-title">`inline` Variables</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
07_language_inline_variables
/
10_global_atomic_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
07_language_inline_variables
/
10_global_atomic_cpp98_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:
In C++17, we can just make it inline and put the initializer in the header.

---

<div class="slide-title">`inline` Variables</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
07_language_inline_variables
/
11_member_atomic_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
07_language_inline_variables
/
11_member_atomic_cpp98_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:
`static` member variables can also be `inline`.

NEXT: `constexpr` lambdas.

