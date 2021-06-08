//optimize method//
/*#include<iostream>
using namespace std;
int kesava[1000];
int factorial( int n)
{
	if(n<=1)
	{
		return 1;
	}
	f(kesava[n]!=-1)
	{
		return kesava[n];
	}
	return kesava[n]=n*(factorial(n-1));
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		kesava[i]=-1;
	}
	cout<<factorial(n);
}*/ 
// normal method
/*#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int kes=1;
	for(long long int i=2;i<=n;i++)
	{
		kes=kes*i;
		
	}
	cout<<kes;
}*/
//recursion method
#include<iostream>
using namespace std;
int fact(int n)
{
if(n<=1)
{
	return 1;
}
return n*fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n);
}
