#include<iostream>
using namespace std;
int kesava[100000];
int fabi(int n)
{
	if(n<=1)
	{
		return n;
	}
	kesava[0]=0;kesava[1]=1;
	for(int i=2;i<=n;i++)
	{
		kesava[i]=kesava[i-2]+kesava[i-1];
	}
	return kesava[n];
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		kesava[i]=-1;
	}
	cout<<fabi(n);
}