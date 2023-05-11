#include<iostream>
#include<vector>
#include<queue>

using namespace std;

long long sumOfMaxAndMin(vector<int> &nums, int n, int k)
{
    int s = nums.size();
	queue<int>q;
	long long ans = 0;
	for(int i =0; i<= n-k; i++)
	{
		int j =0;
		int m=nums[i];
		int ma = nums[i];
		while(j!= k)
		{
			
			m = min(m, nums[i+j]);
            
            
			ma = max(ma, nums[i+j]);
            //cout<<ma<<" ";
			j++;
		}
		int add = m+ma;
        //cout<<add<<endl;
		q.push(add);
	}

	while(!q.empty())
	{
        //cout<<q.front()<<endl;
		int rem = q.front();
		ans = ans + q.front();
		q.pop();
	}
    //cout<<ans;
	return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(11);

    int n = nums.size();
    int k = 2;
    sumOfMaxAndMin(nums, n, k);
    return 0;
}
