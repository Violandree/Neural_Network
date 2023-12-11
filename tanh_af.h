

#ifndef NEURALNETWORKS_TANH_AF_H
#define NEURALNETWORKS_TANH_AF_H
#include "activation_function.h"


class tanh_af : public activation_function {

    double eval (double x) override {
        return std::tanh(x);
    }
};



#endif //NEURALNETWORKS_TANH_AF_H
