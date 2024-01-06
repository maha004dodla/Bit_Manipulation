#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0,k;
	cin>>n;
	vector<int>l;
	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;
		l.push_back(a);
	}
	cin>>k;
	for(auto i:l)
	{
		res^=i;
	}
	int val=res^k;
	int ans=__builtin_popcount(val);
	cout<<ans<<endl;
}