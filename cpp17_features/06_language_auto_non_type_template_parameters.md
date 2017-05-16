<div class="slide-title">`auto` Non-Type Template Parameters</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/00_constant_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
</div>

NOTES:
`std::integral_constant` is one of our fundamental metaprogramming primitives;
we use it to express compile-time values.

---

<div class="slide-title">`auto` Non-Type Template Parameters</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/00_constant_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/01_constant_cpp17.cpp#primary'></code></pre>
</div>

NOTES:
In modern C++, we expect to be able to automatically deduce the types of values instead of writing them explicity. Now we can with `auto` non-type template parameters.

---

<div class="slide-title">`auto` Non-Type Template Parameters</div>

<span style="font-family: monospace;">`template <auto` <i><code>parameter</code></i>`, ...>;`</span>

* Also known as `template <auto>`
* Uses regular `auto` deduction rules (`auto const`, `auto&`, `auto&&`, etc).

NOTES:

{READ SLIDE}

---

<!--

<div class="slide-title">`auto` Non-Type Template Parameters</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/02_constant_ptr_cpp17.cpp#primary'></code></pre>

-->

<div class="slide-title">`auto` Non-Type Template Parameters</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/10_sequence_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/11_sequence_cpp17.cpp#primary'></code></pre>
</div>

NOTES:
`auto` non-type template parameters can be variadic!

An `auto` parameter pack can be heterogeneous - look at the `tup` use case.

---

<div class="slide-title">`auto` Non-Type Template Parameters</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/20_dimensions_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/21_dimensions_cpp17.cpp#primary'></code></pre>
</div>

NOTES:
This is one of my favorite features because it makes it simplifies my multi-dimensional array library.

Instead of using a "magic value" of -1 as a pseudo-tag type to indicate a runtime dimension, I can just use a proper tag-type!

TRANSITION: Speaking of tag types, C++17 addresses one of the huge pain points for C++ metaprogrammers...

