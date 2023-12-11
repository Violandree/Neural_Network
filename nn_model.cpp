
#include "nn_model.h"

la::dense_matrix nn_model::predict(const la::dense_matrix &input_vector) const {

    // Your code goes here
    la::dense_matrix x = input_vector;

    for (size_t i = 0; i < layers.size(); ++i)
        x = layers[i].eval(x);

    return x;
}

void nn_model::add_layer(const layer & l) {

    layers.push_back(l); // add a new layer to the model
}
