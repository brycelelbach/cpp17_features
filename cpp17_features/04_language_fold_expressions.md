<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/00_sample_interface.cpp#primary'></code></pre>

NOTES:

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/01_sample_cpp14_recursive.cpp#primary'></code></pre>

NOTES:

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

All binary operators are foldable:

<table style="font-size: 18px; font-family: monospace;">
<tr>
  <td>`==`&nbsp;</td>
  <td>`!=`&nbsp;</td>
  <td>`<`&nbsp;&nbsp;</td>
  <td>`>`&nbsp;&nbsp;</td>
  <td>`<=`&nbsp;</td>
  <td>`>=`&nbsp;</td>
  <td>`&&`&nbsp;</td>
  <td>`||`&nbsp;</td>
  <td>`,`&nbsp;&nbsp;</td>
  <td>`.*`&nbsp;</td>
  <td>`->*`</td>
  <td>`=`&nbsp;&nbsp;</td>
</tr>
<tr>
  <td>`+`&nbsp;&nbsp;</td>
  <td>`-`&nbsp;&nbsp;</td>
  <td>`*`&nbsp;&nbsp;</td>
  <td>`/`&nbsp;&nbsp;</td>
  <td>`%`&nbsp;&nbsp;</td>
  <td>`^`&nbsp;&nbsp;</td>
  <td>`&`&nbsp;&nbsp;</td>
  <td>`|`&nbsp;&nbsp;</td>
  <td>`<<`&nbsp;</td>
  <td>`>>`&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
</tr>
<tr>
  <td>`+=`&nbsp;</td>
  <td>`-=`&nbsp;</td>
  <td>`*=`&nbsp;</td>
  <td>`/=`&nbsp;</td>
  <td>`%=`&nbsp;</td>
  <td>`^=`&nbsp;</td>
  <td>`&=`&nbsp;</td>
  <td>`|=`&nbsp;</td>
  <td>`<<=`</td>
  <td>`>>=`</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
</tr>
</table>

NOTES:

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/03_sample_expansion4_cpp17_fold.cpp#primary'></code></pre>

NOTES:
Binary right fold.

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/10_all_cpp17_fold.cpp #primary'></code></pre>

NOTES:
Unary left fold.

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/11_all_expansion4_cpp17_fold.cpp #primary'></code></pre>

NOTES:

---


<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/12_all_expansion0_cpp17_fold.cpp #primary'></code></pre>

NOTES:

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

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/20_print_cpp17_fold.cpp #primary'></code></pre>

NOTES:
Binary left fold.

---

<div class="slide-title">Fold Expressions</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/04_language_fold_expressions/30_for_each_arg_cpp17_fold.cpp #primary'></code></pre>

NOTES:
Unary right fold over the comma operator.

