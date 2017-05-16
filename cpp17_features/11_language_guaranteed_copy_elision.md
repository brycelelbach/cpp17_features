<div class="slide-title">Guaranteed Copy Elision</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
11_language_guaranteed_copy_elision
/
00_grab_lock_cpp11_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Return value optimization (RVO) is performed by every C++ compiler, but before C++17,
it isn't required.

This means you can't write a factory function for non-movable types.

---

<div class="slide-title">Guaranteed Copy Elision</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
11_language_guaranteed_copy_elision
/
00_grab_lock_cpp11_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
11_language_guaranteed_copy_elision
/
00_grab_lock_cpp11_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:
In C++17, we can write this type of factory function.

---

<div class="slide-title">Guaranteed Copy Elision</div>

* Return Value Optimization (RVO) is now mandatory.
  * You can RVO `NonMoveable` types.
* Named Return Value Optimization (NRVO) and other forms of copy elision are not mandatory.

NOTES:
{READ SLIDE}

