//Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. 
//Find the two elements that appear only once.
#include<bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int>& nums) 
{
        vector<int>l;
        vector<int>m;
        vector<int>res;
        int n=0;
        for(auto i:nums)
        {
            n^=i;
        }
        //cout<<n<<endl;
        int i=0,val;
        while(n!=0)
        {
            if((n&1)==1)
            {
                val=i;
                break;
            }
            i++;
            n=n>>1;
        }
        for(auto i:nums)
        {
            if(i&(1<<val))
            {
                l.push_back(i);
            }
            else
            {
                m.push_back(i);
            }
        }
        int x1=0,x2=0;
        for(auto i:m)
        {
            //cout<<i<<" ";
            x1^=i;
        }
        for(auto i:l)
        {
            //cout<<i<<" ";
            x2^=i;
        }
        res.push_back(x1);
        res.push_back(x2);
        return res;
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
	vector<int>res=singleNumber(l);
	for(auto i:res)
	{
		cout<<i<<" ";
	}

}