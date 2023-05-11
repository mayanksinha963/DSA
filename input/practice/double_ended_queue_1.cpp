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
    cout<<q->r<<" "<<q->f<<endl;
    if (q->f == q->r)
    {
        //cout<<"Queue is Empty"<<endl;
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
    //cout<<"Hello";
    return 0;
    
}

int enque_back (queue *q, int value)
{
    if (isFull(q))
    {
        cout<<"Queue is Full"<<endl;
        return 0;
    }
    else {
        q->r++;
        cout<<"Arr : "<<q->r<<endl;
        q->arr[q->r] = value;
    }
    return value;
}

int enque_front (queue *q, int value)
{
    if (isFull (q))
    {
        cout<<"Queue is Full"<<endl;
        return 0;
    }
    else
    {
        q->r--;
        cout<<"Arr : "<<q->r<<endl;
        q->arr[q->r] = value;
        q->r++;
        return value;
    }

}


int deque_front (queue *q)
{
    if (isEmpty(q))
    {
        cout<<"Queue is empty"<<endl;
    }
    else {
        q->f++;
        cout<<"Arr : "<<q->f<<endl;
        return q->arr[q->f];
    }
    
}
int main(int argc, char const *argv[])
{
    //cout<<"Hello"<<endl;
    queue *q= (queue *)malloc(sizeof(queue));
    q->size = 3;
    q->f = -1;
    q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));
    cout<<enque_back(q, 7)<<endl;
    cout<<enque_back(q, 74)<<endl;
    cout<<enque_front(q, 79)<<endl;
    cout<<enque_front(q, 20)<<endl;
    //cout<<enque_front(q, 9)<<endl;
    cout<<deque_front(q)<<endl;
    cout<<deque_front(q)<<endl;
    cout<<deque_front(q)<<endl;
    // int i = 0;
    // while (q->arr[i] != '/0')
    // {
    //     cout<<q->arr[i]<<endl;
    //     i++;
    // }
    
    
    //cout<<"Hello"<<endl;
    return 0;
}
