// sample(primary)
#if __has_include(<string_view>)
  #include <string_view>
  #define HAVE_STRING_VIEW 1
#elif __has_include(<experimental/string_view>)
  #include <experimental/string_view>
  #define HAVE_STRING_VIEW 1
  #define HAVE_EXP_STRING_VIEW 1
#else
  #define HAVE_STRING_VIEW 0
#endif
// end-sample
