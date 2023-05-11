#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int arr[] = {8,10,17,1,3};
   int n= sizeof(arr)/sizeof(arr[0]);
   int l= 0;
   int h= n-1;
   int mid = (l+h)/2;
   int key;
   cout<<"Enter the key"<<endl;
   cin>>key;
   
   
   while (l <= h)
   {
      
      //cout<<"mayank";
      if (key == arr[mid])
      {
         cout<<mid;
         break;
      }
      else if (arr[l]>=arr[mid])
      {
         
         if (key >= arr[mid] && key <= arr[h])
         {
            l = mid +1;
         }
         else{
            h = mid-1;
         }
         
      }

      else if (arr[l]<=arr[mid])
      {
         
          if (key >= arr[l] && key <= arr[mid])
         {
            h= mid-1;
         }
         else{
           l= mid+1;
         }
      }
      mid = (l+h)/2;
   }
   

   return 0;
}
