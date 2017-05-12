<div class="slide-title">`string_view`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
00_first_3_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">`string_view`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
00_first_3_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
00_first_3_cpp98_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">`string_view`</div>

`std::string_view`

* `#include <string_view>`
* A non-owning view of a string.
* Interface is mostly the same as `std::string`; it is often a drop-in replacement.

<table>
<tr><th></th>                   <td>`std::string`</td>     <td>`std::string_view`</td></tr>
<tr><th>Heap Allocation</th>    <td>Yes.</td>              <td>No.</td>
<tr><th>Ownership Semantics</th><td>Owns its contents.</td><td>Non-owning (pointer + length).</td></tr>
<tr><th>Copying</th>            <td>Expensive.</td>        <td>Cheap.</td></tr>
<tr><th>Passing Style</th>      <td>By reference.</td>     <td>By value.</td></tr>
<tr><th>Element Mutability</th> <td>Allowed.</td>          <td>Not allowed.</td></tr>
</table>

NOTES:

---

<div class="slide-title">`string_view`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
01_split_cpp11_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">`string_view`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
01_split_cpp11_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
01_split_cpp11_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">`string_view`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
02_convert_interface_cpp98_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
30_library_string_view
/
02_convert_interface_cpp98_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:

