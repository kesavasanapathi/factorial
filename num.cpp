#include<iostream>
using namespace std;
int num(int n)
{
	int sum=0,r;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<num(n);
}