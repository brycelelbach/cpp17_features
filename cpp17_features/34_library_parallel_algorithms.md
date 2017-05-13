<div class="slide-title">Parallel Algorithms</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
00_parallel_for_each_before_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Parallel Algorithms</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
00_parallel_for_each_before_vs_cpp17.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
00_parallel_for_each_before_vs_cpp17.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Parallel Algorithms</div>

<div class="left">
<span style="display: block">__**Serial**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
10_sort_serial_vs_parallel.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Parallel Algorithms</div>

<div class="left">
<span style="display: block">__**Serial**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
10_sort_serial_vs_parallel.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**Parallel**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
10_sort_serial_vs_parallel.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Parallel Algorithms</div>

<span style="font-family: monospace; display: block;">`template <typename ExecutionPolicy, ...>`&nbsp;&nbsp;&nbsp;&nbsp;
<span style="font-family: monospace; display: block;">`auto`<i><code> algorithm</code></i>`(ExecutionPolicy&& exec, ...)`;</span>

* `#include <algorithm>`, `<numeric>` and `<execution>`.
* New parallel (e.g. `ExecutionPolicy`) overloads for most of the existing algorithms.
  * `InputIterator` requirements strengthened to `ForwardIterator`.
  * Complexity guarantees relaxed for some algorithms.
* New algorithms designed for parallel programming. 
  * `reduce`, `inclusive_scan` and `exclusive_scan`.
  * `transform_reduce`, `transform_inclusive_scan` and `transform_exclusive_scan`.

NOTES:

---

<span style="font-family: monospace; display: block;">`template <typename ExecutionPolicy, ...>`&nbsp;&nbsp;&nbsp;&nbsp;
<span style="font-family: monospace; display: block;">`auto`<i><code> algorithm</code></i>`(ExecutionPolicy&& exec, ...)`;</span>

* `ExecutionPolicy`: Describes the "how" of execution.
  * Is parallelism allowed?
  * What restrictions must be respected by the algorithm?
* `Executor` (planned C++20): Describes the "where" of execution.
  * On which abstract resource (thread pool, current thread, GPU, etc) should work be executed?
  * How should that work be queued?
* Execution policies:
  * `std::seq`: Serial.
  * `std::par`: Parallel (SIMT, ex: NVIDIA GPUs).
  * `std::par_unseq`: Parallel and unordered (SIMT and SIMD, ex: NVIDIA GPUs and Intel CPUs).

NOTES:
  
* `std::seq`: operations indeterminately sequenced in the calling thread.
* `std::par`: operations indeterminately sequenced with respect to each other within the same thread
* `std::par_unseq`: operations unsequenced with respect to each other and possibly interleaved.

---

<div class="left">
<span style="display: block">__**Serial**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
20_dot_product_serial_vs_parallel.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Parallel Algorithms</div>

<div class="left">
<span style="display: block">__**Serial**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
20_dot_product_serial_vs_parallel.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**Parallel**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
20_dot_product_serial_vs_parallel.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Parallel Algorithms</div>

<div class="left">
<span style="display: block">__**Serial**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
21_dot_product_non_ep_transform_reduce.cpp
#primary
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**Parallel**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
20_dot_product_serial_vs_parallel.cpp
#right
'></code></pre>
</div>

NOTES:

---

<div class="left">
<span style="display: block">__**Serial**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
30_norm_serial_vs_parallel.cpp
#left
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Parallel Algorithms</div>

<div class="left">
<span style="display: block">__**Serial**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
30_norm_serial_vs_parallel.cpp
#left
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**Parallel**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
34_library_parallel_algorithms
/
30_norm_serial_vs_parallel.cpp
#right
'></code></pre>
</div>

NOTES:


