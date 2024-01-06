//Given an integer array nums where every element appears three times except for one, which appears exactly once. 
//Find the single element and return it.
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) 
   {
        int i,j,ans=0,n=nums.size();
        for(i=0; i<32; i++)
        {
            int count=0;
            for(j=0; j<n; j++)
            {
                if((nums[j]&(1<<i)))
                {
                    count++;
                }
            }
            if(count%3!=0)
            {
                ans=ans|(1<<i);
            }
        }
        return ans;
    }
int main()
{
	int n;
	cin>>n;
	vector<int>l;
	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;
		l.push_back(a);
	}
	int res=singleNumber(l);
	cout<<res<<endl;
}