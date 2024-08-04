#ifndef LINEAR_ALGEBRA_HPP
#define LINEAR_ALGEBRA_HPP

#include <vector>
#include <execution>
#include <numeric>
#include <stdexcept>

class LinearAlgebra {
public:
    static double parallel_dp(const std::vector<double>& vec1, const std::vector<double>& vec2);
    static std::vector<std::vector<double>> matmul(const std::vector<std::vector<double>>& mat1, const std::vector<std::vector<double>>& mat2);
    static std::vector<std::vector<double>> mat_transpose(const std::vector<std::vector<double>>& matrix);
    static std::vector<std::vector<double>> parallel_mat_transpose(const std::vector<std::vector<double>>& matrix);
    static std::vector<std::vector<double>> parallel_matmul(const std::vector<std::vector<double>>& mat1, const std::vector<std::vector<double>>& mat2);


};

#endif // LINEAR_ALGEBRA_HPP
