#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,t,n,c,k,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n>>c;
		for(i=0;i<n;i++)
		{
			cin>>k;
			sum+=k;
		}
		if(c>=sum)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
