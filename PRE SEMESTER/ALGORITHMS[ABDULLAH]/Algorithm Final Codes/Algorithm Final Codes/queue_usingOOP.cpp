#include <bits/stdc++.h>
using namespace std;

//#define SIZE 5
class Queue {
    private:
    int *A;
int SIZE;
int top;
int front = -1;
int rear = -1;

public:

Queue()
    {
    SIZE=5;
    A= new int[SIZE];
    top=-1;
    }

Queue(int SIZE)
    {
    this->SIZE = SIZE;
    A= new int[SIZE];
    top=-1;
    }



bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}

void enqueue ( int value )
{
 if (rear == SIZE-1)
  cout<<"Queue is full \n";
 else
 {
  if( front == -1)
   front = 0;
  rear++;
  A[rear] = value;
 }
}

void dequeue ( )
{
 if( isempty() )
  cout<<"Queue is empty\n";
 else
 if( front == rear )
  front = rear = -1;
 else
  front++;
}

void showfront( )
{
 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<A[front]<<"\n";
}

void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<A[i]<<" ";
  cout<<"\n";
 }
}
};

int main()
{

 cout<<"Inserting elements in queue\n";
 Queue q;
 q.enqueue(2);

 q.enqueue(3);

 q.enqueue(5);

 q.enqueue(7);

 q.enqueue(8);

 q.enqueue(9);
 q.displayQueue();

q.showfront();

q.dequeue();
q.displayQueue();



 return 0;
}
