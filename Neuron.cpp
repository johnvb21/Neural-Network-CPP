#include <vector>
#include <cmath>
#include <cstdlib>

class Neuron {
    public:
        std::vector<double> weights;
        std::vector<double> inputs;
        double bias;

        Neuron(int num_inputs) {
            for (int i = 0; i < num_inputs; i++) {
                weights.push_back((double) rand() / RAND_MAX *2 - 1);
            }
            bias = ((double) rand() / RAND_MAX *2 - 1)
        }

}