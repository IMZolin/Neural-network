//
// Created by zolin on 25.07.2022.
//

#include "Network.h"
Network::Network(const std::vector<unsigned> &topology)
{
    unsigned numLayers = topology.size();
    for(unsigned layer = 0; layer < numLayers; layer++)
    {
        layers.push_back(Layer());
        unsigned numOutputs = layer == topology.size() - 1 ? 0:topology[layer+1];
        for(unsigned numNeuron = 0; numNeuron <= topology[layer]; numNeuron++)
            layers.back().push_back(Neuron(numOutputs,numNeuron));
        layers.back().back().setOutputVal(1.0);
    }
}