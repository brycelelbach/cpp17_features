<div class="slide-title">Improved Insertion and Splicing for Associative Containers</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
39_improved_insertion_and_splicing_for_associative_containers
/
00_person_map_improved_insertion.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:
`map`, `multimap`, `unordered_map` and `unordered_multimap` now have `try_emplace` and `insert_or_assign`.

---

<div class="slide-title">Improved Insertion and Splicing for Associative Containers</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
39_improved_insertion_and_splicing_for_associative_containers
/
00_person_map_improved_insertion.cpp
#1
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Improved Insertion and Splicing for Associative Containers</div>

<div class="left">
<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
39_improved_insertion_and_splicing_for_associative_containers
/
00_person_map_improved_insertion.cpp
#1
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
39_improved_insertion_and_splicing_for_associative_containers
/
00_person_map_improved_insertion.cpp
#2
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Improved Insertion and Splicing for Associative Containers</div>

<span style="display: block">__**Before**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
39_improved_insertion_and_splicing_for_associative_containers
/
10_person_map_merge.cpp
#0
'></code></pre>

NOTES:

Doesn't overwrite existing keys.

All the associative containers have `merge`.

`O(source.size()*log(size()+source.size())` for map/multimap/set/multiset.

Average `O(source.size())`, worst case `O(source.size()*size()+source().size())` for unordered containers.

---

<div class="slide-title">Improved Insertion and Splicing for Associative Containers</div>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
39_improved_insertion_and_splicing_for_associative_containers
/
20_move_and_rekey.cpp
#0
'></code></pre>

NOTES:

