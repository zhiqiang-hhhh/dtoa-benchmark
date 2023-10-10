#define FMT_HEADER_ONLY 1
#define FMT_USE_FULL_CACHE_DRAGONBOX 1
#include "fmt/include/fmt/format.h"
#include "fmt/include/fmt/compile.h"
#include "test.h"

char *dtoa_fmt_full_cache_test(double value, char *const buffer) {
  *fmt::format_to(buffer, FMT_COMPILE("{}"), value) = '\0';
  return buffer;
}

REGISTER_TEST(fmt_full_cache_test);
