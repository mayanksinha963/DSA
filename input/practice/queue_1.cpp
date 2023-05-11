#include<iostream>
using namespace std;

class queue {
    public :
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty (queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
    
}

int isFull (queue *q)
{
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}

int enqueue (queue *q, int value)
{
    if (isFull(q))
    {
        cout<<"Queue is Full"<<endl;
        return 0;
    }
    else {
        q->r++;
        q->arr[q->r]= value;
        //cout<<q->arr[q->r];
    return q->arr[q->r];
    }
return 0;    
}

int dequeue (queue *q)
{
    if (isEmpty(q))
    {
        cout<<"Queue is Empty"<<endl;
        return 0;
    }
    else {
        q->f++;
        return q->arr[q->f];
    }
}
int main(int argc, char const *argv[])
{
    queue q ;
    q.size = 100;
    q.f = q.r = 0;
    
    q.arr = (int *)malloc (q.size * sizeof(int));
    
    cout<<"Enqueue element is : "<<enqueue(&q, 14)<<endl;
    cout<<"Enqueue element is : "<<enqueue(&q, 17)<<endl;
    cout<<"Dequeue element is : "<<dequeue(&q)<<endl;
    cout<<"Dequeue element is : "<<dequeue(&q)<<endl;
    cout<<"Dequeue element is : "<<dequeue(&q)<<endl;
    return 0;
}
