<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
00_tuple.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
00_tuple.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
00_tuple.cpp
#1
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
01_tuple_new.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
01_tuple_new.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
01_tuple_new.cpp
#1
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
10_greater.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
10_greater.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
10_greater.cpp
#1
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
30_lock_guard.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
30_lock_guard.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
30_lock_guard.cpp
#1
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

* Class template parameters can be deduced in:
  * Declarations.
  * `new` expressions.
  * Function-style cast expressions.
* Only performed if no template arguments are provided.
  * `std::tuple<int> t(0, 1)` is not allowed. 

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

* User-defined deduction guides can be used to control how deduction occurs. 
* They do not have to be templates.
* They must be within the same scope (e.g. namespace, enclosing class) as the class template.
* Explicit deduction guides: guides to `explicit` constructors or guides declared `explicit`.
    * Ignored in copy-initialization contexts (`T t = ...`).

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
40_vector.cpp
#0
'></code></pre>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
50_name.cpp
#0
'></code></pre>

NOTES:

---

<div class="slide-title">Class Template Deduction</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_deduction
/
60_overloaded.cpp
#0
'></code></pre>

NOTES:
REVIEW: Consider cutting.

Class template deduction of aggregates usually requires deduction guides.

