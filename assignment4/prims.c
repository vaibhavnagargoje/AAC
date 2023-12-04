#include<stdio.h>
#include<limits.h>

#define MAX_VERTICES 20

int graph[MAX_VERTICES][MAX_VERTICES];

int minKey(int key[],int mstSet[], int vertices){
    int min = INT_MAX,min_index;

    for(int v=0;v<vertices; v++){
        if(mstSet[v]==0&& key[v] <min){
            min=key[v];
            min_index=v;

        }
    }
    return min_index;

}

void printMST(int parent[], int vertices){
    printf("Edge \tWeight\n");
    for(int i =1;i<vertices;i++){
        printf("%d-%d \t %d \n",parent[i],i,graph[i][parent[i]]);

    }
    
}

void primsMST(int vertices){
    int parent[MAX_VERTICES];
    int key[MAX_VERTICES];
    int mstSet[MAX_VERTICES];

    for(int i=0; i<vertices;i++){
        key[i]=INT_MAX;
        mstSet[i]=0;
    }
    key[0]=0;
    parent[0]=-1;


    for (int count=0; count<vertices-1;count++){
        int u = minKey(key,mstSet,vertices);
        mstSet[u]=1;
        for (int v = 0; v < vertices; v++)
        {
            if (graph[u][v]&& mstSet[v]==0 && graph[u][v]<key[v]){
                parent[v]=u;
                key[v]=u;
                key[v]=graph[u][v];
            }
        }
        
    }
    printMST(parent,vertices);
}






int main(){
    int vertices, edges;
    printf("enter the number of vertices; ");
    scanf("%d", &vertices);

    printf("Enter the adjacency matrix for the graph: \n");

    for(int i=0; i< vertices; i++){
        for(int j=0; j<vertices; j++){
            scanf("%d",&graph[i][j]);
        }
    }
    primsMST(vertices);
    return 0;
}

