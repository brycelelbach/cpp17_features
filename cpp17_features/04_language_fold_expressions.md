<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/00_sum_interface.cpp#primary'></code></pre>

NOTES:
Let's write a variadic function that sums up its arguments.

---

<div class="slide-title">Fold Expressions</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/01_sum_cpp14_recursive.cpp#primary'></code></pre>
</div>

<div class="right">
</div>

NOTES:
Again, before C++17, we needed to write a recursive overload and some base case overloads.

---

<div class="slide-title">Fold Expressions</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/01_sum_cpp14_recursive.cpp#primary'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/02_sum_cpp17_fold.cpp#primary'></code></pre>
</div>

NOTES:
In C++17, we can use a fold expression to simplify this.

---

<div class="slide-title">Fold Expressions</div>

<table style="font-size: 18px;">
<tr>
  <td>Unary Right Fold</td>
  <td style="font-family: monospace;">(E op ...)</td>
  <td style="font-family: monospace;">E<sub>1</sub> op (... op (E<sub>N-1</sub> op E<sub>N</sub>))</td>
</tr>
<tr>
  <td>Unary Left Fold</td>
  <td style="font-family: monospace;">(... op E)</td>
  <td style="font-family: monospace;">((E<sub>1</sub> op E<sub>2</sub>) op ...) op E<sub>N</sub></td>
</tr>
<tr>
  <td>Binary Right Fold</td>
  <td style="font-family: monospace;">(E op ... op I)</td>
  <td style="font-family: monospace;">E<sub>1</sub> op (... op (E<sub>N-1</sub> op (E<sub>N</sub> op I)))</td>
</tr>
<tr>
  <td>Binary Left Fold</td>
  <td style="font-family: monospace;">(I op ... op E)</td>
  <td style="font-family: monospace;">(((I op E<sub>1</sub>) op E<sub>2</sub>) op ...) op E<sub>N</sub></td>
</tr>
</table>

* Fold expressions apply binary operators to parameter packs.
* Parentheses around the fold expression are required.
* All binary operators are foldable:

<table style="font-size: 18px; font-family: monospace;">
<tr>
  <td>==&nbsp;</td>
  <td>!=&nbsp;</td>
  <td><&nbsp;&nbsp;</td>
  <td>>&nbsp;&nbsp;</td>
  <td><=&nbsp;</td>
  <td>>=&nbsp;</td>
  <td>&&&nbsp;</td>
  <td>||&nbsp;</td>
  <td>,&nbsp;&nbsp;</td>
  <td>.*&nbsp;</td>
  <td>->*</td>
  <td>=&nbsp;&nbsp;</td>
</tr>
<tr>
  <td>+&nbsp;&nbsp;</td>
  <td>-&nbsp;&nbsp;</td>
  <td>*&nbsp;&nbsp;</td>
  <td>/&nbsp;&nbsp;</td>
  <td>%&nbsp;&nbsp;</td>
  <td>^&nbsp;&nbsp;</td>
  <td>&&nbsp;&nbsp;</td>
  <td>|&nbsp;&nbsp;</td>
  <td><<&nbsp;</td>
  <td>>>&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
</tr>
<tr>
  <td>+=&nbsp;</td>
  <td>-=&nbsp;</td>
  <td>*=&nbsp;</td>
  <td>/=&nbsp;</td>
  <td>%=&nbsp;</td>
  <td>^=&nbsp;</td>
  <td>&=&nbsp;</td>
  <td>|=&nbsp;</td>
  <td><<=</td>
  <td>>>=</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
</tr>
</table>

NOTES:
{READ FIRST BULLET}

There are four types of fold expressions.

They in differ in the order of application and whether they take an explicit initial value.

{READ 2ND AND 3RD BULLETS}

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/03_sum_expansion4_cpp17_fold.cpp#primary'></code></pre>

NOTES:
`sum` uses a binary right fold over `+`. This means that:
* We've provided a sentinel (0).
* The operator is applied from right to left.

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/10_all_cpp17_fold.cpp #primary'></code></pre>

NOTES:
A boolean and function is a good example of a unary left fold. It folds over the
boolean and operator (&&).

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/11_all_expansion4_cpp17_fold.cpp #primary'></code></pre>

NOTES:
We want to apply from left to right for short circuiting.

---


<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/12_all_expansion0_cpp17_fold.cpp #primary'></code></pre>

NOTES:
But what happens if we call `all` with no arguments - we'd have an empty parameter pack.

We didn't provide an initial value, so what result do we get?

---

<div class="slide-title">Fold Expressions</div>

For unary folds, if the parameter pack is empty then the value of the fold is:

<table style="font-family: monospace;">
<tr><td>`&&`</td><td>`true`</td></tr>
<tr><td>`||`</td><td>`false`</td></tr>
<tr><td>`,`&nbsp;</td><td>`void()`</td></tr>
</table>

For any operator not listed above, an unary fold expression with an empty
parameter pack is ill-formed.

NOTES:

{READ SLIDE}

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/20_print_cpp17_fold.cpp #primary'></code></pre>

NOTES:
Here's another neat one - a variadic print function.

It's a binary left fold over the left shift operator (<<) with an initial value of `std::cout`.

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/30_for_each_arg_cpp17_fold.cpp #primary'></code></pre>

NOTES:
And this `for_each_arg` function uses an unary right fold over the comma
operator to apply a function to each argument.

