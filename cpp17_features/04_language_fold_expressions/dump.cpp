FILE: 00_sample_interface.cpp

                                                     // For width
// sample(primary)
template <typename... Ns>                            
auto sum(Ns... ns);
// end-sample

FILE: 01_sample_cpp14_recursive.cpp

                                                     // For width
// sample(primary)
auto sum()                { return 0; }              

template <typename N>
auto sum(N n)             { return t; }

template <typename N0, typename... Ns>
auto sum(N0 n0, Ns... ns) { return n0 + sum(ns...); }
// end-sample

FILE: 02_sample_cpp17_fold.cpp

                                                     // For width
// sample(primary)
template <typename... Ns>                            
auto sum(Ns... ns) { return (ns + ... + 0); }
// end-sample

<table style="font-size: 20px;">
<tr>
  <td>Unary Right Fold</td>
  <td style="font-family: monospace;">(E op ...)</td>
  <td style="font-family: monospace;">E<sub>1</sub> op (... op (E<sub>N-1</sub> op E<sub>N</sub>))</td>
</tr>
<tr>
  <td>Unary Left Fold</td>
  <td style="font-family: monospace;">(... op E)</td>
  <td style="font-family: monospace;">((E<sub>1</sub> op E<sub>2</sub>) op ...) op E<sub>N</sub></td>
</tr>
<tr>
  <td>Binary Right Fold</td>
  <td style="font-family: monospace;">(E op ... op I)</td>
  <td style="font-family: monospace;">E<sub>1</sub> op (... op (E<sub>N-1</sub> op (E<sub>N</sub> op I)))</td>
</tr>
<tr>
  <td>Binary Left Fold</td>
  <td style="font-family: monospace;">(I op ... op E)</td>
  <td style="font-family: monospace;">(((I op E<sub>1</sub>) op E<sub>2</sub>) op ...) op E<sub>N</sub></td>
</tr>
</table>

All binary operators are foldable:

<table style="font-size: 20px;">
<tr>
  <td>`==&nbsp;</td>
  <td>`!=&nbsp;</td>
  <td>`<&nbsp;&nbsp;</td>
  <td>`>&nbsp;&nbsp;</td>
  <td>`<=&nbsp;</td>
  <td>`>=&nbsp;</td>
  <td>`&&&nbsp;</td>
  <td>`||&nbsp;</td>
  <td>`,&nbsp;&nbsp;</td>
  <td>`.*&nbsp;</td>
  <td>`->*</td>
  <td>`=&nbsp;&nbsp;</td>
</tr>
<tr>
  <td>`+`&nbsp;&nbsp;</td>
  <td>`-`&nbsp;&nbsp;</td>
  <td>`*`&nbsp;&nbsp;</td>
  <td>`/`&nbsp;&nbsp;</td>
  <td>`%`&nbsp;&nbsp;</td>
  <td>`^`&nbsp;&nbsp;</td>
  <td>`&`&nbsp;&nbsp;</td>
  <td>`|`&nbsp;&nbsp;</td>
  <td>`<<`&nbsp;</td>
  <td>`>>`&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
</tr>
<tr>
  <td>`+=`&nbsp;</td>
  <td>`-=`&nbsp;</td>
  <td>`*=`&nbsp;</td>
  <td>`/=`&nbsp;</td>
  <td>`%=`&nbsp;</td>
  <td>`^=`&nbsp;</td>
  <td>`&=`&nbsp;</td>
  <td>`|=`&nbsp;</td>
  <td>`<<=`</td>
  <td>`>>=`</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
  <td>&nbsp;&nbsp;&nbsp;</td>
</tr>
</table>

FILE: 03_sample_expansion4_cpp17_fold.cpp

                                                     // For width
// sample(primary)
template <typename... Ns>                            
auto sum(Ns... ns) { return (ns + ... + 0); }

auto a = sum(3.14, 1e7, -42, 17);
      // 3.14 + (1e7 + (-42 + (17 + 0)))
// end-sample

NOTE:
Binary right fold.

FILE: 10_all_cpp17_fold.cpp 

                                                     // For width
// sample(primary)
template <typename... Bs>                            
bool all(Bs... bs) { return (... && bs); }
// end-sample

NOTE:
Unary left fold.

FILE: 11_all_expansion4_cpp17_fold.cpp 

                                                     // For width
// sample(primary)
template <typename... Bs>                            
bool all(Bs... bs) { return (... && bs); }

bool a = all(true, true, true, false);
      // ((true && true) && true) && false
// end-sample

FILE: 12_all_expansion0_cpp17_fold.cpp 

                                                     // For width
// sample(primary)
template <typename... Bs>                            
bool all(Bs... bs) { return (... && bs); }

bool a = all();
      // ???
// end-sample

For unary folds, if the parameter packis empty then the value of the fold is:

<table style="font-family: monospace;">
<tr><td>`&&`</td><td>`true`</td></tr>
<tr><td>`||`</td><td>`false`</td></tr>
<tr><td>`,`&nbsp;</td><td>`void()`</td></tr>
</table>

For any operator not listed above, an unary fold
expression with an empty parameter pack is ill-formed.

FILE: 20_print_cpp17_fold.cpp 

                                                     // For width
// sample(primary)
template <typename... Ts>                          
void print(Ts&&... ts)
{
  (std::cout << ... << std::forward<Ts>(ts)) << "\n";
}
// end-sample

NOTE:
Binary left fold.

FILE: 30_for_each_arg_cpp17_fold.cpp 
                                                     // For width
// sample(primary)
template <typename F, typename... Args>              
void for_each_arg(F f, Args&&... args)
{
  (f(std::forward<Args>(args)), ...);
}
// end-sample

NOTE:
Unary right fold.
