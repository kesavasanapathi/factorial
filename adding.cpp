#include<iostream>
using namespace std;
int num(int n)
{
	if(n!=0)
	{
		return n+num(n-1);
	}
	if(n==0)
	{
		return n;
	}
	
}
int main()

{
	int n;
	cin>>n;
	cout<<num(n);
}