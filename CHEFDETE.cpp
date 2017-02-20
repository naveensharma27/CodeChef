#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,x;
	cin>>n;
	bool a[100005];
	memset(a,false,sizeof(a));
	for(i=0;i<n;i++)
	{
		cin>>x;
		a[x]=true;
	}
	for(i=1;i<=n;i++)
	{
		if(!a[i])
		cout<<i<<" ";
	}
	return 0;
}
