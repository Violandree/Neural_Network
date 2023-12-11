#ifndef NEURALNETWORKS_SIGMOID_H
#define NEURALNETWORKS_SIGMOID_H
#include "activation_function.h"


class sigmoid : public activation_function {

public:
    double eval (double x) override {
        return 1 / (1 + exp(-x));
    }
};



#endif //NEURALNETWORKS_SIGMOID_H
