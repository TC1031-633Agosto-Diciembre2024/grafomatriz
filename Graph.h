//
// Created by Andrés Torres on 05/11/24.
//

#ifndef GRAPH_H
#define GRAPH_H


class Graph {
private:
    int vertices;
    int** adjMatriz;
public:
    Graph(int vertices): vertices(vertices) {
        adjMatriz = new int*[vertices];
        for(int i=0;i< vertices;i++) {
            adjMatriz[i]= new int[vertices];
            for(int j=0;j<vertices;j++) {
                adjMatriz[i][j]=0;
            }
        }
    }
    ~Graph() {
        for(int i=0;i<vertices;i++) {
            delete[] adjMatriz[i];
        }
        delete[] adjMatriz;
    }
    void addEdge(int src,int dest);
    void displayMatrix();

};



#endif //GRAPH_H
