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
Suppose we want to write an `all_integral` type trait, which is true if all
the elements of a parameter pack are integral and false otherwise.

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
We could write a simple implementation using fold expressions.

However, this approach will instantiate T::value for every element of the pack
(e.g.  no short circuiting).

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
C++17 adds three boolean logic metafunctions that are lazily evaluated to help
you write this type of code.

---

<div class="slide-title">Boolean Logic Metafunctions</div>

<table style="font-size: 18px;">
<tr>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::bool_constant&lt;B&gt;</code></td>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::integral_constant&lt;bool, B&gt;</code></td>
</tr>
<tr>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::conjunction&lt;Ts...&gt;</code></td>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::bool_constant&lt;(... && Ts::value)&gt;</code></td>
</tr>
<tr>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::disjunction&lt;Ts...&gt;</code></td>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::bool_constant&lt;(... || Ts::value)&gt;</code></td>
</tr>
<tr>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::negation&lt;T&gt;</code></td>
  <td style="font-family: monospace;"><code style="font-size: 24px;">std::bool_constant&lt;!T::value&gt;</code></td>
</tr>
</table>

* `#include <type_traits>`
* Boolean logic metafunctions.
* Lazily evaluated.
  * E.g. `std::conjunction` and `std::disjunction` are short-circuited.
* `*_t` and `*_v` aliases are also defined.

NOTES:
{READ FROM SLIDE}

