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
    if ((q->r+1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

int enqueue (queue *q, int value)
{
    if (isFull (q))
    {
        cout<<"Queue is Full"<<endl;
        return 0;
    }
    else {
        q->r = (q->r+1)%q->size;
        q->arr[(q->r)%q->size] = value;
        return value;
    }
    
}

int dequeue (queue *q)
{
    if (isEmpty (q))
    {
        cout<<"Queue is Empty"<<endl;
        return 0;
    }
    else {
        q->f = (q->f +1 )%q->size;
        return q->arr[(q->f)%q->size];
    }
    
}

int main(int argc, char const *argv[])
{
    queue *q = (queue *) malloc (sizeof(queue));;
    q->f = q->r = 0;
    q->size = 4;
    q->arr = (int *)malloc(q->size * sizeof(int));
    cout<<"Enqueue element is : "<<enqueue(q, 5)<<endl;
    cout<<"Enqueue element is : "<<enqueue(q, 6)<<endl;
    cout<<"Enqueue element is : "<<enqueue(q, 7)<<endl;
    //cout<<"Enqueue element is : "<<enqueue(q, 5)<<endl;
    
    cout<<"Dequeue element is : "<<dequeue(q)<<endl;
    cout<<"Dequeue element is : "<<dequeue(q)<<endl;
    cout<<"Dequeue element is : "<<dequeue(q)<<endl;
    //cout<<"Dequeue element is : "<<dequeue(q)<<endl;

    cout<<"Enqueue element is : "<<enqueue(q, 8)<<endl;

    return 0;
}
