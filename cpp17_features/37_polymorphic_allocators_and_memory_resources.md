<div class="slide-title">Polymorphic Allocators and Memory Resources</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' style="font-size: 0.5em;" sample='cpp17_features/
37_polymorphic_allocators_and_memory_resources
/
00_vector_allocators.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
The old allocator model causes an explosion of instantations of allocator-aware
constructs.

---

<div class="slide-title">Polymorphic Allocators and Memory Resources</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' style="font-size: 0.5em;" sample='cpp17_features/
37_polymorphic_allocators_and_memory_resources
/
00_vector_allocators.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' style="font-size: 0.5em;" sample='cpp17_features/
37_polymorphic_allocators_and_memory_resources
/
00_vector_allocators.cpp
#1
'></code></pre>
</div>

NOTES:
A `polymorphic_allocator` type-erases a `memory_resource`.
There's are some standard `memory_resources` in addition to the `memory_resource`
adapter for the global allocator.
`unsynchronized_pool_resource` is a non-thread safe memory pool.

---

<div class="slide-title">Polymorphic Allocators and Memory Resources</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' style="font-size: 0.5em;" sample='cpp17_features/
37_polymorphic_allocators_and_memory_resources
/
00_vector_allocators.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' style="font-size: 0.5em;" sample='cpp17_features/
37_polymorphic_allocators_and_memory_resources
/
00_vector_allocators.cpp
#2
'></code></pre>
</div>

NOTES:

The `std::pmr` namespace has aliases for STL constructs that use
`std::pmr::polymorphic_allocator` instead of `std::allocator` by default.

---

<div class="slide-title">Polymorphic Allocators and Memory Resources</div>

* `#include <memory_resource>`
* `std::pmr::polymorphic_allocator` is a type-erasing allocator wrapping an object that implements the `std::pmr::memory_resource` interface.
* `std::pmr` allocator-aware STL aliases.
* Standard `std::pmr::memory_resource`s:
  * `std::pmr::new_delete_resource` - global `new`/`delete`.
  * `std::pmr::unsynchronized_pool_resource` - thread-unsafe pool.
  * `std::pmr::synchronized_pool_resource` - thread-safe pool.
  * `std::pmr::monotonic_buffer_resource` - memory is only released when the resource goes out of scope.

NOTES:

{READ FROM SLIDE}

