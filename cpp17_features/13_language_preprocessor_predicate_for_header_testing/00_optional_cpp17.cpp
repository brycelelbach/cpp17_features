// sample(primary)
#if __has_include(<optional>)
  #include <optional>
  #define HAVE_OPTIONAL 1
#elif __has_include(<experimental/optional>)
  #include <experimental/optional>
  #define HAVE_OPTIONAL 1
  #define HAVE_EXP_OPTIONAL 1
#else
  #define HAVE_OPTIONAL 0
#endif
// end-sample
