#include<bits/stdc++.h>
using namespace std;
#define n 100
//graph representation
//adjacency Matrix
//Static 2D Array
//Dynamic 2D array
//7 nodes and 11 edges

int main()
{

int nodes;
int edges;
int g[n][n];
cin>>nodes>>edges;
int u,v;
for(int i=0;i<edges;i++)
{
    cin>>u>>v;
    g[u][v] =1;
    g[u][v]=1;
}
for(int i=0;i<nodes;i++)
{
    for(int j=0;j<nodes;j++)
    {
        cout<<g[i][j]<<" ";
    }cout<<endl;
}

return 0;
}
