<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/00_cpp98_point3d_manual_value_semantics.cpp#primary'></code></pre>

NOTES:
Let's start off with the destructuring problem. 

How do we assign convenient names to the components of an object?

For example, suppose we have a `point_3d` that we want to destructure into its three components `x`, `y` and `z`. 

---

<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/01_cpp98_point3d_manual_reference_semantics.cpp#primary'></code></pre>

NOTES:
We may want those names to have reference semantics instead of value semantics.

---

<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/10_cpp11_std_tuple_std_tie_value_semantics.cpp#primary'></code></pre>

NOTES:
Before C++17, the only way to do destructuring is with `std::tie`.

There are a number of problems with this, because the variables names need to be separately declared before they are bound.

---

<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/11_cpp11_std_tuple_std_tie_repeated_name_bug.cpp#primary'></code></pre>

NOTES:
If the variables are PODs, they may be uninitialized.

Note the bug in the `std::tie` call here - we've passed `y` twice!
We'll get no error for this, and `x` will be left uninitialized.

---

<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/12_cpp11_std_tuple_std_tie_reference_semantics.cpp#primary'></code></pre>

NOTES:
`std::tie` doesn't work if we need reference semantics.

---

<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/13_cpp11_std_tuple_std_tie_const.cpp#primary'></code></pre>

NOTES:
`std::tie` doesn't let us bind into const variables.

More generally, this pattern won't work with any types that aren't `DefaultConstructible`.

Also, the initialization is redundant. This can be bad for types where redundant initialization may be expensive.

---

<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/20_cpp11_point3d_and_std_array_std_tie.cpp#primary'></code></pre>

NOTES:
`std::tie` only works with `std::tuple`.

What if we want to destructure a `std::array` or some struct?

---

<div class="slide-title">Structured Bindings</div>

<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/30_cpp17_point3d_std_array_and_std_tuple_structured_bindings_value_semantics.cpp#primary'></code></pre>

NOTES:
C++17 has structured bindings, a language feature that solves this problem.

---

<div class="slide-title">Structured Bindings</div>

`auto [`<i><code>a, b, ...</code></i>`] = obj;`

The type of `obj` must be `Destructurable`:
* Either all non-static data members:
  * Must be public.
  * Must be direct members of the type or members of the same public base class of the type.
  * Cannot be anonymous unions.
* Or the type has:
  * An `obj.get<>` method or an ADL-able `get<>` overload.
  * Specializations of `std::tuple_size<>` and `std::tuple_element<>`.

NOTES:
<!-- In C++17, we have a language solution for this problem called structured bindings. -->

Structured bindings let you destructure an object into its components.

There are some restrictions on the type of objects that can be implicitly destructured, but you can always implement customization points to enable structured bindings.

---

<div class="slide-title">Structured Bindings</div>

`auto [`<i><code>a, b, ...</code></i>`] = obj;`

* `Destructurable` types in the standard library:
  * `std::array`
  * `std::tuple`
  * `std::pair`
* Uses regular `auto` deduction rules (`auto const`, `auto&`, `auto&&`, etc).

NOTES:
`std::array`, `std::tuple` and `std::pair` are all `Destructurable`.

`auto` can be constrained as usual. You can bind by value or reference, and you can make the bindings `const`.

<!--

<div class="slide-title">Structured Bindings</div>

<table style="font-size: 18px;">
<tr><td>`T a; std::tie(a) = obj`</td><td>`a` is a copy of `obj`'s first component.</td></tr>
<tr style="height: 24px;"></tr>
<tr><td style="font-family: monospace;">`auto`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`[a] = obj`</td><td>`a` is a copy of `obj`'s first component.</td></tr>
<tr><td style="font-family: monospace;">`auto`&nbsp;`const`&nbsp;&nbsp;&nbsp;`[a] = obj`</td><td>`a` is a const copy of `obj`'s first component.</td></tr>
<tr><td style="font-family: monospace;">`auto`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`&`&nbsp;&nbsp;`[a] = obj`</td><td>`a` is a reference to `obj`'s first component.</td></tr>
<tr><td style="font-family: monospace;">`auto`&nbsp;`const&`&nbsp;&nbsp;`[a] = obj`</td><td>`a` is a const reference to `obj`'s first component.</td></tr>
<tr><td style="font-family: monospace;">`auto`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`&&`&nbsp;`[a] = obj`</td><td>`a` is a forwarding reference to `obj`'s first component.</td></tr>
</table>

-->

---

<!--

<div class="slide-title">Structured Bindings</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/31_cpp17_point3d_structured_bindings_reference_semantics.cpp#primary'></code></pre>

<div class="slide-title">Structured Bindings</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/32_cpp17_point3d_structured_bindings_const.cpp#primary'></code></pre>

-->

<div class="slide-title">Structured Bindings</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/01_language_structured_bindings/40_cpp17_std_map_iteration_with_structured_bindings.cpp#primary'></code></pre>

NOTES:
One particularly useful place for structured bindings - iterating over maps without having to deal with `std::pair`!

TRANSITION: That brings us to our next C++17 feature - selection statements with initializers.

