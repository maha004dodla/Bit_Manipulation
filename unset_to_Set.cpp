#include<iostream>
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
	int n,pos,temp;
	cin>>n;
	cin>>pos;
	cout<<n<<endl;
	binary(n);
	temp=(1<<pos);
	n=n | temp;
	cout<<n<<endl;
	binary(n);
}