#include<iostream>
using namespace std;

//Reapeted Squaring Algo

int main()
{
	long long int t,n,ans,i,mod=1000000007,v,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=1;
		v=2;
		p=n-1;
		if(n<3)
		{
			cout<<0<<endl;
		}
		else
		{
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
			cout<<ans-2<<endl;	
		}

	}
	return 0;
}
