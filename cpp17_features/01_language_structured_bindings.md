<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/00_cpp98_point3d_manual_value_semantics.cpp#primary'></code></pre>

NOTES:
The destructuring problem: how do we assign convenient names to the components of an object?

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/01_cpp98_point3d_manual_reference_semantics.cpp#primary'></code></pre>

NOTES:
We may want those names to have reference semantics instead of value semantics, too!

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/10_cpp11_std_tuple_std_tie_value_semantics.cpp#primary'></code></pre>

NOTES:
Before C++17, the only way to do destructuring is with `std::tie`.

Problems with this include:
The variables need to be separately declared before they are `std::tie`'d.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/11_cpp11_std_tuple_std_tie_repeated_name_bug.cpp#primary'></code></pre>

NOTES:
More problems:
If the variables are PODs, they may be uninitialized.

Note the bug in the `std::tie` call here - we've passed `y` twice!
We'll get no error for this, and `x` will be left uninitialized.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/12_cpp11_std_tuple_std_tie_reference_semantics.cpp#primary'></code></pre>

NOTES:
More problems:
`std::tie` doesn't work if we need reference semantics.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/13_cpp11_std_tuple_std_tie_const.cpp#primary'></code></pre>

NOTES:
More problems:
`std::tie` doesn't let us bind into const variables.
This pattern won't work with any types that aren't `DefaultConstructible`.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/20_cpp11_point3d_and_std_array_std_tie.cpp#primary'></code></pre>

NOTES:
More problems:
`std::tie` only works with `std::tuple`. What if we want to destructure a `std::array` or some struct.
If we have non-PODs or initialized PODs, the initialization is redundant. Consider types were redundant initialization may be expensive.

---

<div class="slide-title">Structured Bindings</div>

`auto [`<i><code>a, b, ...</code></i>`] = obj`;

The type of `obj` must be `Destructurable`:
* Either all non-static data members:
  * Must be public.
  * Must be direct members of the type or members of the same public base class of the type.
  * Cannot be anonymous unions.
* Or the type has:
  * An `obj.get<>` method or an ADL-able `get<>` overload.
  * Specializations of `std::tuple_size<>` and `std::tuple_element<>`.

NOTES:

---

<div class="slide-title">Structured Bindings</div>

`auto [`<i><code>a, b, ...</code></i>`] = obj`;

`Destructurable` types in the standard library:
* `std::array<>`
* `std::tuple<>`
* `std::pair<>`

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Structured Bindings</div>

<table>
<tr><td>`T a; std::tie(a) = obj`</td><td>`a` is a copy of `obj`'s first component.</td></tr>
</table>

<table>
<tr><td>`auto         [a] = obj`</td><td>`a` is a copy of `obj`'s first component.</td></tr>
<tr><td>`auto const   [a] = obj`</td><td>`a` is a const copy of `obj`'s first component.</td></tr>
<tr><td>`auto      &  [a] = obj`</td><td>`a` is a reference to `obj`'s first component.</td></tr>
<tr><td>`auto const&  [a] = obj`</td><td>`a` is a const reference to `obj`'s first component.</td></tr>
<tr><td>`auto      && [a] = obj`</td><td>`a` is a forwarding reference to `obj`'s first component.</td></tr>
</table>

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/30_cpp17_point3d_std_array_and_std_tuple_structured_bindings_value_semantics.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/31_cpp17_point3d_structured_bindings_reference_semantics.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/32_cpp17_point3d_structured_bindings_const.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/40_cpp17_std_map_iteration_with_structured_bindings.cpp#primary'></code></pre>

NOTES:

