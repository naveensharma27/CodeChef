#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
bool p[5000001];
int main()
{
	int t,m,n,i,j;
	cin>>t;
	while(t--)
	{
		unsigned long long int ans=0;
		cin>>m>>n;
		ans=0;
		memset(p,true,sizeof(p));
		p[1]=false;
		for(i=2;i<ceil(sqrt(n));i++)
		{
			if(p[i])
			{
				for(j=2*i;j<=n;j+=i)
				{
					p[j]=false;
				}
			}
		}
		for(i=m;i<=n;i++)
		{
			if(p[i])
				ans+=i;
		}
		cout<<ans<<endl;
	}
	return 0;
}
