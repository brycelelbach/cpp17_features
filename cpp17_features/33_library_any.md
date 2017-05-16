<div class="slide-title">`any`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
33_library_any
/
10_vector_any.cpp
#primary
'></code></pre>

NOTES:

What do we do if we need a `variant`, but we don't know the types at compile time?

Or what if we want a heterogeneous `vector`?

C++17 adds a generalized type-erasure facility, `any`.

---

<div class="slide-title">`any`</div>

`std::any`

* `#include <any>`
* Type-erasure for copyable objects. 
* Four main operations:
  * Copy it. 
  * Assign a value of some type `T` (`operator=`).
  * Ask whether it contains a value of some type `T` (`.type`).
  * Retrieve a value of some type `T` (`any_cast<>`).

<table style="font-size: 24px;">
<tr><th style="background: #000; border-top: 0px; border-left: 0px;"></th>
                                    <td>`std::any`</td></tr>
<tr><th>Heap Allocation</th>        <td>Yes.</td>
<tr><th>Ownership Semantics</th>    <td>Owns its contents.</td></tr>
<tr><th>Cost of Copying</th>        <td>Same as the contained type.</td></tr>
<tr><th>Passing Style</th>          <td>By reference.</td></tr>
</table>

NOTES:

{READ FROM SLIDE}

`std::any` is nice tool for implementing type-erasure as well as heterogeneous
types.

<!--

<div class="slide-title">`any`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
33_library_any
/
00_mailbox_interface.cpp
#primary
'></code></pre>

XXXXX::
What do we do if we need a `variant`, but we don't know the types at compile time?

What we need is type erasure.

For example, let's say we wanted to implement a type-erased thread-safe mailbox -
a place where a producer can put a value and consumer can get a value.

<div class="slide-title">`any`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
33_library_any
/
01_mailbox_void_star.cpp
#primary
'></code></pre>
</div>

<div class="right">
</div>

<div class="slide-title">`any`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
33_library_any
/
02_mailbox_void_star_memory_leak.cpp
#primary
'></code></pre>
</div>

<div class="right">
</div>

<div class="slide-title">`any`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
33_library_any
/
03_mailbox_void_star_no_checking.cpp
#primary
'></code></pre>
</div>

<div class="right">
</div>

XXXXX:
Before C++17, we could implement this manually with `void*`, but it's not pretty.

<div class="slide-title">`any`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
33_library_any
/
04_mailbox_before_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
33_library_any
/
04_mailbox_before_vs_cpp17.cpp
#right
'></code></pre>
</div>

-->
