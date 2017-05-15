<div class="slide-title">Filesystem Support</div>

<div class="left">
<span style="display: block">__**Before (Windows)**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
36_library_filesystem_support
/
00_copy_file_and_directory.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Filesystem Support</div>

<div class="left">
<span style="display: block">__**Before (Windows)**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
36_library_filesystem_support
/
00_copy_file_and_directory.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
36_library_filesystem_support
/
00_copy_file_and_directory.cpp
#1
'></code></pre>
</div>

NOTES:

---

<div class="slide-title">Filesystem Support</div>

* `#include <filesystem>`
* Usual convention: `namespace fs = std::filesystem;`
* Based on Boost.Filesystem.
* Interface is primarily non-member functions that operator on path objects.
  * `fs::path`
  * `fs::directory_entry` and `fs::directory_iterator`
  * `fs::file_status` - file type and permissions

NOTES:

---

<div class="slide-title">Filesystem Support</div>

Four major capabilities:
* Path creation/manipulation.
* Directory iteration and recursion.
* File/directory metadata query.
* File/directory creation, removal and modification.

NOTES:

---

<div class="slide-title">Filesystem Support</div>

<div class="left">
<span style="display: block">__**Before (POSIX)**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
36_library_filesystem_support
/
10_display_contents.cpp
#0
'></code></pre>
</div>

<div class="right">
</div>

NOTES:

---

<div class="slide-title">Filesystem Support</div>

<div class="left">
<span style="display: block">__**Before (POSIX)**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
36_library_filesystem_support
/
10_display_contents.cpp
#0
'></code></pre>
</div>

<div class="right">
<span style="display: block">__**C++17**__</span>

<pre style="display: inline-block;"><code class='sample' sample='cpp17_features/
36_library_filesystem_support
/
10_display_contents.cpp
#1
'></code></pre>
</div>

NOTES:

