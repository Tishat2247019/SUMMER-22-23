#include<bits/stdc++.h>
using namespace std;
#define n 7

int main()
{
    vector<int>g[n];
    int nodes;
    int edges;
    cin>>nodes>>edges;

    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }


    for(int i=0;i<nodes;i++)
    {

        cout<<i<<"-->";
        for(int j=0;j<g[i].size();j++)
    {
        cout<<g[i][j]<<" ";
    }
    cout<<endl;
    }
return 0;
}
