#include <iostream>
#include<queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insertion(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletion()
    {
        if(size == 0)
        {
            
            cout<<"Heap is empty"<<endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i<size)
        {
            int leftIndex = i*2;
            int rightIndex = i*2+1;

            if (leftIndex < size && arr[leftIndex] > arr[i])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[rightIndex] > arr[i])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
            
        }
        
    }

    

    void print ()
    {
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

    
};

void heapify(int arr[], int size, int i)
    {
        int targeted = i;
        int left = i*2;
        int right = i*2 +1;

        if (left <= size && arr[left]> arr[targeted])
        {
            targeted = left;
        }

        if (right <= size && arr[right] > arr[targeted])
        {
            targeted = right;
        }
        
        if (targeted != i)
        {
            swap(arr[targeted], arr[i]);
            heapify(arr, size, targeted);
        }
        
        

    }


void heapsort (int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
    
}

int main(int argc, char const *argv[])
{
    heap h;
    h.insertion(54);
    h.insertion(12);
    h.insertion(58);
    h.insertion(76);
    //h.print();

    cout<<endl;

    // h.deletion();
    // h.deletion();
    // h.deletion();
    // h.deletion();
    // h.deletion();
    // h.print();

    // int arr[5] = {-1, 58, 76, 54, 12};
    //  int n = 4;

     int arr[] = {-1, 7, 10, 4, 3, 20, 15};
     int n =6;

    
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    heapsort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Using priority queue"<<endl;
    priority_queue<int>q;
    q.push(3);
    q.push(30);
    q.push(112);
    q.push(4);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;

    
    


    
    
    return 0;
}
