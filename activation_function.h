

#ifndef NEURALNETWORKS_ACTIVATION_FUNCTION_H
#define NEURALNETWORKS_ACTIVATION_FUNCTION_H
#include <cmath>

class activation_function {

public:
    virtual double eval (double x) = 0;
};


#endif //NEURALNETWORKS_ACTIVATION_FUNCTION_H
