//
// Created by Andrés Torres on 05/11/24.
//
#include <iostream>
#include "Graph.h"

using namespace std;
void Graph::addEdge(int src,int dest) {
    adjMatriz[src][dest]=1;
    adjMatriz[dest][src]=1;
}

void Graph::displayMatrix() {
    std::cout<<"Matrix: "<<endl;
    for(int i=0;i<vertices;i++) {
        for(int j=0;j<vertices;j++) {
            std::cout<<adjMatriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
