#include "LinearAlgebra.hpp"
#include <algorithm>  // For std::transform
#include <functional> // For std::multiplies

double LinearAlgebra::parallel_dp(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("Vectors must be of the same size.");
    }
    std::vector<double> hadamardProducts(vec1.size());
    std::transform(std::execution::par, vec1.begin(), vec1.end(), vec2.begin(), hadamardProducts.begin(), std::multiplies<>());
    return std::reduce(std::execution::par, hadamardProducts.begin(), hadamardProducts.end());
}
std::vector<std::vector<double>> LinearAlgebra::mat_transpose(const std::vector<std::vector<double>>& matrix) {
    std::vector<std::vector<double>> transposed_matrix(matrix[0].size(), std::vector<double>(matrix.size()));


}
std::vector<std::vector<double>> LinearAlgebra::parallel_mat_transpose(const std::vector<std::vector<double>>& matrix) {
    std::vector<std::vector<double>> transposed_matrix(matrix[0].size(), std::vector<double>(matrix.size()));


}
std::vector<std::vector<double>> LinearAlgebra::matmul(const std::vector<std::vector<double>>& mat1, const std::vector<std::vector<double>>& mat2) {
    std::vector<std::vector<double>> output;
    // check matrix size
    if (mat1.empty() || mat2.empty() || mat1[0].size() != mat2.size()) {
        throw std::invalid_argument("Incompatible Matrix Dimensions");
    }


}
std::vector<std::vector<double>> LinearAlgebra::parallel_matmul(const std::vector<std::vector<double>>& mat1, const std::vector<std::vector<double>>& mat2) {
    std::vector<std::vector<double>> output;
    // check matrix size
    if (mat1.empty() || mat2.empty() || mat1[0].size() != mat2.size()) {
        throw std::invalid_argument("Incompatible Matrix Dimensions");
    }


}
