#ifndef NEURON_HPP
#define NEURON_HPP

#include <string>
#include <vector>

class Neuron {
public:
    std::vector<double> weights;
    std::vector<double> inputs;
    int numInputs;
    double bias;

    Neuron(int num_inputs, const std::string& activation);
    double neuron_output();

private:
    std::string activationFunction;
    double activate(double x) const;
};

#endif // NEURON_HPP
