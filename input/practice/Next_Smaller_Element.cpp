#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int check(vector<int> arr, int num, int s, int i, int n)
{

   //cout<<num<<endl;
   if (i == n - 1)
   {
      if (s == num)
      {
         return -1;
      }
      else
      {
         return num;
      }
   }

   if (num > arr[i+1])
   {
      num = arr[i+1];
   }

   i++;

   return check(arr, num, s, i, n);
}

vector<int> nextSmallerElement(vector<int> arr, int n)
{

   vector<int> ans;

   for (int i = 0; i < n; i++)
   {

      int a = check(arr, arr[i], arr[i], i, n);
      
      ans.push_back(a);
   }

   for (int i = 0; i < ans.size(); i++)
   {
      cout<<ans[i]<<" ";
   }
   

  
   

   return ans;
}

int main(int argc, char const *argv[])
{
   vector<int> arr;
   arr.push_back(9);
   arr.push_back(10);
   arr.push_back(8);
   arr.push_back(7);

   int n = arr.size();
   // for (int i = 0; i < arr.size(); i++)
   // {
   //     cout<<arr[i]<<" ";
   // }
   nextSmallerElement(arr, n);

   return 0;
}
