<div class="slide-title">`inline` Variables</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
07_language_inline_variables
/
00_dimensions_cpp17.cpp
#primary
'></code></pre>

NOTES:

---

<div class="slide-title">`inline` Variables</div>

`inline` variables have the same properties as `inline` functions:
* They may be defined in more than one translation unit as long as the definitions are identical.
* The definition must be present in a translation unit that accesses an `inline` variable.
* An `inline` variable with external linkage (e.g. not `static`):
  * Must be declared `inline` in every translation unit.
  * Has the same address in every translation unit. 

A `static constexpr` member variable is implicitly `inline`.
</div>

NOTES:

---

<div class="slide-title">`inline` Variables</div>

<div class="left">
<span style="display: block">__**C++98**__</span>

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

---

<div class="slide-title">`inline` Variables</div>

<div class="left">
<span style="display: block">__**C++98**__</span>

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

