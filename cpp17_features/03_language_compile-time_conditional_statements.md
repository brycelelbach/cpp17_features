<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/00_print_interface.cpp#primary'></code></pre>

NOTES:
Before C++17, when processing variadic parameter packs, we'd often implement an interface like this...

... by writing a "base case" overload and a "recursive" overload...

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/01_print_cpp11_recursive_pack_expansion.cpp#primary'></code></pre>
</div>

<div class="right">
</div>

NOTES:
So, something like this.

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/01_print_cpp11_recursive_pack_expansion.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/02_print_cpp17_recursive_if_constexpr.cpp#primary'></code></pre>
</div>

NOTES:
In C++17, we can write this in just one overload using `if constexpr`.

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<div style="display: inline-block; text-align: left; font-family: monospace;">
<span style="display: block;">`if constexpr (`<i>`cond1`</i>`)`</span>
<span style="display: block;">&nbsp;&nbsp;<i>`statement1`</i>`;`</span>
<span style="display: block;">`else if constexpr (`<i>`cond2`</i>`)`</span>
<span style="display: block;">&nbsp;&nbsp;<i>`statement2`</i>`;`</span>
<span style="display: block;">`// ...`</span>
<span style="display: block;">`else`</span>
<span style="display: block;">&nbsp;&nbsp;<i>`statementN`</i>`;`
</div>

* Compile-time conditional statements.
* The condition must be a `constexpr` expression.
* Statements are discarded if their branch is not taken.
  * Discarded statements can use variables that are declared but not defined. 
  * Discarded statements in templates are not instantiated.

NOTES:
`if constexpr` - C++17's compile-time conditional statement.

{READ SLIDE FROM 2ND BULLET}

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/01_print_cpp11_recursive_pack_expansion.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/02_print_cpp17_recursive_if_constexpr.cpp#primary'></code></pre>
</div>

NOTES:
So when the `if constexpr` here is false, the recursive call is not instantiated and recursion stops.

<!--

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/10_make_unique_interface.cpp#primary'></code></pre>

-->

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/11_make_unique_cpp11_sfinae.cpp#primary'></code></pre>

NOTES:
`if constexpr` can be used to replace SFINAE in a number of cases.

Before C++17, if you were implementing `make_unique`, you would need to write two SFINAE'd versions:
* If `T` can be constructed from `Args` and you want to use a function-style cast.
* Otherwise, you want to do unicorn initialization.

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/12_make_unique_cpp17_if_constexpr.cpp#primary'></code></pre>

NOTES:
In C++17, you can do this without SFINAE.

---

<!--

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/20_advance_interface.cpp#primary'></code></pre>

-->

<div class="slide-title">Compile-Time Conditional Statements</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/21_advance_cpp11_tag_dispatching.cpp#primary'></code></pre>

NOTES:
We can also use `if constexpr` to replace tag dispatching - this is how you'd implement `advance` before C++17.

You instantiate the `iterator_category` in `advance` and then call `advance_impl` with the original arguments plus the `iterator_category`. Overload resolution picks the right implementation.

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/22_advance_cpp17_if_constexpr.cpp#primary'></code></pre>

NOTES:
And here's the C++17 implementation in one function, using `if constexpr` and `is_same_v`.

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/30_person.cpp#primary'></code></pre>

NOTES:
Let's say we have some `person` struct and we want to non-intrusively make it `Destructurable` by implementing a free `get` template function.

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/31_person_cpp11_get_fully_specialized.cpp#primary'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Before C++17, you might write an implementation like this that uses template specialization.

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/31_person_cpp11_get_fully_specialized.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/32_person_cpp17_get_if_constexpr.cpp#primary'></code></pre>
</div>

NOTES:
In C++17, we can write it like this.

No `static_assert` or SFINAE is needed for the out of bounds case.

If `I` is larger than 2, then a return type of void will be deduced. So if you try to destructure `person` into 4 components, you’ll get an error because you’re trying to instantiate a void.

NEXT: Fold Expressions (sum example).
 
