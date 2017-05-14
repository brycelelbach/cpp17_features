<div class="slide-title">Variable Templates for Metafunctions</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
41_variable_templates_for_metafunctions
/
00_sqrt.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Variable Templates for Metafunctions</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
41_variable_templates_for_metafunctions
/
00_sqrt.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
41_variable_templates_for_metafunctions
/
00_sqrt.cpp
#1
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Variable Templates for Metafunctions</div>

<span style="font-family: monospace; display: block;">`template <...>`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>
<span style="font-family: monospace; display: block;">`bool constexpr` *`trait`*`_v =` *`trait`*`<...>::value;`</span>

* `#include <type_traits>`
* Variable templates for metafunctions.
* Defined for all the type traits: `is_*`, etc.

NOTES:
 
