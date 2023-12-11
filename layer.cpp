

#include "layer.h"

layer::layer(size_t input_size, size_t output_size, const ptr_act_function &p_a_f) {

    for (size_t i = 0; i < output_size; ++i)
        neurons.push_back(neuron(input_size,p_a_f));
    layer::input_size = input_size;
    layer::output_size = output_size;
}

la::dense_matrix layer::eval(const la::dense_matrix & input_vector) const {

    // the output layer has dimension output_size
    la::dense_matrix x(output_size,1,0.0);

    // I pass to each neuron, that builds a layer, the input signals (every neurons recives an input signals)
    for (size_t i = 0; i < output_size; ++i)
        x.data()[i] = neurons[i].eval(input_vector);

    return x;
}

size_t layer::get_input_size() const {
    return input_size;
}

size_t layer::get_output_size() const {
    return output_size;
}
