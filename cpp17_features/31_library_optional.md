<div class="slide-title">`optional`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
00_convert_interface_error_handling_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

---

<div class="slide-title">`optional`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
00_convert_interface_error_handling_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
00_convert_interface_error_handling_cpp98_vs_cpp17.cpp
#right
'></code></pre>
</div>

---


<div class="slide-title">`optional`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
01_convert_cpp17_optional.cpp
#primary
'></code></pre>

NOTES:
Notice that we return a possibly-uninitialized `optional<int>` here.
This is fine - a default `optional` is in the empty state.
If we return an uninitialized `int`, we might get garbage.

---

<div class="slide-title">`optional`</div>

`std::optional<T>`

* `#include <optional>`
* A nullable object wrapper.
* Interface is similar to smart pointers.


<table>
<tr><th style="background: #000; border-top: 0px; border-left: 0px;"></th>
                                    <td>`std::optional<T>`</td></tr>
<tr><th>Heap Allocation</th>        <td>No.</td>
<tr><th>Ownership Semantics</th>    <td>Owns its contents.</td></tr>
<tr><th>Copying</th>                <td>Same as `T` (cheap when empty).</td></tr>
<tr><th>Passing Style</th>          <td>Same as `T`.</td></tr>
</table>

NOTES:

---

<div class="slide-title">`optional`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
10_person_empty_is_unknown_before.cpp
#primary
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
What if we need to distinguish between people whose middle names we don't know
and people that we know do not have middle names?

---

<div class="slide-title">`optional`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
11_person_before_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">`optional`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
11_person_before_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
11_person_before_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">`optional`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
20_slice_optional_arguments.cpp
#primary
'></code></pre>

NOTES:
