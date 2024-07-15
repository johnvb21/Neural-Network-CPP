#ifndef MODEL_HPP
#define MODEL_HPP
#include <vector>
#include "Layer.hpp"

class Model {
public:
    std::vector<Layer> model_layers;
    int input_size;
    Model(const std::vector<Layer>& input_layers, int model_input_size); 
    void print_model_stats();
};

#endif