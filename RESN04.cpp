#include<bits/stdc++.h>
using namespace std;

int main()
{
	long i,t,k,n,r;
	cin>>t;
	while(t--)
	{
		k=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>r;
			k+=r/i;
		}
		if(k%2==0)
			cout<<"BOB"<<endl;
		else
			cout<<"ALICE"<<endl;
	}
	return 0;
}
