#include "LinearAlgebra.hpp"
#include <algorithm>  // For std::transform
#include <functional> // For std::multiplies

double LinearAlgebra::dp(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("Vectors must be of the same size.");
    }
    std::vector<double> hadamardProducts(vec1.size()); // Initialize with the correct size
    std::transform(std::execution::par, vec1.begin(), vec1.end(), vec2.begin(), hadamardProducts.begin(), std::multiplies<>());
    return std::reduce(std::execution::par, hadamardProducts.begin(), hadamardProducts.end());
}
