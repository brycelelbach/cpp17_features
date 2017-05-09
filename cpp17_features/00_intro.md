# C++17 Features 

<p style="font-size: 24px;">
**Bryce Adelstein Lelbach &lt;[bryce@cppnow.org](mailto:bryce@cppnow.org)&gt;**</small>
</p>

<i>
<p style="font-size: 18px;">
Also:
</p>

<p style="font-size: 18px;">
[Tony Van Eerd](https://github.com/tvaneerd/cpp17_in_TTs),
[JF Bastien](https://github.com/jfbastien/what-is-cpp17),
[Thomas K&ouml;ppe](https://isocpp.org/files/papers/p0636r0.html),
</p>

<p style="font-size: 18px;">
[Anthony Calandra](https://github.com/AnthonyCalandra/modern-cpp-features),
[Bartlomiej Filipek](http://www.bfilipek.com/2017/01/cpp17features.html),
[Steve Lorimer](https://skebanga.github.io),
</p>

<p style="font-size: 18px;">
[Arthur O'Dwyer](https://github.com/accuBayArea/Slides/blob/master/slides/2017-04-19.pdf),
[Jonas Devlieghere](https://jonasdevlieghere.com/guaranteed-copy-elision/),
Louis Dionne
</p>
</i>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Overview of C++17</div>

<div class="left">
__**Language Changes**__

<ul style="font-size: 18px;">
<li><b>Structured bindings</b></li>                    <!-- `auto [a, b, c] = S` -->
<li><b>Selection statements with initializers</b></li> <!-- `if`/`switch (`<i><code>init</code></i>`;` <i><code>cond</code></i>`)`) -->
<li><b>Compile-time conditional statments</b></li>     <!-- `if constexpr` -->
<li><b>Fold expressions</b></li>                       <!-- `(args + ...)` -->
<li><b>Class template deduction</b></li>               <!-- ??? -->
<li><b>`auto` non-type template parameters</b></li>    <!-- `template <auto N>` -->
<li><b>`inline` variables</b></li>                     <!-- ??? -->
<li><b>`constexpr` lambdas</b></li>                    <!-- ??? -->
<li>Lambda capture of `*this` by value</li>            <!-- ??? -->
<li>Unary `static_assert`</li>                         <!-- `static_assert(`<i><code>expr</code></i>`)` -->
<li>Guaranteed copy elision</li>                       <!-- ??? -->
<li>Nested namespace definitions</li>                  <!-- `namespace A::B::C {}` -->
<li>Preprocessor predicate for header testing</li>     <!-- <span class="hljs-override hljs-meta">__has_include</span> -->
<!-- <li>Attributes to control (some) warnings</li> -->        <!-- `[[fallthrough]]`, `[[nodiscard]]` and `[[maybe_unused]]` -->
<li>...</li>
</ul>
</div>

<div class="right">
__**Library Changes**__

<ul style="font-size: 18px;">
<li><b>`optional<>`</b></li>                                        <!-- ??? -->
<li><b>`variant<>`</b></li>                                         <!-- ??? -->
<li><b>`any`</b></li>                                               <!-- ??? -->
<li><b>`string_view`</b></li>                                       <!-- ??? -->
<li><b>Parallel algorithms</b></li>                                 <!-- ??? -->
<li>New algorithms: `search`, raw memory utilities, ...</li>        <!-- ??? -->
<li><b>Filesystem support</b></li>                                  <!-- ??? -->
<li><b>Polymorphic allocators and memory resources</b></li>         <!-- ??? -->
<li>Aligned `new`</li>                                              <!-- ??? -->
<li>Splicing and improved insertion for associative containers</li> <!-- ??? -->
<li><b>Math special functions</b></li>                              <!-- ??? -->
<!-- <li>`Callable` invocation facilities</li> -->                          <!-- `invoke`, `apply` and `is_callable<>` -->
<li>Variable templates for metafunctions</li>                       <!-- `*_v<>` -->
<li>Boolean logic metafunctions</li>                                <!-- `conjunction<>`, `disjunction<>` and `negation<>` -->
<li>...</li>
</ul>
</div>

NOTES:
This will only display in the notes window.

