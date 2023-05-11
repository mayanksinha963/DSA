#include<iostream>
#include<vector>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        int area = 0;
        for(int i =0; i<heights.size(); i++)
        {
            area=1;
            int back = i-1;
            
            int forward = i+1;
            while(heights[i] <= heights[back] && i!=0 && back!= 0)
            {
                cout<<1;
                area ++;
                back--;
            }
            // cout<<" ";
            while(heights[i] <=heights[forward] && i!= heights.size() && forward!= heights.size())
            {
                // cout<<1;;
                area++;
                forward++;
            }
            // cout<<endl;
            // cout<<area<<" ";
            area = area * heights[i];
            ans = max(area, ans);
        }
        
        return ans;
    }

int main(int argc, char const *argv[])
{
    vector<int>heights;
    heights.push_back(2);
    heights.push_back(4);
    

    int ans;

    ans = largestRectangleArea(heights);
    cout<<ans<<" ";
    return 0;
}
