<div class="slide-title">Selection Statements with Initializers</div>


<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/00_find_and_update_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
</div>

NOTES:
We often end up introducing a variable right before an `if`, even though the variable will only be used in the `if`, because the `if` condition uses the variable.

---

<div class="slide-title">Selection Statements with Initializers</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/00_find_and_update_cpp11.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/01_find_and_update_cpp17.cpp#primary'></code></pre>
</div>

NOTES:
In C++17, `if` can have an initializer, just like `for` loops. 

---

<div class="slide-title">Selection Statements with Initializers</div>

<div class="left">
__**Syntax**__

<div style="text-align: left; font-family: monospace;">
<span style="display: block;">&nbsp;</span>
<span style="display: block;">&nbsp;</span>
<span style="display: block;">`if (`<i>`init`</i>`;` <i>`cond`</i>`)`</span>
<span style="display: block;">&nbsp;&nbsp;<i>`statement1`</i>`;`</span>
<span style="display: block;">`else`</span>
<span style="display: block;">&nbsp;&nbsp;<i>`statement2`</i>`;`</span>
<span style="display: block;">&nbsp;</span>
</div>
</div>

<div class="right">
__**Equivalent To**__

<div style="text-align: left; font-family: monospace;">
<span style="display: block;">`{`</span>
<span style="display: block;">&nbsp;&nbsp;<i>`init`</i>;</span>
<span style="display: block;">&nbsp;&nbsp;`if (`<i>`cond`</i>`)`</span>
<span style="display: block;">&nbsp;&nbsp;&nbsp;&nbsp;<i>`statement1`</i>`;`</span>
<span style="display: block;">&nbsp;&nbsp;`else`</span>
<span style="display: block;">&nbsp;&nbsp;&nbsp;&nbsp;<i>`statement2`</i>`;`</span>
<span style="display: block;">`}`</span>
</div>
</div>

NOTES:
This new syntax on the left here is equivalent to the syntax on the right.

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/10_scoping_cpp17.cpp#primary'></code></pre>

NOTES:
The variables in the initializer are in scope 
for all possible branches following the initializer.

In this example, `x` is in scope in all three cases, but `y` is only in scope in the last two.

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/20_string_pool_interface.cpp#primary'></code></pre>

NOTES:
This feature is very useful when we're dealing with locks.

Suppose we're implementing the `pop` method for a thread-safe `string_pool` class.

---

<span style="display: block">__**Before**__</span>

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/21_string_pool_cpp11_over_locking.cpp#primary'></code></pre>

NOTES:
`pop` will return an item in the freelist if one is available; otherwise, it creates a new object.

Unfortunately, it's easy to mess up the scoping here. We obtain the lock before the `if` to protect the `pool_.empty` call, but we hold it for too long. We'll hold the lock while we reserve storage.

---

<span style="display: block">__**Before**__</span>

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/22_string_pool_cpp11.cpp#primary'></code></pre>

NOTES:
Before, we had to introduce a new scope to avoid this.

I don't need more braces in my life!

---

<span style="display: block">__**C++17**__</span>

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/23_string_pool_cpp17.cpp#primary'></code></pre>

NOTES:
In C++17, this is much more elegant!

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/30_emplace_or_throw_cpp17.cpp#primary'></code></pre>

NOTES:
This feature combines really well with structured bindings.

Just like the `for` example I showed before, this simplifies dealing with maps.

---

<div class="slide-title">Selection Statements with Initializers</div>

<div class="left">
__**Syntax**__

<div style="text-align: left; font-family: monospace;">
<span style="display: block;">&nbsp;</span>
<span style="display: block;">&nbsp;</span>
<span style="display: block;">`switch (`<i>`init`</i>`;` <i>`cond`</i>`)`</span>
<span style="display: block;">`{`</span>
<span style="display: block;">&nbsp;&nbsp;`case a:` <i>`statement1`</i>`;`</span>
<span style="display: block;">&nbsp;&nbsp;`case b:` <i>`statement2`</i>`;`</span>
<span style="display: block;">&nbsp;&nbsp;`// ...`</span>
<span style="display: block;">`}`</span>
<span style="display: block;">&nbsp;</span>
</div>
</div>

<div class="right">
__**Equivalent To**__

<div style="text-align: left; font-family: monospace;">
<span style="display: block;">`{`</span>
<span style="display: block;">&nbsp;&nbsp;<i>`init`</i>`;`</span>
<span style="display: block;">&nbsp;&nbsp;`switch (`<i>`cond`</i>`)`</span>
<span style="display: block;">&nbsp;&nbsp;`{`</span>
<span style="display: block;">&nbsp;&nbsp;&nbsp;&nbsp;`case a:` <i>`statement1`</i>`;`</span>
<span style="display: block;">&nbsp;&nbsp;&nbsp;&nbsp;`case b:` <i>`statement2`</i>`;`</span>
<span style="display: block;">&nbsp;&nbsp;&nbsp;&nbsp;`// ...`</span>
<span style="display: block;">&nbsp;&nbsp;`}`</span>
<span style="display: block;">`}`</span>
</div>
</div>

NOTES:
`switch` can also now take an initializer.

TRANSITION: Next, we're going to talk about another C++17 extension to `if`.

<!--

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/40_device_interface.cpp#primary'></code></pre>

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/41_device_cpp11.cpp#primary'></code></pre>

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/42_device_cpp17.cpp#primary'></code></pre>

-->

