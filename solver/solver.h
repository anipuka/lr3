#ifndef SOLVER_H
#define SOLVER_H

#include <utility>
#include <cmath>

inline std::pair<double, double> solve_quadratic(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    double x1 = (-b + std::sqrt(discriminant)) / (2*a);
    double x2 = (-b - std::sqrt(discriminant)) / (2*a);
    return {x1, x2};
}

#endif // SOLVER_H
