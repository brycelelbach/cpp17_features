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
Let's say we want to write a function like `first_3`, which "filters" a `string`,
and returns a new `string`.

This is awful! We're making an expensive copy here that may be unnecessary.

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
We can use `string_view` instead!

---

<div class="slide-title">`string_view`</div>

`std::string_view`

* `#include <string_view>`
* A non-owning view of a string.
* Interface is mostly the same as `std::string`; it is often a drop-in replacement.

<table style="font-size: 24px;">
<tr><th style="background: #000; border-top: 0px; border-left: 0px;"></th>
                                <td>`std::string`</td>     <td>`std::string_view`</td></tr>
<tr><th>Heap Allocation</th>    <td>Yes.</td>              <td>No.</td>
<tr><th>Ownership Semantics</th><td>Owns its contents.</td><td>Non-owning (pointer + length).</td></tr>
<tr><th>Copying</th>            <td>Expensive.</td>        <td>Cheap.</td></tr>
<tr><th>Passing Style</th>      <td>By reference.</td>     <td>By value.</td></tr>
<tr><th>Element Mutability</th> <td>Allowed.</td>          <td>Not allowed.</td></tr>
</table>

NOTES:
{READ SLIDE}

---

<!--

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

-->

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
Take a look at these two implementations of string splitting.

The `string` one will create a bunch of new strings.

The `string_view` version creates a vector of views into the original input.

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
`string_view` simplifies your interfaces.

It can be the one common string type that your interfaces accept, instead of
having overloads for C-style strings, `std::string`, your in-house string class,
etc.

For example, `string_view` simplifies this `to_int` interface.

TRANSITION: Let's take a look at this `to_int` example in a little more detail.

