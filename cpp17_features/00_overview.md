<div class="slide-title">Overview of C++17</div>

<div class="left">
__**Language Changes**__

<ul style="font-size: 18px;">
<li>Structured bindings</li>                                                                     <!-- `auto [a, b, c] = S` -->
<li>Selection statements with initializers</li>                                                  <!-- `if`/`switch (`<i><code>init</code></i>`;` <i><code>cond</code></i>`)`) -->
<li>Compile-time conditional statments</li>                                                      <!-- `if constexpr` -->
<li>Fold expressions</li>                                                                        <!-- `(args + ...)` -->
<li>Class template argument deduction (CTAD)</li>                                                     <!-- ??? -->
<li><code style="font-size: 16px;">auto</code> non-type template parameters</li>                 <!-- `template <auto N>` -->
<li><code style="font-size: 16px;">inline</code> variables</li>                                  <!-- ??? -->
<li><code style="font-size: 16px;">constexpr</code> lambdas</li>                                 <!-- ??? -->
<!-- <li>Lambda capture of `*this` by value</li>                                                      <!-- ??? -->
<!-- <li>Unary <code style="font-size: 16px;">static_assert</code></li>                               <!-- `static_assert(`<i><code>expr</code></i>`)` -->
<li>Guaranteed copy elision</li>                                                                 <!-- ??? -->
<li>Nested namespace definitions</li>                                                            <!-- `namespace A::B::C {}` -->
<!-- <li>Preprocessor predicate for header testing</li>                                               <!-- <span class="hljs-override hljs-meta">__has_include</span> -->
<!-- <li>Attributes to control (some) warnings</li>                                                   <!-- `[[fallthrough]]`, `[[nodiscard]]` and `[[maybe_unused]]` -->
<li>...</li>
</ul>
</div>

<div class="right">
__**Library Changes**__

<ul style="font-size: 18px;">
<li><code style="font-size: 16px;">string_view</code></li>                                       <!-- ??? -->
<li><code style="font-size: 16px;">optional</code></li>                                          <!-- ??? -->
<li><code style="font-size: 16px;">variant</code></li>                                           <!-- ??? -->
<li><code style="font-size: 16px;">any</code></li>                                               <!-- ??? --> 
<li>Parallel algorithms</li>                                                                     <!-- ??? -->
<li>New algorithms</li>                                                                          <!-- `search`, `sample`, `clamp`  -->
<li>Filesystem support</li>                                                                      <!-- ??? -->
<!-- <li>Polymorphic allocators and memory resources</li>                                             <!-- ??? --> 
<!-- <li>Aligned <code style="font-size: 16px;">new</code></li>                                       <!-- ??? -->
<li>Improved insertion and splicing for associative containers</li>                              <!-- ??? -->
<!-- <li>Math special functions</li>                                                                  <!-- ??? -->
<!-- <li>`Callable` invocation facilities</li>                                                        <!-- `invoke`, `apply` and `is_callable<>` -->
<li>Variable templates for metafunctions</li>                                                    <!-- `*_v<>` -->
<li>Boolean logic metafunctions</li>                                                             <!-- `conjunction<>`, `disjunction<>` and `negation<>` -->
<li>...</li>
</ul>
</div>
