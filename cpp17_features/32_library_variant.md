<div class="slide-title">`variant`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
00_convert_union.cpp
#primary
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">`variant`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
01_convert_union_kind_out_of_date_bug.cpp
#primary
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">`variant`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
02_convert_union_ctors_and_dtors.cpp
#primary
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
If a `union` contains a type with user-defined constructors and destructors, to
switch the active member, explicit destructor invocation and placement new are
usually needed.

---

<div class="slide-title">`variant`</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
03_convert_before_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
03_convert_before_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">`variant`</div>

`std::variant<T0, T1, ...>`

* `#include <variant>`
* A discriminated union. 
* Interface is similar to Boost.Variant.
* Access uses the visitor pattern. 

<table>
<tr><th style="background: #000; border-top: 0px; border-left: 0px;"></th>
                                    <td>`std::variant<T0, T1, ...>`</td></tr>
<tr><th>Heap Allocation</th>        <td>No.</td>
<tr><th>Ownership Semantics</th>    <td>Owns its contents.</td></tr>
<tr><th>Copying</th>                <td>Depends on `T0`, `T1`, ...</td></tr>
<tr><th>Passing Style</th>          <td>Depends on `T0`, `T1`, ...</td></tr>
</table>

NOTES:

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
10_multiplies_visitor.cpp
#primary
'></code></pre>

NOTES:

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
11_multiplies_visitor_if_constexpr.cpp
#primary
'></code></pre>

NOTES:

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
12_multiplies_visitor_overload.cpp
#primary
'></code></pre>

NOTES:

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
20_binary_tree.cpp
#primary
'></code></pre>

NOTES:
