#ifdef RELU_H
#define RELU_H
#include "ActivationFunction.hpp"

class Relu : public ActivationFunction {
public:
    double activate(double input) const override {
        // activate input via RELU
  
    }
    double activate_derivative(double input) const override {
        // activate input via RELU derivative
    }
};

#endif