<div class="slide-title">`constexpr` Lambdas</div>

<div class="left">
<span style="display: block">__**C++11**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
08_language_constexpr_lambdas
/
00_add_cpp11_vs_cpp17_constexpr_lambda_call_operator.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">`constexpr` Lambdas</div>

<div class="left">
<span style="display: block">__**C++11**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
08_language_constexpr_lambdas
/
00_add_cpp11_vs_cpp17_constexpr_lambda_call_operator.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
08_language_constexpr_lambdas
/
00_add_cpp11_vs_cpp17_constexpr_lambda_call_operator.cpp
#right
'></code></pre>
</div>

NOTES:
This is a lambda with a `constexpr` call operator, not a `constexpr` lambda.

---

<div class="slide-title">`constexpr` Lambdas</div>

<div class="left">
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
08_language_constexpr_lambdas
/
01_add_cpp17_implicit_constexpr_lambda_call_operator.cpp
#primary
'></code></pre>
</div>

NOTES:
The `constexpr` is optional; if it is omitted and the lambda would meet the requirements of `constexpr`, it can be evaluated in a `constexpr` context.

---

<div class="slide-title">`constexpr` Lambdas</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
08_language_constexpr_lambdas
/
10_tuple_storage_cpp17.cpp
#primary
'></code></pre>

NOTES:

