#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000000000000;
typedef long long int ll;
int main()
{
	ll t,n,m,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll cab[n+1][2];
		ll cust[m+1][4];
		
		double dist;
		int c;
		for(i=1;i<=n;i++)
		{
			cin>>cab[i][0]>>cab[i][1];
		}
		for(i=1;i<=m;i++)
		{
			cin>>cust[i][0]>>cust[i][1]>>cust[i][2]>>cust[i][3];
		}
		for(i=1;i<=m;i++)
		{
			double min=MAX;
			for(j=1;j<=n;j++)
			{
				ll h=cust[i][0]>cab[j][0]?cust[i][0]-cab[j][0]:cab[j][0]-cust[i][0];
				ll v=cust[i][1]>cab[j][1]?cust[i][1]-cab[j][1]:cab[j][1]-cust[i][1];
				
				dist=sqrt(v*v+h*h);
				if(min>dist)
				{
					min=dist;
					c=j;
				}
				
			}
			cout<<c<<endl;
			cab[c][0]=cust[i][2];
			cab[c][1]=cust[i][3];
		}		
	}
	return 0;
}
