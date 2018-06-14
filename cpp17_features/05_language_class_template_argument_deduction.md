<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
00_tuple.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Before C++17, we had function template deduction to simplify usage of function
templates by allowing programmers to omit explicit template parameters when
they can be deduced from the function's arguments.

However, no such deduction has existed for class templates. Until now!

---

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
00_tuple.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
00_tuple.cpp
#1
'></code></pre>
</div>

NOTES:
In C++17, class template arguments can be deduced.

They can be deduced in declarations and function-style casts, as shown here.

<!--

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
01_tuple_new.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

-->

---

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
01_tuple_new.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
01_tuple_new.cpp
#1
'></code></pre>
</div>

NOTES:
Class template parameters can also be deduced in `new` expressions.

---

<!--

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
10_greater.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
10_greater.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
10_greater.cpp
#1
'></code></pre>
</div>

-->

<!--

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
30_lock_guard.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

-->

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
30_lock_guard.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
30_lock_guard.cpp
#1
'></code></pre>
</div>

NOTES:
Class template deduction simplifies a lot of common patterns from modern C++, such
as Resource Acquisition is Initialization (RAII).

---

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

* Class template parameters can now be deduced in:
  * Declarations.
  * Function-style cast expressions.
  * `new` expressions.
* Only performed if no template arguments are provided.
  * `std::tuple<int> t(0, 1)` is not allowed. 

NOTES:

{READ 2ND BULLET}

---

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<!--
<span style="font-family: monospace;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*`template_name`* `(`*`param0`*`, ...) ->` *`template_name`*`<...>;`</span>
<span style="font-family: monospace;">`explicit` *`template_name`* `(`*`param0`*`, ...) ->` *`template_name`*`<...>;`</span>
-->

<span style="font-family: monospace;">*`template_name`* `(`*`param0`*`, ...) ->` *`template_name`*`<...>;`</span>

* User-defined deduction guides can be used to control how class template deduction operates. 
* They do not have to be templates.
* They must be within the same scope (e.g. namespace, enclosing class) as the class template.

<!--
* Explicit deduction guides: guides to `explicit` constructors or guides declared `explicit`.
    * Ignored in copy-initialization contexts (`T t = ...`).
-->

NOTES:

Class template deduction doesn't always work as you may wish, so we added a
facility to control how it operates: user-defined deduction guides.

{READ STARTING AT 2ND BULLET}

Let me show you an example.

---

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
40_vector.cpp
#0
'></code></pre>

NOTES:
`vector` needs a user-defined deduction guide to allow deduction from its iterator
range constructor. The compiler needs to know how to extract the `vector`'s value
type from the iterator arguments.

---

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
50_name.cpp
#0
'></code></pre>

NOTES:
As I mentioned, user-defined deduction guides do not have to be templates.

Here, I've written a deduction guide for my `name` class, indicating that C-style
`const` strings should deduce to C++17 `string_view`s.

NEXT: `auto` Non-Type Template Parameters.

<!--

<div class="slide-title">Class Template Argument Deduction (CTAD)</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
05_language_class_template_argument_deduction
/
60_overloaded.cpp
#0
'></code></pre>

-->

