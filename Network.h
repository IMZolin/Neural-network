//
// Created by zolin on 25.07.2022.
//

#ifndef NEURAL_NETWORKS_NETWORK_H
#define NEURAL_NETWORKS_NETWORK_H
#include "Neuron.h"

class Network {
public:
    Network(const std::vector<unsigned> &topology);
private:
    std::vector<Layer> layers;
    double error;
};


#endif //NEURAL_NETWORKS_NETWORK_H
