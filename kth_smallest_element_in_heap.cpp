#include<iostream>
#include<queue>
using namespace std;



int main(int argc, char const *argv[])
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    priority_queue<int>q;

    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }
    
    for (int i = 0; i < k; i++)
    {
        q.pop();
    }
    cout<<q.top();;
    
    
    
    
    return 0;
}
