#ifndef ACTIVATIONFUNCTION_h
#define ACTIVATIONFUNCTION_H

class ActivationFunction {
public:
    virtual double activate(double input) const = 0;
    virtual double activate_derivative(double input) const = 0;
};

#endif