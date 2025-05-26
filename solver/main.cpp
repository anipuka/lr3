#include "formatter_ex.h"
#include "solver.h"
#include <iostream>

int main() {
    auto [x1, x2] = solve_quadratic(1.0, -3.0, 2.0);
    std::cout << FormatterEx::formatEx("Roots: " + std::to_string(x1) + ", " + std::to_string(x2)) << std::endl;
    return 0;
}
