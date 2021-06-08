#include<iostream>
using namespace std;
bool prime(int n,int i=2)
{
	if(n<=2)
	{
		if(n==2)
		{
			return true;
			
		}
		else{
			return false;
		}
	}
	if(n%i==0)
	{
		return false;
	}
	if(i*i>n)
	{
		return true;
	}
	prime(n,i+i);
}
int main()
{
	int n;
	cin>>n;
	cout<<prime(n);
}