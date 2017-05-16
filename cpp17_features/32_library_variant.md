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
Before C++17, writing a discriminated union type was not easy.

You could try to do it with `union`, but there's a number of footguns.

---

<!--

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

-->

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
You need to implement the variant state yourself, since `union` doesn't track it. This can be error prone - if you add a new type to the union, you might forget to add a new enum value.

Also, what happens if you have types with non-trivial constructors or destructors
in the `union`?

If a `union` contains a type with user-defined constructors and destructors, to
switch the active member, placement `new` and explicit destructor invocation are
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
C++17 has a generic implementation of this type of data structure - `std::variant`.

---

<div class="slide-title">`variant`</div>

`std::variant<T0, T1, ...>`

* `#include <variant>`
* A discriminated union. 
* Interface is similar to Boost.Variant.
* Access uses the visitor pattern. 

<table style="font-size: 24px;">
<tr><th style="background: #000; border-top: 0px; border-left: 0px;"></th>
                                    <td>`std::variant<T0, T1, ...>`</td></tr>
<tr><th>Heap Allocation</th>        <td>No.</td>
<tr><th>Ownership Semantics</th>    <td>Owns its contents.</td></tr>
<tr><th>Copying</th>                <td>Depends on `T0`, `T1`, ...</td></tr>
<tr><th>Passing Style</th>          <td>Depends on `T0`, `T1`, ...</td></tr>
</table>

NOTES:

{READ SLIDE}

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
10_multiplies_visitor.cpp
#primary
'></code></pre>

NOTES:
To access the value of a `variant`, the visitor pattern is frequently used.

You write a visitor - a `Callable` object that can be called with all of the possible
types of the `variant`'s value..

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
11_multiplies_visitor_if_constexpr.cpp
#primary
'></code></pre>

NOTES:
Using the `if constexpr` tag dispatching idiom I showed you earlier, we can
write a generic lambda visitor in-place instead of a struct.

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
12_multiplies_visitor_overload.cpp
#primary
'></code></pre>

NOTES:
We can use another C++17 feature - variadic using-declarations - to write a
helper template class `overloaded` that builds an overload set from a set of
lambdas.

---

<div class="slide-title">`variant`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
32_library_variant
/
20_binary_tree.cpp
#primary
'></code></pre>

NOTES:
`variant` is very useful for writing recursive data structures - for example, a
binary tree.

