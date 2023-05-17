#include<bits/stdc++.h>
using namespace std;

//graph representation
//adjacency Matrix
//Static 2D Array
//Dynamic 2D array
//7 nodes and 11 edges

void init(int **G,int n)
{
   for(int i =0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           G[i][j]=0;
       }
   }
}
void addEdge(int **G,int u,int v)
{
    G[u][v]=1;
    G[v][u]=1;
}
void printGraph(int **G,int nodes)
{
   for(int i=0;i<nodes;i++)
{
    for(int j=0;j<nodes;j++)
    {
        cout<<G[i][j]<<" ";
    }cout<<endl;
}
}

int main()
{

int nodes;
int edges;
int **g;
cin>>nodes>>edges;

g= new int*[nodes];

for(int i= 0;i<nodes;i++)
{
    g[i] = new int[nodes];
}

init(g,nodes);
int u,v;

for(int i =0;i<edges;i++)
{
    cin>>u>>v;
    addEdge(g,u,v);
}

printGraph(g,nodes);




return 0;
}
