
#include "unionfind.h"

void make_set(unsigned long vertex_count,unsigned long parent [vertex_count],unsigned long rank [vertex_count]){
    for (unsigned long i=0;i<vertex_count;i++){
        parent[i]=i;
        rank[i]=0;
    }
}

unsigned long find (unsigned long i, unsigned long vertex_count,unsigned long parent [vertex_count],unsigned long rank [vertex_count]){
    if (parent[i]==i){
        return i;
    }
    else {
        return find(parent[i], vertex_count, parent, rank);
    }
}

void Union (unsigned long i, unsigned long j, unsigned long vertex_count,unsigned long parent [vertex_count],unsigned long rank [vertex_count]){
    unsigned long ri = find(i, vertex_count,parent,rank);
    unsigned long rj = find(j, vertex_count,parent,rank);
    if (rank[i]>rank[j]) {
        parent[j]=i;
        rank[i]+=(rank[j]+1);
        rank[j]=0;
    }
    else{
        parent[i]=j;
        rank[j]+=(rank[i]+1);
        rank[i]=0;
    }
}


/*int parent (int x, Graph *graph){

}

int find (int x, Graph *graph) {
    graph->edges; // Zugriff auf die Kanten

}*/
/*Graph path_compression (Graph *graph) {

}
int find(int x,std::vector<int> *partitions) {

}

void initPartition(Graph *graph, std::vector<int> *partitions) {
    for (int i=0;i<graph->vertex_count; i++) {
        partitions->at(i) = -1;
    }
}


void unify(int x, int y, std::vector<int> *partitions) {
    x=find(x,partitions);
    y=find(y,partitions);
    if (find(x,partitions)==find(y,partitions)){
        return;
    }
    else {
        parent(y)=x;
    }
}

void make_set(int x){

}*/