#ifndef DZ3_ACTIONS_H
#define DZ3_ACTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NODES 100

struct graph {
    int nodes[MAX_NODES][MAX_NODES];
    int num_nodes;
};

void dfs(struct graph* g, int v, int visited[]);
int is_connected(struct graph* g);
void fread_graph(FILE* file, struct graph* g);
void write_dot(FILE* file, struct graph* g);

#endif //DZ3_ACTIONS_H
