#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,j,k,b,n,m,max,maxI,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>b>>m;
		max=0;
		while(n>0)
		{
			if(n%2==0)
			{
				max=max+n/2*m+b;
				m=2*m;
				n=n/2;
			}
			else
			{
				max=max+(n+1)/2*m+b;
				m=2*m;
				n=n-(n+1)/2;
			}
			
		}
		cout<<max-b<<endl;		
	}
	return 0;
}
