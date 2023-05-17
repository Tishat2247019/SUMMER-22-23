#include<bits/stdc++.h>
using namespace std;

//graph representation
//adjacency Matrix
//Static 2D Array
//Dynamic 2D array
//7 nodes and 11 edges

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


for(int i=0;i<nodes;i++)
{
    for(int j=0;j<nodes;j++)
    {
        cout<<g[i][j]<<" ";
    }cout<<endl;
}
int u,v;
for(int i=0;i<edges;i++)
{
    cin>>u>>v;
    g[u][v] =1;
    g[v][u]=1;
}

return 0;
}
