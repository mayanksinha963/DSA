#include <iostream>
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

int main(int argc, char const *argv[])
{
    heap h;
    h.insertion(54);
    h.insertion(12);
    h.insertion(58);
    h.insertion(76);
    h.print();

    cout<<endl;

    h.deletion();
    h.deletion();
    h.deletion();
    h.deletion();
    h.deletion();
    h.print();
    return 0;
}
