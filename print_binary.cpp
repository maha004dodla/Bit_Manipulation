#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
	int i;
	for(i=7; i>=0; i--)
	{
		cout<<((n>>i)&1);
	}
	cout<<endl;
}
int main()
{
	int n,i;
	cin>>n;
	for(i=0; i<n; i++)
	{
		binary(i);
	}
}