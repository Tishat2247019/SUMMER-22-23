#include<bits/stdc++.h>


using namespace std;


class Stack{
private:
int *a;
int n;
int top;
public:
    Stack()
    {
    n=5;
    a= new int[n];
    top=-1;
    }
    Stack(int n)
    {
    this->n=n;
    a= new int[n];
    top=-1;
    }
int isEmpty()
{
    return top = -1?1:0;
}

int isFull()
{
    return top>=n-1?1:0;
}
void push (int value)
{
    if(!isFull()) a[++top] = value;
    else cout<<"Full"<<endl;
}
void pop()
{
    if(!isEmpty()) top--;
    else cout<<"Empty"<<endl;
}

int topElement()
{
    return a[top];
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
};

int main()
{
   Stack s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 //push(60);*/
 s.display();
   // cout<<"Hello Algorithm Final Term Lab welcomes You :) "<<endl;


return 0;
}
