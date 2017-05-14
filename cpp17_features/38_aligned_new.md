<div class="slide-title">Aligned `new`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
38_aligned_new
/
00_aligned_array_of_people.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

For alignments above a certain threshold, global new is not guaranteed to allocate aligned memory.

---

<div class="slide-title">Aligned `new`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
38_aligned_new
/
00_aligned_array_of_people.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
38_aligned_new
/
00_aligned_array_of_people.cpp
#1
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Aligned `new`</div>

<pre style="display: inline-block;">
<code>
void* operator new(std::size_t, std::align_val_t);
void* operator new[](std::size_t, std::align_val_t);
void operator delete(void*, std::align_val_t);
void operator delete[](void*, std::align_val_t);
void operator delete(void*, std::align_val_t, std::size_t);
void operator delete[](void*, std::align_val_t, std::size_t);
</code>
</pre>

<!--
<span style="font-size: 24px; font-family: monospace; display: block;">
`void* operator new(std::size_t, std::align_val_t);`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span>
<span style="font-size: 24px; font-family: monospace; display: block;">
`void* operator new[](std::size_t, std::align_val_t);`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span>
<span style="font-size: 24px; font-family: monospace; display: block;">
`void operator delete(void*, std::align_val_t);`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span>
<span style="font-size: 24px; font-family: monospace; display: block;">
`void operator delete[](void*, std::align_val_t);`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span>
<span style="font-size: 24px; font-family: monospace; display: block;">
`void operator delete(void*, std::align_val_t, std::size_t);`&nbsp;&nbsp;
</span>
<span style="font-size: 24px; font-family: monospace; display: block;">
`void operator delete[](void*, std::align_val_t, std::size_t);`
</span>
-->

* `#include <aligned_new>`
* Alignment-aware global `new`.
* For allocations requiring an alignment that is not guaranteed by alignment-unaware global `new`, the lookup order is:
  * Class-specific and alignment-aware `new`.
  * Class-specific and alignment-unaware `new`.
  * Global and alignment-aware `new`.

NOTES:

