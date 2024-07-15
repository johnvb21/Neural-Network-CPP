#include <iostream>
#include "Neuron.hpp"

int main() {
    std::vector<double> vec1 = {1.0, 2.0, 3.0};
    std::vector<double> vec2 = {4.0, 5.0, 6.0};

    Neuron neuron(3, "sigmoid");
    neuron.inputs = vec1;
    double result = neuron.neuron_output();

    std::cout << "Neuron output: " << result << std::endl;
    neuron.print_neuron_weights();
    return 0;
}
