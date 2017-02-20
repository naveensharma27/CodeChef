#include<iostream>
#include<cstring>
using namespace std;
int ans[300];
int t,n,i,j,p,c,d;

int fact()
{
	d=1;
	c=0;
	ans[0]=1;
	for(i=2;i<=n;i++)
	{
		for(j=0;j<d;j++)
		{
			p=ans[j]*i+c;
			ans[j]=p%10;
			c=p/10;
		}
		while(c)
		{
			ans[d++]=c%10;
			c=c/10;
		}
	}
	for(i=d-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	cin>>t;
	while(t--)
	{
		memset(ans,0,sizeof(ans));
		cin>>n;
		fact();
	}
	return 0;
}
