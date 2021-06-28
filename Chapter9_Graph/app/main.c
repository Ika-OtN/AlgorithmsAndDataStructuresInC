#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Graph.h"


int main(void) {

    system("clear");

    uint32_t num_verticies = 5;
    uint32_t num_edges = 6;

    edge_t edges[] = {
        {0, 1, 2.5f},
        {0, 2, 1.0f},
        {1, 4, 3.0f},
        {2, 3, 2.0f},
        {3, 1, 4.0f},
        {4, 3, -3.0f}
    };

    graph_t *graph = createGraph(num_verticies, num_edges);

    addEdges(graph, edges);

    printGraph(graph);

    graph = freeGraph(graph);
    assert(NULL == graph);

    return 0;
}
