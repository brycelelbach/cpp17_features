<div class="slide-title">Guaranteed Copy Elision</div>

<div class="left">
<span style="display: block">__**C++14**__</span>

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

---

<div class="slide-title">Guaranteed Copy Elision</div>

<div class="left">
<span style="display: block">__**C++14**__</span>

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

---

<div class="slide-title">Guaranteed Copy Elision</div>

* Return Value Optimization (RVO) is now mandatory.
  * You can RVO `NonMoveable` types.
* Named Return Value Optimization (NRVO) and other forms of copy elision are not mandatory.

NOTES:

