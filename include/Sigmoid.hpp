#ifndef SIGMOID_H
#define SIGMOID_H
#include "ActivationFunction.hpp"

class Sigmoid : public ActivationFunction {
public:
    double activate(double input) const override;
    double activate_derivative(double input) const override;
};
#endif