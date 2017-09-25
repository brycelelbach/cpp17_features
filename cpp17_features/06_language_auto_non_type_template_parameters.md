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

* Also known as `template <auto>`.
* Uses regular `auto` deduction rules (`auto const`, `auto&`, `auto&&`, etc).

NOTES:

{READ SLIDE}

---

<div class="slide-title">`auto` Non-Type Template Parameters</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/10_sequence_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Previously, non-type parameter packs had to be homogeneous...

---

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
... but `auto` non-type template parameters can be variadic!

An `auto` parameter pack can be heterogeneous - look at the `tup` use case.

---

<div class="slide-title">`auto` Non-Type Template Parameters</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/06_language_auto_non_type_template_parameters/20_dimensions_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Some of you may be familiar with `span`, from the GSL - it's also being proposed for standardization.

It's a non-owning view of of a contiguous sequence of objects; e.g. a pointer plus a size. 

The number of elements in the sequence can either be provided:
* At compile time as a template parameter, or
* At runtime as a constructor argument, by using `dyn` as a template parameter.

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
In C++17, instead of using a "magic value" of -1 as a pseudo-tag type to indicate a runtime dimension, I can just use a proper tag-type!

`decltype` can be used to distinguish the tag-type from a `std::size_t` literal.

TRANSITION: Speaking of tag types, C++17 addresses one of the huge pain points for C++ metaprogrammers...

