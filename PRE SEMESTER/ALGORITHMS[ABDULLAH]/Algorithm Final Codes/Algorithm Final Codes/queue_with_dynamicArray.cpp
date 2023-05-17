#include <bits/stdc++.h>
using namespace std;

#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;

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

int main()
{

 cout<<"Inserting elements in queue\n";
 enqueue(2);

 enqueue(3);

 enqueue(5);

 enqueue(7);

 enqueue(8);

 enqueue(9);
 displayQueue();

showfront();

dequeue();
displayQueue();



 return 0;
}
