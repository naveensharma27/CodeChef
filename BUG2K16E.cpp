#include<iostream>
using namespace std;
int main()
{
	long long int t,n,k,c,m,i,j,z;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		c=0;
		cin>>n>>k;
		z=k;
		for(j=1;j<=n;j++)
		{
			if(j!=z)
			c+=j;
			else
			{
				z=z*k;
			}
				
		}
		cout<<"Case #"<<i<<": "<<c<<endl;
	}
	return 0;
}
