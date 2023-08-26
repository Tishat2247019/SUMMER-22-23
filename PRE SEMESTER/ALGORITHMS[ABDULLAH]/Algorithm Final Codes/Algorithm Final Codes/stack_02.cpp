#include<bits/stdc++.h>
#include<stack>
using namespace std;
// stack using static array
void printStack(stack<int>s1)
{
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}



int main(){

   stack<int> s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);

 cout<<s.size()<<endl;

    printStack(s);

return 0;
}

