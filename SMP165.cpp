#include<bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
	long long int t,n,sum=0,cnt=0,i,ans,mod=1000000007,v,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==1)
		{
			cout<<0<<endl;
		}
		else
		{
			p=n/2-1;
			v=10;
			ans=1;
    		while(p>0)
   			{
      			 if(p&1)
       			{
					ans = ans*v;
       			   	ans = ans%mod;
				}
       			v = v*v;
     			v = v%mod;
        		p/= 2;
    		}
			ans=ans*9;
			ans=ans%mod;	
			cout<<ans<<endl;	
		}			
	}
	return 0;	
}
