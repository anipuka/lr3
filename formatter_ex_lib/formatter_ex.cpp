#include "formatter_ex.h"
#include "../formatter_lib/formatter.h"  // Явный относительный путь

std::string FormatterEx::formatEx(const std::string& text) {
    return "[" + format(text) + "]";
}
