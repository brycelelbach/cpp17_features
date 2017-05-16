<div class="slide-title">Unary `static_assert`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
10_language_unary_static_assert
/
00_add_cpp14_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Before C++17, `static_assert` required you to give it a failure message, unlike
`assert`.

---

<div class="slide-title">Unary `static_assert`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
10_language_unary_static_assert
/
00_add_cpp14_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
10_language_unary_static_assert
/
00_add_cpp14_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:
In C++17, the failure message is optional.

