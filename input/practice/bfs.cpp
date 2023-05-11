#include<iostream>
using namespace std;

class queue {
    public :
    int size;
    int f;
    int r;
    int *arr;
};

int isempty (queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
    
}

int isfull (queue *q)
{
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
    
}

int enqueue (queue *q, int value)
{
    if (isfull(q))
    {
        cout<<"Queue is Full"<<endl;
    }
    else {
        q->r++;
        q->arr[q->r]= value;
        return q->arr[q->r];
    }

    
}

int dequeue (queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        cout<<"Queue is empty"<<endl;
    }
    else {
        q->f++;
        a= q->arr[q->f];
    }
    return a;
    
}

int main(int argc, char const *argv[])
{
    
    queue q;
    q.size= 400;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    
    int node;
    int i =1;
    int visited [7] = {0,0,0,0,0,0};
    int a [7][7] =
    {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
    cout<<i;
    visited[i] =1;
    enqueue(&q, i);
    while (!isempty(&q))
    {
       int node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                cout<<j;
                visited[j] =1;
                enqueue(&q,j);
            }
            
        }
        
    };
    return 0;
}


    
    
