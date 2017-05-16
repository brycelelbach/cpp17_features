<div class="slide-title">Overview of C++17</div>

<div class="left">
__**Language Changes**__

<ul style="font-size: 18px;">
<li><u>Structured bindings</u></li>                    <!-- `auto [a, b, c] = S` -->
<li><u>Selection statements with initializers</u></li> <!-- `if`/`switch (`<i><code>init</code></i>`;` <i><code>cond</code></i>`)`) -->
<li><u>Compile-time conditional statments</u></li>     <!-- `if constexpr` -->
<li><u>Fold expressions</u></li>                       <!-- `(args + ...)` -->
<li><u>Class template deduction</u></li>               <!-- ` -->
<li><u><code style="font-size: 16px;">auto</code> non-type template parameters</u></li>    <!-- `template <auto N>` -->
<li><u><code style="font-size: 16px;">inline</code> variables</u></li>                     <!-- ??? -->
<li><u><code style="font-size: 16px;">constexpr</code> lambdas</u></li>                    <!-- ??? -->
<!-- <li>Lambda capture of `*this` by value</li> -->            <!-- ??? -->
<li>Unary <code style="font-size: 16px;">static_assert</code></li>                         <!-- `static_assert(`<i><code>expr</code></i>`)` -->
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
<li><u><code style="font-size: 16px;">string_view</code></u></li>                                       <!-- ??? -->
<li><u><code style="font-size: 16px;">optional</code></u></li>                                          <!-- ??? -->
<li><u><code style="font-size: 16px;">variant</code></u></li>                                           <!-- ??? -->
<li><u><code style="font-size: 16px;">any</code></u></li>                                               <!-- ??? -->
<li><u>Parallel algorithms</u></li>                                 <!-- ??? -->
<!-- <li>New algorithms</li> -->                                            <!-- `search`, `sample`, `clamp`  -->
<li><u>Filesystem support</u></li>                                  <!-- ??? -->
<li><u>Polymorphic allocators and memory resources</u></li>         <!-- ??? -->
<li>Aligned <code style="font-size: 16px;">new</code></li>                                              <!-- ??? -->
<li>Improved insertion and splicing for associative containers</li> <!-- ??? -->
<li>Math special functions</li>                                     <!-- ??? -->
<!-- <li>`Callable` invocation facilities</li> -->                          <!-- `invoke`, `apply` and `is_callable<>` -->
<li>Variable templates for metafunctions</li>                       <!-- `*_v<>` -->
<li>Boolean logic metafunctions</li>                                <!-- `conjunction<>`, `disjunction<>` and `negation<>` -->
<li>...</li>
</ul>
</div>
