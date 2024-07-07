#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include "ActivationFunction.hpp"
#include "Sigmoid.hpp"


class Neuron {
    public:
        std::vector<double> weights;
        std::vector<double> inputs;
        double bias;
        ActivationFunction neuron_activation;
        
        // We construct our neuron, and initialize our weights and bias to random values from -1 to 1.

        Neuron(int num_inputs, std::string& activation) {
            for (int i = 0; i < num_inputs; i++) {
                weights.push_back((double) rand() / RAND_MAX *2 - 1);
            }
            bias = ((double) rand() / RAND_MAX *2 - 1);
        }
    private:
        double neuron_output() {
            // check if size of weights and inputs are same

            // calculate dot product of weights and inputs
        }
        double dot_product() {
            // calculates the dot product of two vectors
        }
        double apply_activation(double dp_output) {
            // apply activation function to the dop product output
            // returns a 
        }
};