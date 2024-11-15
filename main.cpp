#include <iostream>

#include "Graph.h"

int main() {
    int vertices=5;
    Graph graph(vertices);
    graph.addEdge(0,1,2);
    graph.addEdge(0,4,1);
    graph.addEdge(1,2,3);
    graph.addEdge(1,3,1);
    graph.addEdge(4,3,2);
    graph.addEdge(3,2,5);
    graph.displayMatrix();
    graph.dijkstra(3);
    return 0;
}
