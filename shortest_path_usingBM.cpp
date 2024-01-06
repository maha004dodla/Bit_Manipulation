//Given input is no.of nodes and gives 2 nodes we have to find the shortest path between 
// 2 nodes such that adjacent nodes must have difference 2 bits ex:0010 1001 have 2 diiferences
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>a>>b;
	int res=a^b;
	int count=__builtin_popcount(res);
	if(count%2!=0)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<(count)/2<<endl;
	}
}