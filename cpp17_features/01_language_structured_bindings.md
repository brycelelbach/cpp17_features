<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/00_cpp98_point3d_manual_value_semantics.cpp#primary'></code></pre>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/01_cpp98_point3d_manual_reference_semantics.cpp#primary'></code></pre>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/10_cpp11_std_tuple_std_tie_value_semantics.cpp#primary'></code></pre>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/11_cpp11_std_tuple_std_tie_repeated_name_bug.cpp#primary'></code></pre>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/12_cpp11_std_tuple_std_tie_reference_semantics.cpp#primary'></code></pre>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/13_cpp11_std_tuple_std_tie_const.cpp#primary'></code></pre>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Structured Bindings</div>

<pre><code class='sample' sample='cpp17_features/01_language_structured_bindings/20_cpp11_point3d_and_std_array_std_tie.cpp#primary'></code></pre>

NOTES:
This will only display in the notes window.

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
This will only display in the notes window.

