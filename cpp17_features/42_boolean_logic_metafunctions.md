<div class="slide-title">Boolean Logic Metafunctions</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
42_boolean_logic_metafunctions
/
00_all_integral.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
These patterns are commonly encountered when SFINAE'ing on parameter packs.

---

<div class="slide-title">Boolean Logic Metafunctions</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
42_boolean_logic_metafunctions
/
00_all_integral.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
42_boolean_logic_metafunctions
/
00_all_integral.cpp
#1
'></code></pre>
</div>

NOTES:
We could write a simpler implementation using fold expressions. However, this
approach will instantiate T::value for every element of the pack (e.g.  no
short circuiting).

---

<div class="slide-title">Boolean Logic Metafunctions</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
42_boolean_logic_metafunctions
/
00_all_integral.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
42_boolean_logic_metafunctions
/
00_all_integral.cpp
#2
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Boolean Logic Metafunctions</div>

<table style="font-size: 18px;">
<tr>
  <td style="font-family: monospace;">`std::bool_constant<B>`</td>
  <td style="font-family: monospace;">`std::integral_constant<bool, B>`</td>
</tr>
<tr>
  <td style="font-family: monospace;">`std::conjunction<Ts...>`</td>
  <td style="font-family: monospace;">`std::bool_constant<(... && Ts::value)>`</td>
</tr>
<tr>
  <td style="font-family: monospace;">`std::disjunction<Ts...>`</td>
  <td style="font-family: monospace;">`std::bool_constant<(... || Ts::value)>`</td>
</tr>
<tr>
  <td style="font-family: monospace;">`std::negation<T>`</td>
  <td style="font-family: monospace;">`std::bool_constant<!T::value>`</td>
</tr>
</table>

* `#include <type_traits>`
* Boolean logic metafunctions.
* `std::conjunction` and `std::disjunction` are short-circuited.
* `*_t` and `*_v` aliases are also defined.

NOTES:

