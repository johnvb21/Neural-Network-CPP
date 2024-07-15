#ifndef LAYER_HPP
#define LAYER_HPP

#include <string>
#include <vector>
#include "Neuron.hpp"
#include <iostream>

class Layer {
public:
    int num_neurons;
    std::string layer_activation;
    std::vector<Neuron> layer_neurons;

    Layer(int num_neurons, const std::string& layer_activation)
        : num_neurons(num_neurons), layer_activation(layer_activation) {}
    void initialize_layer(int previous_layer_number) {
        for (int i = 0; i < num_neurons; i++) {
            layer_neurons.push_back(Neuron(previous_layer_number, layer_activation));
        }
    }
    void print_layer_weights() {
        for (int i = 0; i < num_neurons; i++) {
            layer_neurons[i].print_neuron_weights();
        }
    }
    void print_layer_bias() {
        for (int i = 0; i < num_neurons; i++) {
            layer_neurons[i].print_neuron_bias();
        }
    }
};

#endif
