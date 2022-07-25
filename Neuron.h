//
// Created by zolin on 25.07.2022.
//

#ifndef NEURAL_NETWORKS_NEURON_H
#define NEURAL_NETWORKS_NEURON_H
#include <vector>
class Neuron;
typedef std::vector<Neuron> Layer;
struct Connection{
    double weight;
    double deltaWeight;
};

class Neuron {
private:

};


#endif //NEURAL_NETWORKS_NEURON_H
