#ifndef LINEAR_ALGEBRA_HPP
#define LINEAR_ALGEBRA_HPP

#include <vector>
#include <execution>
#include <numeric>
#include <stdexcept>

class LinearAlgebra {
public:
    static double dp(const std::vector<double>& vec1, const std::vector<double>& vec2);
};

#endif // LINEAR_ALGEBRA_HPP
