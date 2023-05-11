#include<iostream>
using namespace std;

class CircularQueue{
    public:
    // Initialize your data structure.
    int size;
    int forward;
    int backward;
    int *arr;
    CircularQueue(int n){
        // Write your code here.
    size = n;
    forward = 0;
    backward = 0;
    arr = new int [size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
    
    if((backward == 0 && forward == size) || (forward == (backward -1)))
    {
        
        return false;
    }
    else if (forward == size)
    {
        
        
        arr[forward] = value;
        forward = 0;
    }
    else 
    {
            
        arr[forward] = value;
        forward++;
    }
    
    
    
    return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
    int ans = arr[backward];
    if(forward == backward)
    {
        return -1;
    }
    else if (backward == size)
    {
        backward = 0;
    }
    else {
        backward++;;
    }
    return ans;
    }
};
int main(int argc, char const *argv[])
{
    CircularQueue c(4);
    cout<<c.enqueue(10);
    cout<<c.enqueue(15);
    cout<<c.enqueue(18);
    cout<<c.enqueue(20);

cout<<endl;
    cout<<c.dequeue();
    cout<<c.dequeue();
    cout<<c.dequeue();

    cout<<endl;

    cout<<endl;
    cout<<c.enqueue(11);
    cout<<c.enqueue(11);
    cout<<c.enqueue(11);
    cout<<c.enqueue(11);
    cout<<c.enqueue(11);
    
    
    
    
    
    return 0;
}
