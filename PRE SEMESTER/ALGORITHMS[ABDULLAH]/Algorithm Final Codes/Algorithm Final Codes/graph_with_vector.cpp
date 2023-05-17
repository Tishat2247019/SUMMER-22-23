#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v[2];
    v[0].push_back(10);
    v[1].push_back(20);
    v[1].push_back(30);
    //cout<<v.size()<<endl;

    for(int k=0;k<2;k++)
    {

        cout<<k<<"-->";
        for(int i=0;i<v[k].size();i++)
    {
        cout<<v[k][i]<<" ";
    }
    cout<<endl;
    }
return 0;
}
