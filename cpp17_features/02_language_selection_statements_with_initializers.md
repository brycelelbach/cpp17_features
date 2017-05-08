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
[Steve Lorimer](https://skebanga.github.io/structured-bindings/),
</p>

<p style="font-size: 18px;">
[Arthur O'Dwyer](https://github.com/accuBayArea/Slides/blob/master/slides/2017-04-19.pdf)
</p>
</i>

NOTES:
This will only display in the notes window.

---

<div class="slide-title">Overview of C++17</div>

<div class='left'>
__**Major Language Changes**__

<ul style='font-size: 18px;'>
<li>Structured bindings</li>                         <!-- `auto [a, b, c] = S` -->
<li>Selection statements with initializers</li>      <!-- `if`/`switch (`<i><code>init</code></i>`;` <i><code>cond</code></i>`)`) -->
<li>Compile-time conditional statments</li>          <!-- `if constexpr` -->
<li>Folding expressions</li>                         <!-- `(args + ...)` -->
<li>Non-type template parameter deduction</li>       <!-- `template <auto N>` -->
<li>Unary `static_assert`</li>                       <!-- `static_assert(`<i><code>expr</code></i>`)` -->
<li>Deduction guides</li>                            <!-- ??? -->
<li>Guaranteed copy elision</li>                     <!-- ??? -->
<li>`constexpr` lambdas</li>                         <!-- ??? -->
<li>Lambda capture of `*this` by value</li>          <!-- ??? -->
<li>`inline` variables</li>                          <!-- ??? -->
<li>Nested namespace definitions</li>                <!-- `namespace A::B::C {}` -->
<li>Preprocessor predicate for header existence</li> <!-- <span class="hljs-override hljs-meta">__has_include</span> -->
<li>Attributes to control some warnings</li>         <!-- `[[fallthrough]]`, `[[nodiscard]]` and `[[maybe_unused]]` -->
</ul>
</div>

<div class='right'>
__**Major Library Changes**__

<ul style='font-size: 18px;'>
<li>Filesystem support</li>                                         <!-- ??? -->
<li>Parallel algorithms</li>                                        <!-- ??? -->
<li>`clamp`, `sample` and `search`</li>                             <!-- ??? -->
<li>`string_view`</li>                                              <!-- ??? -->
<li>`optional<>`</li>                                               <!-- ??? -->
<li>`variant<>`</li>                                                <!-- ??? -->
<li>`any`</li>                                                      <!-- ??? -->
<li>Splicing and improved insertion for associative containers</li> <!-- ??? -->
<li>Polymorphic allocators and memory resources</li>                <!-- ??? -->
<li>Aligned `new`</li>                                              <!-- ??? -->
<li>Math special functions</li>                                     <!-- ??? -->
<li>`Callable` invocation facilities</li>                           <!-- `invoke`, `apply` and `is_callable<>` -->
<li>Variable templates for metafunctions</li>                       <!-- `*_v<>` -->
<li>Boolean logic metafunctions</li>                                <!-- `conjunction<>`, `disjunction<>` and `negation<>` -->
</ul>
</div>

NOTES:
This will only display in the notes window.

