<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/00_find_and_update_cpp11.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/01_find_and_update_cpp17.cpp#primary'></code></pre>

NOTES:

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

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/10_scoping_cpp17.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/20_string_pool_interface.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/21_string_pool_cpp11.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/22_string_pool_cpp11_over_locking.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/23_string_pool_cpp17.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/30_emplace_or_throw_cpp17.cpp#primary'></code></pre>

NOTES:

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

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/40_device_interface.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/41_device_cpp11.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Selection Statements with Initializers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/02_language_selection_statements_with_initializers/42_device_cpp17.cpp#primary'></code></pre>

NOTES:

