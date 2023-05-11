#include<iostream>
using namespace std;

class kqueues 
{
    int n;
    int s;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freespot;
    public:

kqueues (int n, int s)
{
    this->n = n;
    this->s = s;
    front = new int [s];
    rear = new int [s];
    for (int i = 0; i < s; i++)
    {
        front[i] = rear[i] = -1;
    }

    arr= new int [n];
    next = new int [n];

    for (int i = 0; i < n; i++)
    {
        next[i] = i+1;
    }
    next[n-1] = -1;
    freespot = 0; 
}
void enqueue (int data, int qn)
{
    if(freespot == -1)
    {
        cout<<"Queue is overflow"<<endl;
        return;
    }
    int index = freespot;
    freespot = next[index];
    if(front[qn-1] == -1)
    {
        front[qn-1] = index;
    }
    else 
    {
        next[rear[qn-1]] = index;
    }
    next[index] = -1;
    rear[qn-1] = index;
    arr[index]  = data;
}

int dequeue (int qn)
{
    if(front[qn-1]== -1)
    {
        cout<<"Queue is empty";
        return -1;
    }
    int index = front[qn-1];
    front[qn-1] = next[index];
    next[index] = freespot;
    freespot = index;
    return arr[index];
}

void display (int qn)
{
    if(front[qn-1] == -1)
    {
        cout<<"Queue is empty";
    }
    int duplicate[s];
    duplicate[qn-1]= front[qn-1];
    while (duplicate[qn-1] != -1)
    {
          int index = duplicate[qn-1];
          cout<<arr[index]<<" ";
        duplicate[qn-1] = next[index];
    
    }
    
  
    

    
    
}
};




int main(int argc, char const *argv[])
{
    kqueues q(6, 3);
    q.enqueue(5,1);
    q.enqueue(8,1);
    q.enqueue(10,2);
    q.display(1);
    cout<<endl;
    cout<<q.dequeue(1)<<endl;
    // cout<<q.dequeue(2);
    
    return 0;
}
