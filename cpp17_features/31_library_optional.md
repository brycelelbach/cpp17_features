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

NOTES:
What do we do if the conversion to an integer fails?

{READ OPTIONS FROM SLIDES}

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

NOTES:
C++17 gives us a new answer: We could return a `std::optional`.

---

<div class="slide-title">`optional`</div>

`std::optional<T>`

* `#include <optional>`
* A nullable object wrapper. It adds a null state to the value it wraps.
* Interface is similar to smart pointers.

<table style="font-size: 24px;">
<tr><th style="background: #000; border-top: 0px; border-left: 0px;"></th>
                                    <td>`std::optional<T>`</td></tr>
<tr><th>Heap Allocation</th>        <td>No.</td>
<tr><th>Ownership Semantics</th>    <td>Owns its contents.</td></tr>
<tr><th>Copying</th>                <td>Same as `T` (cheap when empty).</td></tr>
<tr><th>Passing Style</th>          <td>Same as `T`.</td></tr>
</table>

NOTES:

{READ FROM SLIDE}

`optional` isn't just about error handling - it has a wide range of uses.

---

<div class="slide-title">`optional`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
01_convert_cpp17_optional.cpp
#primary
'></code></pre>

NOTES:
Here's how we'd use `optional` inside of `to_int`

Notice that we return a possibly-uninitialized `optional<int>` here.

This is fine - a default `optional` is in the empty state.

If we return an uninitialized `int`, we might get garbage.

---

<div class="slide-title">`optional`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
05_depend.cpp
#primary
'></code></pre>

NOTES:
We can also use `optional` when dealing with non-`DefaultConstructible` types!

For example, here's a function from a project of mine that retrieves a value from a future using `.then`.

The lambda passed to `.then` stores the value of the future (which is the argument of the lambda) in a variable in the outer scope (`r`) that is captured by reference.

If `r` wasn't an `optional`, this code would break for non-`DefaultConstructible` types.

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
Take a look at this `person` class.

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
We could add a boolean to keep track of whether or not the middle name is known.

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
But an `optional` is much cleaner! The null state is not decoupled from the
object.

---

<div class="slide-title">`optional`</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
31_library_optional
/
20_slice_optional_arguments.cpp
#primary
'></code></pre>

NOTES:
You can also use `optional` for optional function parameters.

The `value_or` method will return the value of the `optional` if it is not empty,
and otherwise will return the value passed to `value_or`.

NEXT: `variant`

