#include<iostream>
using namespace std;
int setbit(int n)
{
	int i=0;
	while(n)
	{
		if(n&(1<<i))
		{
			return i;
		}
		i++;
	}
}
//110-index=1;
int main()
{
	int n,i;
	cin>>n;
	int arr[n],res=0;
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<n; i++)
	{
		res=res^arr[i];
	}
	cout<<res<<endl;
	int a1=0,a2=0;
	int j=setbit(res);
	for(i=0; i<n; i++)
	{
		if(arr[i]&(1<<j))
		{
			a1=a1^arr[i];
		}
		else
		{
			a2=a2^arr[i];
		}
	}
	cout<<a1<<" "<<a2;
}
/*010 001 010 001 011 101 100 100
  010 010 010 010 010 010 010 010

a1=2 2 3 
a2=1 1 5 4 4