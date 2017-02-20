#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int _t,t,n,m,i,l,r,x,y,ans,mul;
	cin>>_t;
	while(_t--)
	{
		cin>>n>>m;
		ans=0;
		long long int arr[n+1];
		
		for(i=1;i<=n;i++)
			cin>>arr[i];
		
		while(m--)
		{
			cin>>t>>l>>r;
			if(t==1)
			{
				cin>>x;
				for(i=l;i<=r;i++)
				{
					arr[i]=arr[i]*x;
				}
			}
			else if(t==2)
			{
				cin>>y;
				for(i=l;i<=r;i++)
				{
					arr[i]=(i-l+1)*y;
				}
			}
			else
			{
				mul=1;
				for(i=l;i<=r;i++)
				{
					mul*=arr[i];
				}			
				while(mul%10==0)
				{
					ans++;
					mul=mul/10;
				}	
			}
			
		}
		cout<<ans<<endl;
	}
	return 0;
}
