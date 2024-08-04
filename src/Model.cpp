#include "Model.hpp"
#include <vector>

Model::Model(const std::vector<Layer>& input_layers, int model_input_size) : model_layers(input_layers), input_size(model_input_size) {
    model_layers[0].initialize_layer(model_input_size);
    for (int i = 1; i < model_layers.size(); i++) {
        model_layers[i].initialize_layer(model_layers[i-1].num_neurons);
    }
}


void Model::print_model_stats() {
    
}