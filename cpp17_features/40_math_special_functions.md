<div class="slide-title">Math Special Functions</div>

<table style="font-size: 20px;">
<tr><td>`std::beta`</td>          <td>`std::assoc_legendre`</td><td>`std::sph_neumann`</td></tr>
<tr><td>`std::expint`</td>        <td>`std::sph_legendre`</td>  <td>`std::ellint_1`</td></tr>
<tr><td>`std::riemann_zeta`</td>  <td>`std::cyl_bessel_i`</td>  <td>`std::comp_ellint_1`</td></tr>
<tr><td>`std::hermite`</td>       <td>`std::cyl_bessel_j`</td>  <td>`std::ellint_2`</td></tr>
<tr><td>`std::laguerre`</td>      <td>`std::cyl_bessel_k`</td>  <td>`std::comp_ellint_2`</td></tr>
<tr><td>`std::assoc_laguerre`</td><td>`std::sph_bessel`</td>    <td>`std::ellint_3`</td></tr>
<tr><td>`std::legendre`</td>      <td>`std::cyl_neumman`</td>   <td>`std::comp_ellint_3`</td></tr>
</table>

* `#include <cmath>`
* A collection of common mathematical functions know as [special functions](https://en.wikipedia.org/wiki/Special_functions).
* Based on [Boost.Math](http://www.boost.org/doc/libs/1_64_0/libs/math/doc/html/special.html) and [the Fortran netlib library](http://www.netlib.org/specfun/).
* Previously part of [ISO/IEC 29124:2010](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3060.pdf).
* `*f` and `*l` forms to control the return type.

NOTES:

