#include <iostream>

#include "Graph.h"

int main() {
    int vertices=5;
    Graph graph(vertices);
    graph.addEdge(0,1);
    graph.addEdge(0,4);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(2,3);
    graph.addEdge(3,4);
    graph.displayMatrix();
    return 0;
}
