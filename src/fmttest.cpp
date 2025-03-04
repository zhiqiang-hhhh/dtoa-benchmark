#define FMT_HEADER_ONLY 1
#include "fmt/include/fmt/format.h"
#include "fmt/include/fmt/compile.h"
#include "test.h"

char *dtoa_fmt(double value, char *const buffer) {
  *fmt::format_to(buffer, FMT_COMPILE("{}"), value) = '\0';
  return buffer;
}

REGISTER_TEST(fmt);
