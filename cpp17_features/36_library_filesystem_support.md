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
Before C++17, you had to use platform-specific APIs to access the filesystem.

Here's what copying a file and a directory looks like on Windows.

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
C++17 has a standard filesystem interface.

It's not only portable - it's also more user-friendly.

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
{READ FROM SLIDE}

---

<div class="slide-title">Filesystem Support</div>

Four major capabilities:
* Path creation/manipulation.
* Directory iteration and recursion.
* File/directory metadata query.
* File/directory creation, removal and modification.

NOTES:
{READ FROM SLIDE}

---


<!--

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

-->

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
Here's an example of how to display the contents of a directory with C++17.

Much nicer than the POSIX API!

