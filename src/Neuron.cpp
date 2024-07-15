#include "Neuron.hpp"
#include "LinearAlgebra.hpp"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <algorithm>

Neuron::Neuron(int num_inputs, const std::string& activation) : numInputs(num_inputs), activationFunction(activation) {
    for (int i = 0; i < num_inputs; i++) {
        weights.push_back((double) rand() / RAND_MAX * 2 - 1);
    }
    bias = ((double) rand() / RAND_MAX * 2 - 1);
}

double Neuron::neuron_output() {
    if (weights.size() != inputs.size()) {
        std::cerr << "Invalid input size" << std::endl;
        return 0.0;
    }

    double dot_product = LinearAlgebra::dp(weights, inputs);
    double output = dot_product + bias;
    return activate(output);
}

double Neuron::activate(double x) const {
    if (activationFunction == "relu") {
        return std::max(0.0, x);
    } else if (activationFunction == "sigmoid") {
        return 1.0 / (1.0 + std::exp(-x));
    }
    // Add more activation functions as needed
    return x;  // Default (linear) activation
}
void Neuron::print_neuron_weights() {
    for (int i = 0; i < weights.size(); i++) {
        std::cout << weights[i] << std::endl;
    }
}
void Neuron::print_neuron_bias() {
    std::cout << bias << std::endl;
}