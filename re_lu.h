//
// Created by Danilo Ardagna on 01/11/23.
//

#ifndef NEURALNETWORKS_RE_LU_H
#define NEURALNETWORKS_RE_LU_H
#include "activation_function.h"



class re_lu : public activation_function{

public:
    double eval (double x) override {
        return std::fmax(0,x);
    }

};


#endif //NEURALNETWORKS_RE_LU_H
