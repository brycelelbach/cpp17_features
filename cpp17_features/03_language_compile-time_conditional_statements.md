<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/00_print_interface.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/01_print_cpp11_recursive_pack_expansion.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/02_print_cpp17_recursive_if_constexpr.cpp#primary'></code></pre>

NOTES:

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

Statements are discarded if their branch is not taken.
* Discarded statements can use variables that are declared but not defined. 
* Discarded statements in templates are not instantiated.

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/10_make_unique_interface.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/11_make_unique_cpp11_sfinae.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/12_make_unique_cpp17_if_constexpr.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/20_advance_cpp11_tag_dispatching.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/21_advance_interface.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/22_advance_cpp17_if_constexpr.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/30_person.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/31_person_cpp11_get_fully_specialized.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Compile-Time Conditional Statements</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/03_language_compile-time_conditional_statements/32_person_cpp17_get_if_constexpr.cpp#primary'></code></pre>

NOTES:
No `static_assert` or SFINAE is needed - if `I` is larger than 2, then a return type of void will be deduced. So if you try to destructure `person` into 4 components, you’ll get an error because you’re trying to instantiate a void.

